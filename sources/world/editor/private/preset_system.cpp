#include "core/base/split.h"
#include "core/ecs/world.h"
#include "world/editor/editor_component.h"
#include "world/editor/history_single_component.h"
#include "world/editor/preset_single_component.h"
#include "world/editor/preset_system.h"
#include "world/editor/selected_entity_single_component.h"
#include "world/shared/normal_input_single_component.h"
#include "world/shared/render/camera_single_component.h"
#include "world/shared/render/outline_component.h"
#include "world/shared/transform_component.h"
#include "world/shared/window_single_component.h"

#include <SDL2/SDL_timer.h>
#include <algorithm>
#include <fmt/format.h>
#include <ghc/filesystem.hpp>
#include <imgui.h>
#include <imgui_internal.h>

namespace hg {

PresetSystem::PresetSystem(World& world) noexcept
        : NormalSystem(world) {
    world.set<PresetSingleComponent>();
}

void PresetSystem::update(float /*elapsed_time*/) {
    auto& camera_single_component = world.ctx<CameraSingleComponent>();
    auto& history_single_component = world.ctx<HistorySingleComponent>();
    auto& normal_input_single_component = world.ctx<NormalInputSingleComponent>();
    auto& preset_single_component = world.ctx<PresetSingleComponent>();
    auto& window_single_component = world.ctx<WindowSingleComponent>();

    if (ImGui::Begin("Presets", nullptr, ImGuiWindowFlags_NoFocusOnAppearing)) {
        char buffer[255] = { '\0' };
        ImGui::InputText("Filter", buffer, sizeof(buffer));
        ImGui::Separator();

        std::string lower_case_filter = buffer;
        std::transform(lower_case_filter.begin(), lower_case_filter.end(), lower_case_filter.begin(), ::tolower);

        ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.f, 0.f, 0.f, 0.f));
        ImGui::BeginChildFrame(ImGui::GetID("level-frame"), ImVec2(0.f, 0.f));
        ImGui::PopStyleColor();

        std::vector<std::string> directories;
        bool is_last_item_open = true;

        intptr_t idx = 0;
        for (auto& [preset_name, preset] : preset_single_component.presets) {
            std::string lower_case_name = preset_name;
            std::transform(lower_case_name.begin(), lower_case_name.end(), lower_case_name.begin(), ::tolower);

            if (lower_case_filter.empty() || lower_case_name.find(lower_case_filter) != std::string::npos) {
                std::vector<std::string> preset_path = split(preset_name, ghc::filesystem::path::preferred_separator);

                auto directories_it = directories.begin();
                for (auto preset_path_it = preset_path.begin(); preset_path_it != preset_path.end(); ++preset_path_it) {
                    if (directories_it != directories.end()) {
                        if (*directories_it != *preset_path_it) {
                            for (auto it = directories_it; it != directories.end(); ++it) {
                                if (std::next(it) != directories.end() || is_last_item_open) {
                                    ImGui::TreePop();
                                }
                            }
                            directories.erase(directories_it, directories.end());
                            directories_it = directories.end();
                            is_last_item_open = true;
                        } else {
                            ++directories_it;
                            continue;
                        }
                    }
                    if (is_last_item_open) {
                        if (std::next(preset_path_it) != preset_path.end()) {
                            directories.push_back(*preset_path_it);
                            directories_it = directories.end();

                            is_last_item_open = ImGui::TreeNode(preset_path_it->c_str());
                            if (!is_last_item_open) {
                                break;
                            }
                        } else {
                            const auto* const tree_node_id = reinterpret_cast<void*>(++idx);
                            ImGui::TreeNodeEx(tree_node_id, ImGuiTreeNodeFlags_OpenOnDoubleClick | ImGuiTreeNodeFlags_NoTreePushOnOpen | ImGuiTreeNodeFlags_Leaf, "%s", preset_path_it->c_str());
                            if (ImGui::IsItemClicked()) {
                                ImGuiWindow* window = ImGui::GetCurrentWindowRead();
                                ImGui::SetActiveID(window->GetID(tree_node_id), window);

                                if (ImGui::IsMouseDoubleClicked(0)) {
                                    place_preset(preset_single_component, history_single_component, camera_single_component, preset_name, false);
                                }
                            }
                            if (ImGui::BeginDragDropSource(ImGuiDragDropFlags_SourceNoPreviewTooltip)) {
                                ImGui::SetDragDropPayload("place_preset", preset_name.c_str(), preset_name.size() + 1);
                                ImGui::EndDragDropSource();
                            }
                        }
                    }
                }
            }
        }
        for (auto it = directories.begin(); it != directories.end(); ++it) {
            if (std::next(it) != directories.end() || is_last_item_open) {
                ImGui::TreePop();
            }
        }

