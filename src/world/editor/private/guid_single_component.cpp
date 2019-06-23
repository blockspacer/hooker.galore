#include "world/editor/guid_single_component.h"

#include <SDL2/SDL_timer.h>

namespace hg {

uint32_t GuidSingleComponent::acquire_unique_guid(entt::entity entity) noexcept {
    uint32_t result = SDL_GetTicks() & 0x00FFFFFF;
    while (guid_to_entity.count(result) > 0) {
        result = (result + 1) & 0x00FFFFFF;
    }
    guid_to_entity[result] = entity;
    return result;
}

} // namespace hg