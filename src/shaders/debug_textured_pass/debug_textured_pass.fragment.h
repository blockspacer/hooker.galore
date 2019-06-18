#include <cstdint>
 
static const uint8_t debug_textured_pass_fragment_glsl[366] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x4b, 0x01, // _texture......K.
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ..varying highp 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, // vec3 v_color0;.v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, // 2 v_texcoord0;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // niform sampler2D
	0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, //  s_texture;.void
	0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, //  main ().{.  low
	0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, // p vec4 tmpvar_1;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_1.xyz 
	0x3d, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, // = vec3(1.0, 1.0,
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, //  1.0);.  tmpvar_
	0x31, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, // 1.w = texture2D 
	0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, // (s_texture, v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, // xcoord0).x;.  hi
	0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // ghp vec4 tmpvar_
	0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, // 2;.  tmpvar_2.w 
	0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // = 1.0;.  tmpvar_
	0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, // 2.xyz = v_color0
	0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ;.  gl_FragColor
	0x20, 0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x74, //  = (tmpvar_1 * t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // mpvar_2);.}...
};
 
static const uint8_t debug_textured_pass_fragment_spv[1026] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdc, 0x03, // _texture........
	0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x9b, 0x00, // ....#...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // ................
	0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, // ......GLSL.std.4
	0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // 50..............
	0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x67, 0x00, // in....X.......g.
	0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x24, 0x00, // ..main........$.
	0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, // ..s_textureSampl
	0x65, 0x72, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x27, 0x00, 0x00, 0x00, 0x73, 0x5f, // er........'...s_
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, // textureTexture..
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x58, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // ......X...v_colo
	0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x76, 0x5f, // r0............v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x67, 0x00, // texcoord0.....g.
	0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, // ..bgfx_FragData0
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...$...".....
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...$...!.....
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...'...".....
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x27, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...'...!.....
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x58, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...X.........
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x01, 0x00, // ..G.............
	0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x67, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, // ..G...g.........
	0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, // ..........!.....
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, // ................
	0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, // ...... .........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, // ................
	0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, // ................
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, // ................
	0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..#...........;.
	0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, // ..#...$....... .
	0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..&...........;.
	0x04, 0x00, 0x26, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, // ..&...'.........
	0x03, 0x00, 0x33, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, // ..3.......+.....
	0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x20, 0x00, 0x04, 0x00, 0x57, 0x00, // ..J......? ...W.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x57, 0x00, // ..........;...W.
	0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x5b, 0x00, // ..X....... ...[.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x5b, 0x00, // ..........;...[.
	0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x66, 0x00, // .......... ...f.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x66, 0x00, // ..........;...f.
	0x00, 0x00, 0x67, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, // ..g.......6.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, // ................
	0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x25, 0x00, // ......=.......%.
	0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x28, 0x00, // ..$...=.......(.
	0x00, 0x00, 0x27, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x18, 0x00, 0x00, 0x00, 0x59, 0x00, // ..'...=.......Y.
	0x00, 0x00, 0x58, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x5d, 0x00, // ..X...=.......].
	0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x33, 0x00, 0x00, 0x00, 0x98, 0x00, // ......V...3.....
	0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, // ..(...%...W.....
	0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00, 0x00, 0x51, 0x00, // ..........]...Q.
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x9a, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x4a, 0x00, // ..P...........J.
	0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0x51, 0x00, // ..J...J.......Q.
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........Y.....
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x59, 0x00, // ..Q...........Y.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x8a, 0x00, // ......Q.........
	0x00, 0x00, 0x59, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0d, 0x00, // ..Y.......P.....
	0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x8a, 0x00, // ................
	0x00, 0x00, 0x4a, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x8c, 0x00, // ..J.............
	0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x67, 0x00, // ..........>...g.
	0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, // ..........8.....
	0x00, 0x00,                                                                                     // ..
};
 
static const uint8_t debug_textured_pass_fragment_dx9[291] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, // _texture0.......
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, // ........ .CTAB..
	0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, // ..S.............
	0x00, 0x00, 0x04, 0x11, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, // ......L...0.....
	0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, // ......<.......s_
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0xab, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, // texture.........
	0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, // ..........ps_3_0
	0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, // .Microsoft (R) H
	0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, // LSL Shader Compi
	0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x00, 0x00, // ler 10.1..Q.....
	0x0f, 0xa0, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....?..........
	0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x90, 0x1f, 0x00, // ................
	0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, // ................
	0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, // ......B.........
	0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, // ................
	0x00, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x05, 0x00, // ................
	0x00, 0x03, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0x00, 0xa0, 0xff, 0xff, // ................
	0x00, 0x00, 0x00,                                                                               // ...
};
 
