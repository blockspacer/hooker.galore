$input a_position, a_normal, a_tangent, a_texcoord0
$output v_position

#include <bgfx_shader.sh>

void main() {
    gl_Position = mul(u_modelViewProj, vec4(a_position, 1.0));
    v_position  = gl_Position;
}
