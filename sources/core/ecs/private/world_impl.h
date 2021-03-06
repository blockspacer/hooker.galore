#pragma once

#include "core/ecs/world.h"

namespace hg {

template <typename T>
const T* World::try_ctx() const {
    const T* result = entt::registry::try_ctx<T>();
    if (result == nullptr && m_parent != nullptr) {
        return m_parent->try_ctx<T>();
    }
    return result;
}

template <typename T>
T* World::try_ctx() {
    return const_cast<T*>(std::as_const(*this).template try_ctx<T>());
}

template <typename T>
const T& World::ctx() const {
    const T* result = entt::registry::try_ctx<T>();
    if (result == nullptr && m_parent != nullptr) {
        return m_parent->ctx<T>();
    }
    return *result;
}

template <typename T>
T& World::ctx() {
    return const_cast<T&>(std::as_const(*this).template ctx<T>());
}

template <typename T>
bool World::has_ctx() const {
    return try_ctx<T>() != nullptr;
}

template <typename T>
bool World::is_owned_ctx() const {
    return entt::registry::try_ctx<T>() != nullptr;
}

template <typename T>
void World::each_registered_single_component(T callback) const {
    ComponentManager::each_registered([&](entt::meta_type component_type) {
        entt::meta_handle single_component_handle = ctx(entity, component_type);
        if (single_component_handle) {
            callback(single_component_handle);
        }
    });
}

//////////////////////////////////////////////////////////////////////////

template <typename T>
void World::each_registered_component(entt::entity entity, T callback) const {
    ComponentManager::each_registered([&](entt::meta_type component_type) {
        entt::meta_handle component_handle = get(entity, component_type);
        if (component_handle) {
            callback(component_handle);
        }
    });
}

template <typename T>
void World::each_editable_component(entt::entity entity, T callback) const {
    ComponentManager::each_editable([&](entt::meta_type component_type) {
        entt::meta_handle component_handle = get(entity, component_type);
        if (component_handle) {
            callback(component_handle);
        }
    });
}

//////////////////////////////////////////////////////////////////////////

template <typename... Tags>
void World::add_tags(Tags&& ... tags) {
    (add_tag(tags), ...);
}

template <typename... Tags>
void World::remove_tags(Tags&& ... tags) {
    (remove_tag(tags), ...);
}

template <typename... Tags>
bool World::check_tags(Tags&& ... tags) const {
    return (check_tag(tags) && ...);
}

template <typename T>
void World::each_tag(T callback) const {
    for (size_t i = 0; i < m_all_tags.size(); i++) {
        if (m_owned_tags[i] || m_inherited_tags[i] || m_propagated_tags[i] > 0) {
            calback(Tag::get_tag_by_index(i));
        }
    }
}

template <typename T>
void World::each_owned_tag(T callback) const {
    for (size_t i = 0; i < m_owned_tags.size(); i++) {
        if (m_owned_tags[i]) {
            calback(Tag::get_tag_by_index(i));
        }
    }
}

template <typename T>
void World::each_active_tag(T callback) const {
    for (size_t i = 0; i < m_all_tags.size(); i++) {
        if (m_all_tags[i]) {
            calback(Tag::get_tag_by_index(i));
        }
    }
}

} // namespace hg