static const uint8_t debug_textured_pass_fragment_dx11[478] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xb8, 0x01, // _texture0.......
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xb0, 0xbc, 0xb8, 0x34, 0x31, 0x0a, 0x0b, 0xaf, 0x3a, 0x74, // ..DXBC...41...:t
	0xcf, 0x69, 0x5c, 0x5d, 0x24, 0x78, 0x01, 0x00, 0x00, 0x00, 0xb8, 0x01, 0x00, 0x00, 0x03, 0x00, // .i.]$x..........
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, // GNl...........P.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x62, 0x00, // ..............b.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, // ......SV_POSITIO
	0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, // N.COLOR.TEXCOORD
	0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, // ..OSGN,.........
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // .. .............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, // ..........SV_TAR
	0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xdc, 0x00, 0x00, 0x00, 0x40, 0x00, // GET...SHDR....@.
	0x00, 0x00, 0x37, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ..7...Z....`....
	0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, // ..X....p......UU
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, // ..b...r.......b.
	0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, // ..2.......e.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, // ......h.......E.
	0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, // ..........F.....
	0x00, 0x00, 0x96, 0x73, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, // ...s.......`....
	0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, // ..6...........:.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, // ......6.........
	0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x00, // ..:.......6...r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x38, 0x00, // ......F.......8.
	0x00, 0x0a, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, // ... ......F.....
	0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, // ...@.....?...?..
	0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,             // .?...?>.......
};
 
static const uint8_t debug_textured_pass_fragment_mtl[617] =
{
	0x46, 0x53, 0x48, 0x06, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH............s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x02, // _texture......C.
	0x00, 0x00, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, 0x64, 0x65, 0x20, 0x3c, 0x6d, 0x65, 0x74, 0x61, // ..#include <meta
	0x6c, 0x5f, 0x73, 0x74, 0x64, 0x6c, 0x69, 0x62, 0x3e, 0x0a, 0x23, 0x69, 0x6e, 0x63, 0x6c, 0x75, // l_stdlib>.#inclu
	0x64, 0x65, 0x20, 0x3c, 0x73, 0x69, 0x6d, 0x64, 0x2f, 0x73, 0x69, 0x6d, 0x64, 0x2e, 0x68, 0x3e, // de <simd/simd.h>
	0x0a, 0x0a, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, // ..using namespac
	0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // e metal;..struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x62, 0x67, // .{.    float4 bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x5b, 0x5b, 0x63, // fx_FragData0 [[c
	0x6f, 0x6c, 0x6f, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x73, // olor(0)]];.};..s
	0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, // truct xlatMtlMai
	0x6e, 0x5f, 0x69, 0x6e, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // n_in.{.    float
	0x33, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, // 3 v_color0 [[use
	0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // r(locn0)]];.    
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // float2 v_texcoor
	0x64, 0x30, 0x20, 0x5b, 0x5b, 0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x31, 0x29, // d0 [[user(locn1)
	0x5d, 0x5d, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, // ]];.};..fragment
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, //  xlatMtlMain_out
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, //  xlatMtlMain(xla
	0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, // tMtlMain_in in [
	0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, // [stage_in]], tex
	0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, // ture2d<float> s_
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, // texture [[textur
	0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, // e(0)]], sampler 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // s_textureSampler
	0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, //  [[sampler(0)]])
	0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, // .{.    xlatMtlMa
	0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, // in_out out = {};
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, // .    out.bgfx_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x20, 0x3d, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, // agData0 = float4
	0x28, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x2c, 0x20, // (1.0, 1.0, 1.0, 
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, // s_texture.sample
	0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, // (s_textureSample
	0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // r, in.v_texcoord
	0x30, 0x29, 0x2e, 0x78, 0x29, 0x20, 0x2a, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x28, 0x69, // 0).x) * float4(i
	0x6e, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, // n.v_color0, 1.0)
	0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, // ;.    return out
	0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00,                                           // ;.}......
};
