#include <cstdint>
 
static const uint8_t quad_pass_fragment_glsl[212] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xb1, 0x00, // _texture........
	0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // ..varying highp 
	0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // vec2 v_texcoord0
	0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, // ;.uniform sample
	0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x3b, 0x0a, 0x76, // r2D s_texture;.v
	0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // oid main ().{.  
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lowp vec4 tmpvar
	0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, // _1;.  tmpvar_1 =
	0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, //  texture2D (s_te
	0x78, 0x74, 0x75, 0x72, 0x65, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // xture, v_texcoor
	0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, // d0);.  gl_FragCo
	0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, // lor = tmpvar_1;.
	0x7d, 0x0a, 0x0a, 0x00,                                                                         // }...
};
 
static const uint8_t quad_pass_fragment_spv[750] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc8, 0x02, // _texture........
	0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0x7c, 0x00, // ....#.........|.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // ................
	0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, // ......GLSL.std.4
	0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // 50..............
	0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x10, 0x00, // in....H...Q.....
	0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, // ................
	0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x21, 0x00, 0x00, 0x00, 0x73, 0x5f, // in........!...s_
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, // textureSampler..
	0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x24, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, // ......$...s_text
	0x75, 0x72, 0x65, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ureTexture......
	0x05, 0x00, 0x48, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // ..H...v_texcoord
	0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x51, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, // 0.....Q...bgfx_F
	0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x21, 0x00, // ragData0..G...!.
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x21, 0x00, // ..".......G...!.
	0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00, // ..!.......G...$.
	0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x24, 0x00, // ..".......G...$.
	0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x48, 0x00, // ..!.......G...H.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x51, 0x00, // ..........G...Q.
	0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x1a, 0x00, // ..!.............
	0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... ... .....
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x20, 0x00, 0x00, 0x00, 0x21, 0x00, // ......;... ...!.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... ...#.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x23, 0x00, 0x00, 0x00, 0x24, 0x00, // ......;...#...$.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x30, 0x00, 0x00, 0x00, 0x08, 0x00, // ..........0.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, // .. ...G.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x47, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;...G...H.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, // .. ...P.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;...P...Q.....
	0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, // ..6.............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..............=.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......"...!...=.
	0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00, 0x3d, 0x00, // ......%...$...=.
	0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x56, 0x00, // ......I...H...V.
	0x05, 0x00, 0x30, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00, 0x00, 0x22, 0x00, // ..0...y...%...".
	0x00, 0x00, 0x57, 0x00, 0x05, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x7b, 0x00, 0x00, 0x00, 0x79, 0x00, // ..W.......{...y.
	0x00, 0x00, 0x49, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x51, 0x00, 0x00, 0x00, 0x7b, 0x00, // ..I...>...Q...{.
	0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,             // ......8.......
};
 
static const uint8_t quad_pass_fragment_dx9[215] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xb4, 0x00, // _texture0.......
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, // ........ .CTAB..
	0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, // ..S.............
	0x00, 0x00, 0x04, 0x11, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, // ......L...0.....
	0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, // ......<.......s_
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0xab, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, // texture.........
	0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, // ..........ps_3_0
	0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, // .Microsoft (R) H
	0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, // LSL Shader Compi
	0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, // ler 10.1........
	0x00, 0x80, 0x00, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, // ................
	0x0f, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x90, 0x00, 0x08, // ..B.............
	0xe4, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                                       // .......
};
 
static const uint8_t quad_pass_fragment_dx11[358] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x40, 0x01, // _texture0.....@.
	0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0xb3, 0xfd, 0xcd, 0x58, 0x13, 0x58, 0x90, 0x75, 0xbd, 0x82, // ..DXBC...X.X.u..
	0xfd, 0x29, 0x38, 0x82, 0xc6, 0xac, 0x01, 0x00, 0x00, 0x00, 0x40, 0x01, 0x00, 0x00, 0x03, 0x00, // .)8.......@.....
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, 0x00, 0x00, 0x00, 0x49, 0x53, // ..,...........IS
	0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x38, 0x00, // GNP...........8.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ......D.........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, // _POSITION.TEXCOO
	0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, // RD....OSGN,.....
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...... .........
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, // ..............SV
	0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x80, 0x00, // _TARGET...SHDR..
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, // ..@... ...Z....`
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, // ......X....p....
	0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, 0x01, 0x00, // ..UU..b...2.....
	0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, // ..e.... ......h.
	0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, // ......E.........
	0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, 0x00, // ..F.......F~....
	0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xf2, 0x20, // ...`......6.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, // ......F.......>.
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                                                             // ......
};
 
static const uint8_t quad_pass_fragment_mtl[528] =
{
	0x46, 0x53, 0x48, 0x06, 0x6f, 0x1e, 0x3e, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x09, 0x73, // FSH.o.><.......s
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xea, 0x01, // _texture........
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
	0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x5b, 0x5b, // 2 v_texcoord0 [[
	0x75, 0x73, 0x65, 0x72, 0x28, 0x6c, 0x6f, 0x63, 0x6e, 0x30, 0x29, 0x5d, 0x5d, 0x3b, 0x0a, 0x7d, // user(locn0)]];.}
	0x3b, 0x0a, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // ;..fragment xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // MtlMain_out xlat
	0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, // MtlMain(xlatMtlM
	0x61, 0x69, 0x6e, 0x5f, 0x69, 0x6e, 0x20, 0x69, 0x6e, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, // ain_in in [[stag
	0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // e_in]], texture2
	0x64, 0x3c, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, // d<float> s_textu
	0x72, 0x65, 0x20, 0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, // re [[texture(0)]
	0x5d, 0x2c, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, // ], sampler s_tex
	0x74, 0x75, 0x72, 0x65, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, // tureSampler [[sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, // mpler(0)]]).{.  
	0x20, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x5f, 0x6f, 0x75, //   xlatMtlMain_ou
	0x74, 0x20, 0x6f, 0x75, 0x74, 0x20, 0x3d, 0x20, 0x7b, 0x7d, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, // t out = {};.    
	0x6f, 0x75, 0x74, 0x2e, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // out.bgfx_FragDat
	0x61, 0x30, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x2e, 0x73, // a0 = s_texture.s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x53, // ample(s_textureS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x2c, 0x20, 0x69, 0x6e, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, // ampler, in.v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x72, 0x65, 0x74, // coord0);.    ret
	0x75, 0x72, 0x6e, 0x20, 0x6f, 0x75, 0x74, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, // urn out;.}......
};
