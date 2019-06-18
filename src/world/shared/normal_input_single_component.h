#pragma once

#include "core/input/controls.h"

#include <cstdint>

namespace hg {

class WindowSystem;

/** `NormalInputSingleComponent` contains information about keyboard and mouse input changes between normal frames. */
class NormalInputSingleComponent final {
public:
    /** Return whether specified `control` is down. */
    bool is_down(Control control) const noexcept;

    /** Return whether specified `control` is pressed. */
    bool is_pressed(Control control) const noexcept;

    /** Return whether specified `control` is released. */
    bool is_released(Control control) const noexcept;

    /** Return horizontal mouse position. */
    int32_t get_mouse_x() const noexcept;

    /** Return vertical mouse position. */
    int32_t get_mouse_y() const noexcept;

    /** Return delta horizontal mouse position. */
    int32_t get_delta_mouse_x() const noexcept;

    /** Return delta vertical mouse position. */
    int32_t get_delta_mouse_y() const noexcept;

    /** Return mouse wheel delta. */
    int32_t get_mouse_wheel() const noexcept;

    /** Return UTF-8 text entered since last update. */
    const char* get_text() const noexcept;

private:
    int32_t m_mouse_x = 0;
    int32_t m_mouse_y = 0;
    int32_t m_mouse_delta_x = 0;
    int32_t m_mouse_delta_y = 0;
    int32_t m_mouse_wheel = 0;
    bool m_previous_mouse_buttons[5] {};
    bool m_mouse_buttons[5] {};
    bool m_previous_keys[512] {};
    bool m_keys[512] {};
    char m_text[32] {};

    friend class WindowSystem;
};

} // namespace hg
