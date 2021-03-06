#include "player01.h"
// Data created with Img2CPC - (c) Retroworks - 2007-2017
// Tile sp_player01_00: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_00[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x0a,
	0x00, 0x00, 0x05, 0x1e, 0x78, 0xa0, 0x55, 0xaa,
	0x00, 0x05, 0x1e, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x00, 0x55, 0xbe, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x00, 0x05, 0x1e, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x05, 0x1b, 0x36, 0x3c, 0x78, 0xe4, 0x99, 0x22,
	0x05, 0x0e, 0x0c, 0x0c, 0x1c, 0x2c, 0x0c, 0x08,
	0x11, 0x26, 0x0c, 0x0c, 0x1c, 0x2c, 0x0c, 0x08,
	0x00, 0x04, 0x0c, 0x0d, 0x1b, 0x26, 0x4c, 0x88,
	0x00, 0x04, 0x0d, 0x0f, 0x1b, 0x66, 0x88, 0x00,
	0x00, 0x00, 0x04, 0x19, 0x33, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x44, 0x88, 0x44, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x50, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x44, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x50, 0xa0, 0x00, 0x00
};

// Tile sp_player01_01: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_01[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x0a, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x55, 0xbe, 0x78, 0xa0, 0x05, 0x0a,
	0x00, 0x55, 0xbe, 0x3c, 0x78, 0xa0, 0x55, 0xaa,
	0x00, 0x05, 0x1e, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x05, 0x1b, 0x36, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x05, 0x0e, 0x1c, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x00, 0x04, 0x0c, 0x1c, 0x2c, 0x0c, 0x19, 0x22,
	0x00, 0x04, 0x0c, 0x1c, 0x2c, 0x0c, 0x0c, 0x08,
	0x00, 0x00, 0x05, 0x0f, 0x1b, 0x26, 0x0c, 0x08,
	0x00, 0x00, 0x05, 0x0f, 0x1b, 0x26, 0x4c, 0x88,
	0x00, 0x00, 0x44, 0x99, 0x33, 0x66, 0x88, 0x00,
	0x00, 0x00, 0x04, 0x08, 0x44, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x50, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x44, 0x88, 0x44, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_02: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_02[8 * 16] = {
	0x00, 0x00, 0x05, 0x0f, 0x0a, 0x00, 0x00, 0x00,
	0x00, 0x55, 0xff, 0xbe, 0x78, 0xa0, 0x00, 0x00,
	0x05, 0x0f, 0x1e, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x05, 0x1b, 0x36, 0x3c, 0x78, 0xa0, 0x55, 0xaa,
	0x00, 0x04, 0x1c, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x00, 0x04, 0x1c, 0x3c, 0x78, 0xa0, 0x05, 0x0a,
	0x00, 0x00, 0x14, 0x2c, 0x0c, 0x0c, 0x0d, 0x0a,
	0x00, 0x00, 0x14, 0x2c, 0x0c, 0x0c, 0x19, 0x22,
	0x00, 0x00, 0x05, 0x0f, 0x0e, 0x0c, 0x0c, 0x08,
	0x00, 0x00, 0x05, 0x0f, 0x1b, 0x26, 0x0c, 0x08,
	0x00, 0x00, 0x44, 0x99, 0x33, 0x26, 0x4c, 0x88,
	0x00, 0x00, 0x04, 0x08, 0x44, 0xcc, 0x88, 0x00,
	0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x44, 0x88, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_03: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_03[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xb4, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x0c, 0x4c, 0x88, 0x00, 0x00,
	0x00, 0x04, 0x0c, 0x0c, 0x4c, 0x88, 0x00, 0x00,
	0x04, 0x0c, 0x0c, 0x0c, 0x4c, 0xcc, 0x88, 0x00,
	0x04, 0x08, 0x05, 0x4e, 0x99, 0x26, 0x08, 0x00,
	0x04, 0x08, 0x05, 0x0f, 0x0f, 0x0e, 0x08, 0x00,
	0x04, 0x08, 0x05, 0x1b, 0x33, 0x26, 0x08, 0x00,
	0x11, 0x22, 0x11, 0x33, 0x27, 0x0f, 0x1b, 0x22,
	0x05, 0x0a, 0x05, 0x0f, 0x0f, 0x1b, 0x22, 0x00,
	0x05, 0x0a, 0x50, 0xf5, 0xaf, 0x0a, 0x00, 0x00,
	0x05, 0x0a, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00,
	0x55, 0xaa, 0x00, 0x00, 0x50, 0xa0, 0x00, 0x00,
	0x05, 0x0a, 0x00, 0x00, 0x44, 0x88, 0x00, 0x00,
	0x05, 0x0a, 0x00, 0x00, 0x50, 0xa0, 0x00, 0x00
};

// Tile sp_player01_04: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_04[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0c, 0x0c, 0xcc, 0x00, 0x00,
	0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0xcc, 0x00, 0x00,
	0x00, 0x0c, 0xcc, 0x0c, 0x0c, 0xcc, 0xcc, 0x00,
	0x00, 0x0c, 0x00, 0x0f, 0xcc, 0x33, 0x0c, 0x00,
	0x00, 0x0c, 0x00, 0x0f, 0x0f, 0x0f, 0x0c, 0x00,
	0x00, 0x33, 0x00, 0x0f, 0x33, 0x33, 0x0c, 0x00,
	0x00, 0x0f, 0x00, 0x33, 0x33, 0x33, 0x0c, 0x00,
	0x00, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x0f, 0x33,
	0x00, 0x0f, 0x00, 0x0c, 0xff, 0x0f, 0x33, 0x00,
	0x00, 0xff, 0x00, 0x0c, 0x00, 0xcc, 0x00, 0x00,
	0x00, 0x0f, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00,
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_05: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_05[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x0c, 0xcc, 0x0c, 0x0c, 0xcc, 0x00, 0x00,
	0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0xcc, 0x00, 0x00,
	0x00, 0x0c, 0xcc, 0x0c, 0x0c, 0xcc, 0xcc, 0x00,
	0x00, 0x0c, 0x00, 0x0f, 0xcc, 0x33, 0x0c, 0x00,
	0x00, 0x33, 0x00, 0x0f, 0x0f, 0x0f, 0x0c, 0x00,
	0x00, 0x0f, 0x00, 0x0f, 0x33, 0x33, 0x0c, 0x00,
	0x00, 0x0f, 0x00, 0x33, 0x33, 0x33, 0x0c, 0x00,
	0x00, 0x0f, 0x00, 0x0f, 0x0f, 0x0f, 0x0c, 0x00,
	0x00, 0xff, 0x00, 0x0c, 0xff, 0x0f, 0x33, 0x33,
	0x00, 0x0f, 0x00, 0x0c, 0x00, 0x33, 0x33, 0x00,
	0x00, 0x0f, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_06: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_06[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x05, 0x0a, 0x50, 0xb4, 0x28, 0x00, 0x00, 0x00,
	0x11, 0x27, 0x1e, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x11, 0x36, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x11, 0x36, 0x3c, 0x78, 0xe4, 0x88, 0x00,
	0x00, 0x05, 0x0e, 0x0c, 0x58, 0xa4, 0x08, 0x00,
	0x00, 0x55, 0xae, 0x0c, 0x58, 0xe4, 0x88, 0x00,
	0x00, 0x05, 0x0e, 0x0d, 0x1b, 0x22, 0x00, 0x00,
	0x00, 0x05, 0x0e, 0x0d, 0x1b, 0x22, 0x00, 0x00,
	0x00, 0x05, 0x0e, 0x19, 0x33, 0x22, 0x00, 0x00,
	0x00, 0x11, 0x72, 0xe4, 0xd8, 0xa0, 0x00, 0x00,
	0x00, 0x11, 0x66, 0x88, 0x44, 0xcc, 0x88, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x44, 0xd8, 0xa0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_07: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_07[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x3c, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x3c, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x3c, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x3c, 0x3c, 0xf0, 0xcc, 0x00,
	0x00, 0x00, 0xff, 0x0c, 0x0c, 0xf0, 0x0c, 0x00,
	0x00, 0x00, 0x0f, 0x0c, 0x0c, 0xf0, 0x0c, 0x00,
	0x00, 0x00, 0x0f, 0x0c, 0x33, 0x33, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x0c, 0x33, 0x33, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00,
	0x00, 0x00, 0x33, 0xf0, 0x00, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xcc, 0x00, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x00, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_08: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_08[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x3c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x33, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x0f, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0xff, 0x3c, 0x3c, 0xf0, 0xcc, 0x00, 0x00,
	0x00, 0x0f, 0x0c, 0x0c, 0xf0, 0x0c, 0x00, 0x00,
	0x00, 0x0f, 0x0c, 0x0c, 0xf0, 0x0c, 0x00, 0x00,
	0x00, 0x0f, 0x0c, 0x0f, 0x33, 0x0c, 0x00, 0x00,
	0x00, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0xcc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_09: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_09[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x14, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xb1, 0x22, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xb1, 0x22, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xb1, 0x22, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xb1, 0x22, 0x00,
	0x00, 0x00, 0x14, 0x2c, 0x4c, 0x8d, 0x0a, 0x00,
	0x00, 0x00, 0x04, 0x0c, 0x0d, 0x0f, 0x0a, 0x00,
	0x00, 0x00, 0x04, 0x0d, 0x0f, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x0d, 0x0a, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x44, 0x99, 0x33, 0x33, 0x22, 0x00,
	0x00, 0x04, 0x4c, 0x88, 0x44, 0x8c, 0x08, 0x00,
	0x00, 0x50, 0xe4, 0x88, 0x00, 0x50, 0xa0, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x00, 0x44, 0xd8, 0xa0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x50, 0xa0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_10: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_10[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x33, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x33, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x0f, 0x00,
	0x00, 0x00, 0x3c, 0x0c, 0xcc, 0x0f, 0x0f, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0x0f, 0x0f, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0x0f, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0x0c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xcc, 0x33, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x00, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xcc, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xcc, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_11: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_11[8 * 16] = {
	0x00, 0x00, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x3c, 0x3c, 0xf0, 0x33, 0x00, 0x0f, 0x00,
	0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x0f, 0x0f, 0x00,
	0x00, 0x3c, 0x0c, 0xcc, 0x0f, 0x0f, 0x00, 0x00,
	0x00, 0x3c, 0x0c, 0x0c, 0x0f, 0x00, 0x00, 0x00,
	0x00, 0x0c, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x0f, 0x0c, 0x0c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x33, 0xcc, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0xcc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xcc, 0xcc, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_12: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_12[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xb4, 0x28, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xe4, 0x88, 0x00,
	0x00, 0x00, 0x00, 0x05, 0x5a, 0xe4, 0x88, 0x00,
	0x55, 0xaf, 0x1b, 0x26, 0x58, 0xa4, 0x08, 0x00,
	0x05, 0x0f, 0x0f, 0x0e, 0x19, 0x66, 0x88, 0x00,
	0x00, 0x00, 0x05, 0x0e, 0x19, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x55, 0xae, 0x19, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x1b, 0x22, 0x44, 0x88, 0x00,
	0x00, 0x00, 0x05, 0x4e, 0xd8, 0xe4, 0x88, 0x00,
	0x00, 0x50, 0xb1, 0x22, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_13: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_13[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xb4, 0x28, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xe4, 0x88, 0x00,
	0x00, 0x00, 0x00, 0x05, 0x5a, 0xa4, 0x08, 0x00,
	0x00, 0x55, 0xaf, 0x0e, 0x58, 0xa4, 0x08, 0x00,
	0x00, 0x05, 0x0f, 0x0e, 0x19, 0x26, 0x08, 0x00,
	0x00, 0x00, 0x55, 0xae, 0x19, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x1b, 0x33, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x1b, 0x66, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x11, 0x72, 0xe4, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x44, 0x88, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xf0, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_14: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_14[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xb4, 0x28, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xe4, 0x88, 0x00,
	0x00, 0x00, 0x04, 0x1c, 0x78, 0xa4, 0x4c, 0x88,
	0x00, 0x00, 0x05, 0x0f, 0x5a, 0xa4, 0x4c, 0x88,
	0x00, 0x00, 0x05, 0x0e, 0x58, 0xa4, 0x0c, 0x08,
	0x00, 0x00, 0x55, 0xae, 0x19, 0x26, 0x4c, 0x88,
	0x00, 0x00, 0x05, 0x0e, 0x19, 0x66, 0x88, 0x00,
	0x00, 0x00, 0x05, 0x1b, 0x33, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x11, 0x33, 0x66, 0x88, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xe4, 0xd8, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x44, 0xd8, 0xa0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x50, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_15: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_15[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x14, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x2c, 0x19, 0x22, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x2c, 0x0d, 0x0a, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x2c, 0x5d, 0xaa, 0x00,
	0x00, 0x00, 0x04, 0x0c, 0x4c, 0x8d, 0x0a, 0x00,
	0x00, 0x00, 0x05, 0x0e, 0x0d, 0x0f, 0x0a, 0x00,
	0x00, 0x00, 0x05, 0x0e, 0x19, 0x33, 0x22, 0x00,
	0x00, 0x00, 0x05, 0x0e, 0x0d, 0x0f, 0x0f, 0x0f,
	0x00, 0x00, 0x44, 0x99, 0x66, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x0c, 0x4c, 0x88, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xe4, 0xd8, 0xe4, 0x88, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x50, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_16: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_16[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x78, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x3c, 0x78, 0xb1, 0x22, 0x00, 0x00,
	0x00, 0x14, 0x3c, 0x2c, 0x0d, 0x0a, 0x00, 0x00,
	0x00, 0x14, 0x3c, 0x2c, 0x5d, 0xaa, 0x00, 0x00,
	0x00, 0x14, 0x3c, 0x2c, 0x0d, 0x0a, 0x00, 0x00,
	0x00, 0x04, 0x0c, 0x4c, 0x8d, 0x0a, 0x00, 0x00,
	0x00, 0x04, 0x4c, 0x8d, 0x1b, 0x22, 0x00, 0x00,
	0x00, 0x04, 0x4c, 0x99, 0x22, 0x00, 0x00, 0x00,
	0x0a, 0x04, 0x0c, 0x0d, 0x0f, 0x0f, 0x0a, 0x00,
	0x00, 0x44, 0x99, 0x22, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x44, 0x8c, 0x08, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x44, 0xd8, 0xa0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x44, 0x88, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xf0, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_17: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_17[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x14, 0x78, 0xb1, 0x22, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa5, 0x0a, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x2c, 0x5d, 0xaa, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x2c, 0x0d, 0x0a, 0x00,
	0x00, 0x00, 0x04, 0x0c, 0x0c, 0x0d, 0x0a, 0x00,
	0x00, 0x04, 0x0c, 0x0c, 0x4c, 0x99, 0x22, 0x00,
	0x00, 0x04, 0x4c, 0x99, 0x27, 0x0a, 0x00, 0x00,
	0x00, 0x04, 0x0c, 0x19, 0x33, 0x22, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x0d, 0x0f, 0x0f, 0x0a, 0x00,
	0x00, 0x00, 0x44, 0x99, 0x33, 0x22, 0x00, 0x00,
	0x00, 0x50, 0xe4, 0x88, 0x04, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xa0, 0x50, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x44, 0xd8, 0xa0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x50, 0xe4, 0x88, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_18: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_18[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xcc, 0x0f, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0x0c, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x0f, 0x0c, 0xcc, 0x00, 0x00,
	0x00, 0x33, 0xff, 0x0f, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x33, 0x0f, 0x0f, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x33, 0x0f, 0x33, 0x33, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x33, 0xcc, 0xcc, 0x00, 0x00,
	0x00, 0x00, 0xcc, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_19: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_19[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xf0, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xcc, 0x0f, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x33, 0x0f, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0f, 0xff, 0x33, 0x00, 0x00, 0x00,
	0x00, 0xff, 0x0f, 0x0f, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x0f, 0x33, 0x0f, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x33, 0x33, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xcc, 0x00, 0xcc, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_20: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_20[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x3c, 0x3c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0c, 0x0c, 0xf0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xcc, 0x0f, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x0c, 0x0c, 0x0c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x33, 0x0f, 0x0f, 0x33, 0x00,
	0x00, 0x00, 0x00, 0x0f, 0x0f, 0xff, 0x33, 0x00,
	0x00, 0x00, 0x0f, 0x0f, 0x0f, 0x33, 0x33, 0x00,
	0x00, 0xff, 0x0f, 0x00, 0x33, 0x33, 0x33, 0x00,
	0x00, 0x0f, 0x00, 0x00, 0x33, 0x33, 0xcc, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_21: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_21[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x50, 0xb4, 0x78, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x2c, 0x0c, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x2c, 0x0c, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x2c, 0x0c, 0x4c, 0x99, 0x22, 0x00,
	0x04, 0x0c, 0x4c, 0xcc, 0x8c, 0x19, 0x22, 0x00,
	0x04, 0x4c, 0x8d, 0x0f, 0x1b, 0x33, 0x22, 0x00,
	0x04, 0x4c, 0x8d, 0x1b, 0x33, 0x22, 0x00, 0x00,
	0x04, 0x0d, 0x1b, 0x33, 0x27, 0x0a, 0x00, 0x00,
	0x00, 0x05, 0x0f, 0x1b, 0x22, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x0d, 0x0f, 0x0a, 0x00, 0x00, 0x00,
	0x00, 0x50, 0xa0, 0x05, 0x0f, 0x0a, 0x00, 0x00,
	0x00, 0x44, 0x88, 0x00, 0x05, 0x0a, 0x00, 0x00,
	0x00, 0x50, 0xf0, 0xa0, 0x00, 0x00, 0x00, 0x00
};

// Tile sp_player01_22: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_22[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x50, 0xb4, 0x78, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x2c, 0x0c, 0x08, 0x00, 0x00, 0x00,
	0x00, 0x14, 0x2c, 0x0c, 0x08, 0x11, 0x22, 0x00,
	0x00, 0x14, 0x2c, 0x0c, 0x4c, 0x99, 0x22, 0x00,
	0x00, 0x04, 0x4c, 0xcc, 0x8c, 0x19, 0x22, 0x00,
	0x04, 0x0c, 0x0d, 0x0f, 0x1b, 0x33, 0x22, 0x00,
	0x04, 0x4c, 0x8d, 0x1b, 0x33, 0x22, 0x00, 0x00,
	0x04, 0x0c, 0x19, 0x33, 0x27, 0x0a, 0x00, 0x00,
	0x00, 0x04, 0x0d, 0x1b, 0x22, 0x00, 0x00, 0x00,
	0x00, 0x04, 0x0d, 0x0f, 0x0a, 0x00, 0x00, 0x00,
	0x50, 0xe4, 0x88, 0x05, 0x0f, 0x0a, 0x00, 0x00,
	0x44, 0x88, 0x00, 0x44, 0x8d, 0x0f, 0x0a, 0x00,
	0x00, 0x50, 0xa0, 0x00, 0x00, 0x05, 0x0a, 0x00
};

// Tile sp_player01_23: 16x16 pixels, 8x16 bytes.
const u8 sp_player01_23[8 * 16] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x50, 0xb4, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x3c, 0x78, 0xa0, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x2c, 0x0c, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x2c, 0x0c, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x14, 0x2c, 0x0c, 0x08, 0x00, 0x00,
	0x00, 0x04, 0x0c, 0x4c, 0xcc, 0x8c, 0x19, 0x22,
	0x04, 0x0c, 0x4c, 0x8d, 0x0f, 0x1b, 0x33, 0x22,
	0x04, 0x0d, 0x4e, 0x8d, 0x1b, 0x33, 0x22, 0x00,
	0x04, 0x0d, 0x0f, 0x1b, 0x33, 0x27, 0x0a, 0x00,
	0x00, 0x00, 0x05, 0x0f, 0x1b, 0x33, 0x22, 0x00,
	0x00, 0x00, 0x44, 0x8d, 0x0f, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x44, 0xd8, 0xa5, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x44, 0x88, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x50, 0xf0, 0xa0, 0x00, 0x00
};

