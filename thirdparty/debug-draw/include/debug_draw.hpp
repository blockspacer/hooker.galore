#pragma once

// Wrapper around original debug_draw.hpp with `glm::vec3` for `ddVec3`.

#include <glm/vec3.hpp>

typedef glm::vec3 ddVec3;
typedef const ddVec3& ddVec3_In;
typedef ddVec3& ddVec3_Out;

#define DEBUG_DRAW_VEC3_TYPE_DEFINED 1

#include <debug_draw_impl.hpp>