        ImGui::EndChildFrame();
    }
    ImGui::End();

    if (const ImGuiPayload* payload = ImGui::GetDragDropPayload(); payload != nullptr) {
        if (payload->IsDataType("place_preset")) {
            if (!world.valid(preset_single_component.placed_entity)) {
                const auto* const preset_name = reinterpret_cast<const char*>(payload->Data);
                preset_single_component.placed_entity = place_preset(preset_single_component, history_single_component, camera_single_component, preset_name, true);
                if (!world.has<TransformComponent>(preset_single_component.placed_entity)) {
                    preset_single_component.placed_entity = entt::null;
                    history_single_component.end_continuous();
                }
            }
            if (world.valid(preset_single_component.placed_entity)) {
                assert(window_single_component.width != 0);
                assert(window_single_component.height != 0);
                
                const float normalized_mouse_position_x = static_cast<float>(normal_input_single_component.get_mouse_x()) / window_single_component.width * 2.f - 1.f;
                const float normalized_mouse_position_y = 1.f - static_cast<float>(normal_input_single_component.get_mouse_y()) / window_single_component.height * 2.f;
                const glm::vec4 screen_space_position(normalized_mouse_position_x, normalized_mouse_position_y, 1.f, 1.f);
 
                glm::vec4 projection_space_position = camera_single_component.inverse_projection_matrix * screen_space_position;
                projection_space_position /= projection_space_position.w * camera_single_component.z_far / PLACE_PRESET_DISTANCE;

                assert(world.has<TransformComponent>(preset_single_component.placed_entity));
                auto& transform_component = world.get<TransformComponent>(preset_single_component.placed_entity);
                transform_component.translation = camera_single_component.translation + camera_single_component.rotation * glm::vec3(projection_space_position);
            }
        } else if (world.valid(preset_single_component.placed_entity)) {
            preset_single_component.placed_entity = entt::null;
            history_single_component.end_continuous();
        }
    } else if (world.valid(preset_single_component.placed_entity)) {
        preset_single_component.placed_entity = entt::null;
        history_single_component.end_continuous();
    }
}

entt::entity PresetSystem::place_preset(PresetSingleComponent& preset_single_component, HistorySingleComponent& history_single_component,
                                        CameraSingleComponent& camera_single_component, const std::string& preset_name, bool is_continuous) {
    auto& selected_entity_single_component = world.ctx<SelectedEntitySingleComponent>();

    assert(preset_single_component.presets.count(preset_name) > 0);
    std::vector<entt::meta_any>& preset = preset_single_component.presets[preset_name];

    assert(!preset_name.empty());
    std::vector<std::string> preset_path = split(preset_name, ghc::filesystem::path::preferred_separator);
    const std::string& preset_short_path = preset_path.back();

    HistorySingleComponent::HistoryChange* change = is_continuous ? history_single_component.begin_continuous(world, "") : history_single_component.begin(world, "");
    if (change != nullptr) {
        entt::entity entity = change->create_entity(world, ghc::filesystem::path(preset_short_path).replace_extension("").string());

        assert(world.has<EditorComponent>(entity));
        auto& editor_component = world.get<EditorComponent>(entity);
        change->description = fmt::format("Create entity \"{}\"", editor_component.name);

        for (entt::meta_any& component_prototype : preset) {
            change->assign_component(world, entity, component_prototype);
        }

        if (auto * transform_component = world.try_get<TransformComponent>(entity); transform_component != nullptr) {
            TransformComponent changed_transform_component = *transform_component;
            changed_transform_component.translation = camera_single_component.translation + camera_single_component.rotation * glm::vec3(0.f, 0.f, PLACE_PRESET_DISTANCE);
            entt::meta_any any_changed_transform_component(changed_transform_component);
            change->replace_component(world, entity, any_changed_transform_component);
        }

        selected_entity_single_component.select_entity(world, entity);

        return entity;
    }

    return entt::null;
}

} // namespace hg