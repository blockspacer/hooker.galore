#include "core/ecs/system_descriptor.h"
#include "core/ecs/world.h"
#include "world/editor/editor_history_single_component.h"
#include "world/editor/editor_history_system.h"
#include "world/editor/editor_menu_single_component.h"
#include "world/editor/editor_tags.h"
#include "world/shared/normal_input_single_component.h"

#include <imgui.h>

namespace hg {

SYSTEM_DESCRIPTOR(
    SYSTEM(EditorHistorySystem),
    TAGS(editor),
    BEFORE("ImguiPassSystem"),
    AFTER("EditorMenuSystem", "WindowSystem", "ImguiFetchSystem")
)

EditorHistorySystem::EditorHistorySystem(World& world)
        : NormalSystem(world) {
    auto& editor_history_single_component = world.set<EditorHistorySingleComponent>();
    editor_history_single_component.undo_action = std::make_shared<bool>(false);
    editor_history_single_component.redo_action = std::make_shared<bool>(false);

    auto& editor_menu_single_component = world.ctx<EditorMenuSingleComponent>();
    editor_menu_single_component.add_item("1Edit/0Undo", editor_history_single_component.undo_action, "Ctrl+Z");
    editor_menu_single_component.add_item("1Edit/1Redo", editor_history_single_component.redo_action, "Ctrl+Shift+Z");
}

void EditorHistorySystem::update(float /*elapsed_time*/) {
    auto& editor_history_single_component = world.ctx<EditorHistorySingleComponent>();
    auto& normal_input_single_component = world.ctx<NormalInputSingleComponent>();

    if (ImGui::Begin("History", nullptr, ImGuiWindowFlags_NoFocusOnAppearing)) {
        int32_t rewind_offset = 0;
        for (size_t i = 1; i <= EditorHistorySingleComponent::HISTORY_BUFFER_SIZE; i++) {
            const size_t index = (editor_history_single_component.undo_position + i) % EditorHistorySingleComponent::HISTORY_BUFFER_SIZE;
            if (!editor_history_single_component.undo[index].actions.empty()) {
                ImGuiTreeNodeFlags flags = ImGuiTreeNodeFlags_OpenOnDoubleClick | ImGuiTreeNodeFlags_NoTreePushOnOpen | ImGuiTreeNodeFlags_Leaf | ImGuiTreeNodeFlags_Selected;
                ImGui::TreeNodeEx(reinterpret_cast<void*>(index), flags, "%s", editor_history_single_component.undo[index].description.c_str());
                if (ImGui::IsItemClicked()) {
                    rewind_offset = -int32_t(EditorHistorySingleComponent::HISTORY_BUFFER_SIZE - i);
                }
            }
        }
        for (auto it = editor_history_single_component.redo.rbegin(); it != editor_history_single_component.redo.rend(); ++it) {
            ImGuiTreeNodeFlags flags = ImGuiTreeNodeFlags_OpenOnDoubleClick | ImGuiTreeNodeFlags_NoTreePushOnOpen | ImGuiTreeNodeFlags_Leaf;
            ImGui::TreeNodeEx(reinterpret_cast<void*>(EditorHistorySingleComponent::HISTORY_BUFFER_SIZE + std::distance(editor_history_single_component.redo.rbegin(), it)), flags, "%s", it->description.c_str());
            if (ImGui::IsItemClicked()) {
                rewind_offset = 1 + int32_t(std::distance(editor_history_single_component.redo.rbegin(), it));
            }
        }
        while (rewind_offset < 0) {
            editor_history_single_component.perform_undo(world);
            rewind_offset++;
        }
        while (rewind_offset > 0) {
            editor_history_single_component.perform_redo(world);
            rewind_offset--;
        }
    }
    ImGui::End();

    if ((normal_input_single_component.is_down(Control::KEY_CTRL) && !normal_input_single_component.is_down(Control::KEY_SHIFT) && normal_input_single_component.is_pressed(Control::KEY_Z)) ||
        *editor_history_single_component.undo_action) {
        editor_history_single_component.perform_undo(world);
    }
    *editor_history_single_component.undo_action = false;

    if ((normal_input_single_component.is_down(Control::KEY_CTRL) && normal_input_single_component.is_down(Control::KEY_SHIFT) && normal_input_single_component.is_pressed(Control::KEY_Z)) ||
        *editor_history_single_component.redo_action) {
        editor_history_single_component.perform_redo(world);
    }
    *editor_history_single_component.redo_action = false;
}

} // namespace hg
