/******************************************************************************
 *
 * Copyright( c ) 2009-2012  Realtek Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of version 2 of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110, USA
 *
 * The full GNU General Public License is included in this distribution in the
 * file called LICENSE.
 *
 * Contact Information:
 * wlanfae <wlanfae@realtek.com>
 * Realtek Corporation, No. 2, Innovation Road II, Hsinchu Science Park,
 * Hsinchu 300, Taiwan.
 *
 * Created on  2010/ 5/18,  1:41
 *
 * Larry Finger <Larry.Finger@lwfinger.net>
 *
 *****************************************************************************/

#include "table.h"


u32 RTL8192CEPHY_REG_2TARRAY[PHY_REG_2TARRAY_LENGTH] = {
	0x024, 0x0011800f,
	0x028, 0x00ffdb83,
	0x800, 0x80040002,
	0x804, 0x00000003,
	0x808, 0x0000fc00,
	0x80c, 0x0000000a,
	0x810, 0x10005388,
	0x814, 0x020c3d10,
	0x818, 0x02200385,
	0x81c, 0x00000000,
	0x820, 0x01000100,
	0x824, 0x00390004,
	0x828, 0x01000100,
	0x82c, 0x00390004,
	0x830, 0x27272727,
	0x834, 0x27272727,
	0x838, 0x27272727,
	0x83c, 0x27272727,
	0x840, 0x00010000,
	0x844, 0x00010000,
	0x848, 0x27272727,
	0x84c, 0x27272727,
	0x850, 0x00000000,
	0x854, 0x00000000,
	0x858, 0x569a569a,
	0x85c, 0x0c1b25a4,
	0x860, 0x66e60230,
	0x864, 0x061f0130,
	0x868, 0x27272727,
	0x86c, 0x2b2b2b27,
	0x870, 0x07000700,
	0x874, 0x22184000,
	0x878, 0x08080808,
	0x87c, 0x00000000,
	0x880, 0xc0083070,
	0x884, 0x000004d5,
	0x888, 0x00000000,
	0x88c, 0xcc0000c0,
	0x890, 0x00000800,
	0x894, 0xfffffffe,
	0x898, 0x40302010,
	0x89c, 0x00706050,
	0x900, 0x00000000,
	0x904, 0x00000023,
	0x908, 0x00000000,
	0x90c, 0x81121313,
	0xa00, 0x00d047c8,
	0xa04, 0x80ff000c,
	0xa08, 0x8c838300,
	0xa0c, 0x2e68120f,
	0xa10, 0x9500bb78,
	0xa14, 0x11144028,
	0xa18, 0x00881117,
	0xa1c, 0x89140f00,
	0xa20, 0x1a1b0000,
	0xa24, 0x090e1317,
	0xa28, 0x00000204,
	0xa2c, 0x00d30000,
	0xa70, 0x101fbf00,
	0xa74, 0x00000007,
	0xc00, 0x48071d40,
	0xc04, 0x03a05633,
	0xc08, 0x000000e4,
	0xc0c, 0x6c6c6c6c,
	0xc10, 0x08800000,
	0xc14, 0x40000100,
	0xc18, 0x08800000,
	0xc1c, 0x40000100,
	0xc20, 0x00000000,
	0xc24, 0x00000000,
	0xc28, 0x00000000,
	0xc2c, 0x00000000,
	0xc30, 0x69e9ac44,
	0xc34, 0x469652cf,
	0xc38, 0x49795994,
	0xc3c, 0x0a97971c,
	0xc40, 0x1f7c403f,
	0xc44, 0x000100b7,
	0xc48, 0xec020107,
	0xc4c, 0x007f037f,
	0xc50, 0x69543420,
	0xc54, 0x43bc0094,
	0xc58, 0x69543420,
	0xc5c, 0x433c0094,
	0xc60, 0x00000000,
	0xc64, 0x5116848b,
	0xc68, 0x47c00bff,
	0xc6c, 0x00000036,
	0xc70, 0x2c7f000d,
	0xc74, 0x018610db,
	0xc78, 0x0000001f,
	0xc7c, 0x00b91612,
	0xc80, 0x40000100,
	0xc84, 0x20f60000,
	0xc88, 0x40000100,
	0xc8c, 0x20200000,
	0xc90, 0x00121820,
	0xc94, 0x00000000,
	0xc98, 0x00121820,
	0xc9c, 0x00007f7f,
	0xca0, 0x00000000,
	0xca4, 0x00000080,
	0xca8, 0x00000000,
	0xcac, 0x00000000,
	0xcb0, 0x00000000,
	0xcb4, 0x00000000,
	0xcb8, 0x00000000,
	0xcbc, 0x28000000,
	0xcc0, 0x00000000,
	0xcc4, 0x00000000,
	0xcc8, 0x00000000,
	0xccc, 0x00000000,
	0xcd0, 0x00000000,
	0xcd4, 0x00000000,
	0xcd8, 0x64b22427,
	0xcdc, 0x00766932,
	0xce0, 0x00222222,
	0xce4, 0x00000000,
	0xce8, 0x37644302,
	0xcec, 0x2f97d40c,
	0xd00, 0x00080740,
	0xd04, 0x00020403,
	0xd08, 0x0000907f,
	0xd0c, 0x20010201,
	0xd10, 0xa0633333,
	0xd14, 0x3333bc43,
	0xd18, 0x7a8f5b6b,
	0xd2c, 0xcc979975,
	0xd30, 0x00000000,
	0xd34, 0x80608000,
	0xd38, 0x00000000,
	0xd3c, 0x00027293,
	0xd40, 0x00000000,
	0xd44, 0x00000000,
	0xd48, 0x00000000,
	0xd4c, 0x00000000,
	0xd50, 0x6437140a,
	0xd54, 0x00000000,
	0xd58, 0x00000000,
	0xd5c, 0x30032064,
	0xd60, 0x4653de68,
	0xd64, 0x04518a3c,
	0xd68, 0x00002101,
	0xd6c, 0x2a201c16,
	0xd70, 0x1812362e,
	0xd74, 0x322c2220,
	0xd78, 0x000e3c24,
	0xe00, 0x2a2a2a2a,
	0xe04, 0x2a2a2a2a,
	0xe08, 0x03902a2a,
	0xe10, 0x2a2a2a2a,
	0xe14, 0x2a2a2a2a,
	0xe18, 0x2a2a2a2a,
	0xe1c, 0x2a2a2a2a,
	0xe28, 0x00000000,
	0xe30, 0x1000dc1f,
	0xe34, 0x10008c1f,
	0xe38, 0x02140102,
	0xe3c, 0x681604c2,
	0xe40, 0x01007c00,
	0xe44, 0x01004800,
	0xe48, 0xfb000000,
	0xe4c, 0x000028d1,
	0xe50, 0x1000dc1f,
	0xe54, 0x10008c1f,
	0xe58, 0x02140102,
	0xe5c, 0x28160d05,
	0xe60, 0x00000010,
	0xe68, 0x001b25a4,
	0xe6c, 0x63db25a4,
	0xe70, 0x63db25a4,
	0xe74, 0x0c1b25a4,
	0xe78, 0x0c1b25a4,
	0xe7c, 0x0c1b25a4,
	0xe80, 0x0c1b25a4,
	0xe84, 0x63db25a4,
	0xe88, 0x0c1b25a4,
	0xe8c, 0x63db25a4,
	0xed0, 0x63db25a4,
	0xed4, 0x63db25a4,
	0xed8, 0x63db25a4,
	0xedc, 0x001b25a4,
	0xee0, 0x001b25a4,
	0xeec, 0x6fdb25a4,
	0xf14, 0x00000003,
	0xf4c, 0x00000000,
	0xf00, 0x00000300,
};

u32 RTL8192CEPHY_REG_1TARRAY[PHY_REG_1TARRAY_LENGTH] = {
	0x024, 0x0011800f,
	0x028, 0x00ffdb83,
	0x800, 0x80040000,
	0x804, 0x00000001,
	0x808, 0x0000fc00,
	0x80c, 0x0000000a,
	0x810, 0x10005388,
	0x814, 0x020c3d10,
	0x818, 0x02200385,
	0x81c, 0x00000000,
	0x820, 0x01000100,
	0x824, 0x00390004,
	0x828, 0x00000000,
	0x82c, 0x00000000,
	0x830, 0x00000000,
	0x834, 0x00000000,
	0x838, 0x00000000,
	0x83c, 0x00000000,
	0x840, 0x00010000,
	0x844, 0x00000000,
	0x848, 0x00000000,
	0x84c, 0x00000000,
	0x850, 0x00000000,
	0x854, 0x00000000,
	0x858, 0x569a569a,
	0x85c, 0x001b25a4,
	0x860, 0x66e60230,
	0x864, 0x061f0130,
	0x868, 0x00000000,
	0x86c, 0x32323200,
	0x870, 0x07000700,
	0x874, 0x22004000,
	0x878, 0x00000808,
	0x87c, 0x00000000,
	0x880, 0xc0083070,
	0x884, 0x000004d5,
	0x888, 0x00000000,
	0x88c, 0xccc000c0,
	0x890, 0x00000800,
	0x894, 0xfffffffe,
	0x898, 0x40302010,
	0x89c, 0x00706050,
	0x900, 0x00000000,
	0x904, 0x00000023,
	0x908, 0x00000000,
	0x90c, 0x81121111,
	0xa00, 0x00d047c8,
	0xa04, 0x80ff000c,
	0xa08, 0x8c838300,
	0xa0c, 0x2e68120f,
	0xa10, 0x9500bb78,
	0xa14, 0x11144028,
	0xa18, 0x00881117,
	0xa1c, 0x89140f00,
	0xa20, 0x1a1b0000,
	0xa24, 0x090e1317,
	0xa28, 0x00000204,
	0xa2c, 0x00d30000,
	0xa70, 0x101fbf00,
	0xa74, 0x00000007,
	0xc00, 0x48071d40,
	0xc04, 0x03a05611,
	0xc08, 0x000000e4,
	0xc0c, 0x6c6c6c6c,
	0xc10, 0x08800000,
	0xc14, 0x40000100,
	0xc18, 0x08800000,
	0xc1c, 0x40000100,
	0xc20, 0x00000000,
	0xc24, 0x00000000,
	0xc28, 0x00000000,
	0xc2c, 0x00000000,
	0xc30, 0x69e9ac44,
	0xc34, 0x469652cf,
	0xc38, 0x49795994,
	0xc3c, 0x0a97971c,
	0xc40, 0x1f7c403f,
	0xc44, 0x000100b7,
	0xc48, 0xec020107,
	0xc4c, 0x007f037f,
	0xc50, 0x69543420,
	0xc54, 0x43bc0094,
	0xc58, 0x69543420,
	0xc5c, 0x433c0094,
	0xc60, 0x00000000,
	0xc64, 0x5116848b,
	0xc68, 0x47c00bff,
	0xc6c, 0x00000036,
	0xc70, 0x2c7f000d,
	0xc74, 0x018610db,
	0xc78, 0x0000001f,
	0xc7c, 0x00b91612,
	0xc80, 0x40000100,
	0xc84, 0x20f60000,
	0xc88, 0x40000100,
	0xc8c, 0x20200000,
	0xc90, 0x00121820,
	0xc94, 0x00000000,
	0xc98, 0x00121820,
	0xc9c, 0x00007f7f,
	0xca0, 0x00000000,
	0xca4, 0x00000080,
	0xca8, 0x00000000,
	0xcac, 0x00000000,
	0xcb0, 0x00000000,
	0xcb4, 0x00000000,
	0xcb8, 0x00000000,
	0xcbc, 0x28000000,
	0xcc0, 0x00000000,
	0xcc4, 0x00000000,
	0xcc8, 0x00000000,
	0xccc, 0x00000000,
	0xcd0, 0x00000000,
	0xcd4, 0x00000000,
	0xcd8, 0x64b22427,
	0xcdc, 0x00766932,
	0xce0, 0x00222222,
	0xce4, 0x00000000,
	0xce8, 0x37644302,
	0xcec, 0x2f97d40c,
	0xd00, 0x00080740,
	0xd04, 0x00020401,
	0xd08, 0x0000907f,
	0xd0c, 0x20010201,
	0xd10, 0xa0633333,
	0xd14, 0x3333bc43,
	0xd18, 0x7a8f5b6b,
	0xd2c, 0xcc979975,
	0xd30, 0x00000000,
	0xd34, 0x80608000,
	0xd38, 0x00000000,
	0xd3c, 0x00027293,
	0xd40, 0x00000000,
	0xd44, 0x00000000,
	0xd48, 0x00000000,
	0xd4c, 0x00000000,
	0xd50, 0x6437140a,
	0xd54, 0x00000000,
	0xd58, 0x00000000,
	0xd5c, 0x30032064,
	0xd60, 0x4653de68,
	0xd64, 0x04518a3c,
	0xd68, 0x00002101,
	0xd6c, 0x2a201c16,
	0xd70, 0x1812362e,
	0xd74, 0x322c2220,
	0xd78, 0x000e3c24,
	0xe00, 0x2a2a2a2a,
	0xe04, 0x2a2a2a2a,
	0xe08, 0x03902a2a,
	0xe10, 0x2a2a2a2a,
	0xe14, 0x2a2a2a2a,
	0xe18, 0x2a2a2a2a,
	0xe1c, 0x2a2a2a2a,
	0xe28, 0x00000000,
	0xe30, 0x1000dc1f,
	0xe34, 0x10008c1f,
	0xe38, 0x02140102,
	0xe3c, 0x681604c2,
	0xe40, 0x01007c00,
	0xe44, 0x01004800,
	0xe48, 0xfb000000,
	0xe4c, 0x000028d1,
	0xe50, 0x1000dc1f,
	0xe54, 0x10008c1f,
	0xe58, 0x02140102,
	0xe5c, 0x28160d05,
	0xe60, 0x00000010,
	0xe68, 0x001b25a4,
	0xe6c, 0x631b25a0,
	0xe70, 0x631b25a0,
	0xe74, 0x081b25a0,
	0xe78, 0x081b25a0,
	0xe7c, 0x081b25a0,
	0xe80, 0x081b25a0,
	0xe84, 0x631b25a0,
	0xe88, 0x081b25a0,
	0xe8c, 0x631b25a0,
	0xed0, 0x631b25a0,
	0xed4, 0x631b25a0,
	0xed8, 0x631b25a0,
	0xedc, 0x001b25a0,
	0xee0, 0x001b25a0,
	0xeec, 0x6b1b25a0,
	0xf14, 0x00000003,
	0xf4c, 0x00000000,
	0xf00, 0x00000300,
};

u32 RTL8192CEPHY_REG_ARRAY_PG[PHY_REG_ARRAY_PGLENGTH] = {
	0xe00, 0xffffffff, 0x0a0c0c0c,
	0xe04, 0xffffffff, 0x02040608,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x0a0c0d0e,
	0xe14, 0xffffffff, 0x02040608,
	0xe18, 0xffffffff, 0x0a0c0d0e,
	0xe1c, 0xffffffff, 0x02040608,
	0x830, 0xffffffff, 0x0a0c0c0c,
	0x834, 0xffffffff, 0x02040608,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x0a0c0d0e,
	0x848, 0xffffffff, 0x02040608,
	0x84c, 0xffffffff, 0x0a0c0d0e,
	0x868, 0xffffffff, 0x02040608,
	0xe00, 0xffffffff, 0x00000000,
	0xe04, 0xffffffff, 0x00000000,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x00000000,
	0x834, 0xffffffff, 0x00000000,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
	0xe00, 0xffffffff, 0x04040404,
	0xe04, 0xffffffff, 0x00020204,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x06060606,
	0xe14, 0xffffffff, 0x00020406,
	0xe18, 0xffffffff, 0x06060606,
	0xe1c, 0xffffffff, 0x00020406,
	0x830, 0xffffffff, 0x04040404,
	0x834, 0xffffffff, 0x00020204,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x06060606,
	0x848, 0xffffffff, 0x00020406,
	0x84c, 0xffffffff, 0x06060606,
	0x868, 0xffffffff, 0x00020406,
	0xe00, 0xffffffff, 0x00000000,
	0xe04, 0xffffffff, 0x00000000,
	0xe08, 0x0000ff00, 0x00000000,
	0x86c, 0xffffff00, 0x00000000,
	0xe10, 0xffffffff, 0x00000000,
	0xe14, 0xffffffff, 0x00000000,
	0xe18, 0xffffffff, 0x00000000,
	0xe1c, 0xffffffff, 0x00000000,
	0x830, 0xffffffff, 0x00000000,
	0x834, 0xffffffff, 0x00000000,
	0x838, 0xffffff00, 0x00000000,
	0x86c, 0x000000ff, 0x00000000,
	0x83c, 0xffffffff, 0x00000000,
	0x848, 0xffffffff, 0x00000000,
	0x84c, 0xffffffff, 0x00000000,
	0x868, 0xffffffff, 0x00000000,
};

u32 RTL8192CERADIOA_2TARRAY[RADIOA_2TARRAYLENGTH] = {
	0x000, 0x00030159,
	0x001, 0x00031284,
	0x002, 0x00098000,
	0x003, 0x00018c63,
	0x004, 0x000210e7,
	0x009, 0x0002044f,
	0x00a, 0x0001adb0,
	0x00b, 0x00054867,
	0x00c, 0x0008992e,
	0x00d, 0x0000e52c,
	0x00e, 0x00039ce7,
	0x00f, 0x00000451,
	0x019, 0x00000000,
	0x01a, 0x00010255,
	0x01b, 0x00060a00,
	0x01c, 0x000fc378,
	0x01d, 0x000a1250,
	0x01e, 0x0004445f,
	0x01f, 0x00080001,
	0x020, 0x0000b614,
	0x021, 0x0006c000,
	0x022, 0x00000000,
	0x023, 0x00001558,
	0x024, 0x00000060,
	0x025, 0x00000483,
	0x026, 0x0004f000,
	0x027, 0x000ec7d9,
	0x028, 0x000977c0,
	0x029, 0x00004783,
	0x02a, 0x00000001,
	0x02b, 0x00021334,
	0x02a, 0x00000000,
	0x02b, 0x00000054,
	0x02a, 0x00000001,
	0x02b, 0x00000808,
	0x02b, 0x00053333,
	0x02c, 0x0000000c,
	0x02a, 0x00000002,
	0x02b, 0x00000808,
	0x02b, 0x0005b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000003,
	0x02b, 0x00000808,
	0x02b, 0x00063333,
	0x02c, 0x0000000d,
	0x02a, 0x00000004,
	0x02b, 0x00000808,
	0x02b, 0x0006b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000005,
	0x02b, 0x00000808,
	0x02b, 0x00073333,
	0x02c, 0x0000000d,
	0x02a, 0x00000006,
	0x02b, 0x00000709,
	0x02b, 0x0005b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000007,
	0x02b, 0x00000709,
	0x02b, 0x00063333,
	0x02c, 0x0000000d,
	0x02a, 0x00000008,
	0x02b, 0x0000060a,
	0x02b, 0x0004b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000009,
	0x02b, 0x0000060a,
	0x02b, 0x00053333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000a,
	0x02b, 0x0000060a,
	0x02b, 0x0005b333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000b,
	0x02b, 0x0000060a,
	0x02b, 0x00063333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000c,
	0x02b, 0x0000060a,
	0x02b, 0x0006b333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000d,
	0x02b, 0x0000060a,
	0x02b, 0x00073333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000e,
	0x02b, 0x0000050b,
	0x02b, 0x00066666,
	0x02c, 0x0000001a,
	0x02a, 0x000e0000,
	0x010, 0x0004000f,
	0x011, 0x000e31fc,
	0x010, 0x0006000f,
	0x011, 0x000ff9f8,
	0x010, 0x0002000f,
	0x011, 0x000203f9,
	0x010, 0x0003000f,
	0x011, 0x000ff500,
	0x010, 0x00000000,
	0x011, 0x00000000,
	0x010, 0x0008000f,
	0x011, 0x0003f100,
	0x010, 0x0009000f,
	0x011, 0x00023100,
	0x012, 0x00032000,
	0x012, 0x00071000,
	0x012, 0x000b0000,
	0x012, 0x000fc000,
	0x013, 0x000287af,
	0x013, 0x000244b7,
	0x013, 0x000204ab,
	0x013, 0x0001c49f,
	0x013, 0x00018493,
	0x013, 0x00014297,
	0x013, 0x00010295,
	0x013, 0x0000c298,
	0x013, 0x0000819c,
	0x013, 0x000040a8,
	0x013, 0x0000001c,
	0x014, 0x0001944c,
	0x014, 0x00059444,
	0x014, 0x0009944c,
	0x014, 0x000d9444,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x015, 0x000cf424,
	0x016, 0x000e0330,
	0x016, 0x000a0330,
	0x016, 0x00060330,
	0x016, 0x00020330,
	0x000, 0x00010159,
	0x018, 0x0000f401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01f, 0x00080003,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01e, 0x00044457,
	0x01f, 0x00080000,
	0x000, 0x00030159,
};

u32 RTL8192CE_RADIOB_2TARRAY[RADIOB_2TARRAYLENGTH] = {
	0x000, 0x00030159,
	0x001, 0x00031284,
	0x002, 0x00098000,
	0x003, 0x00018c63,
	0x004, 0x000210e7,
	0x009, 0x0002044f,
	0x00a, 0x0001adb0,
	0x00b, 0x00054867,
	0x00c, 0x0008992e,
	0x00d, 0x0000e52c,
	0x00e, 0x00039ce7,
	0x00f, 0x00000451,
	0x012, 0x00032000,
	0x012, 0x00071000,
	0x012, 0x000b0000,
	0x012, 0x000fc000,
	0x013, 0x000287af,
	0x013, 0x000244b7,
	0x013, 0x000204ab,
	0x013, 0x0001c49f,
	0x013, 0x00018493,
	0x013, 0x00014297,
	0x013, 0x00010295,
	0x013, 0x0000c298,
	0x013, 0x0000819c,
	0x013, 0x000040a8,
	0x013, 0x0000001c,
	0x014, 0x0001944c,
	0x014, 0x00059444,
	0x014, 0x0009944c,
	0x014, 0x000d9444,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x015, 0x000cf424,
	0x016, 0x000e0330,
	0x016, 0x000a0330,
	0x016, 0x00060330,
	0x016, 0x00020330,
};

u32 RTL8192CE_RADIOA_1TARRAY[RADIOA_1TARRAYLENGTH] = {
	0x000, 0x00030159,
	0x001, 0x00031284,
	0x002, 0x00098000,
	0x003, 0x00018c63,
	0x004, 0x000210e7,
	0x009, 0x0002044f,
	0x00a, 0x0001adb0,
	0x00b, 0x00054867,
	0x00c, 0x0008992e,
	0x00d, 0x0000e52c,
	0x00e, 0x00039ce7,
	0x00f, 0x00000451,
	0x019, 0x00000000,
	0x01a, 0x00010255,
	0x01b, 0x00060a00,
	0x01c, 0x000fc378,
	0x01d, 0x000a1250,
	0x01e, 0x0004445f,
	0x01f, 0x00080001,
	0x020, 0x0000b614,
	0x021, 0x0006c000,
	0x022, 0x00000000,
	0x023, 0x00001558,
	0x024, 0x00000060,
	0x025, 0x00000483,
	0x026, 0x0004f000,
	0x027, 0x000ec7d9,
	0x028, 0x000977c0,
	0x029, 0x00004783,
	0x02a, 0x00000001,
	0x02b, 0x00021334,
	0x02a, 0x00000000,
	0x02b, 0x00000054,
	0x02a, 0x00000001,
	0x02b, 0x00000808,
	0x02b, 0x00053333,
	0x02c, 0x0000000c,
	0x02a, 0x00000002,
	0x02b, 0x00000808,
	0x02b, 0x0005b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000003,
	0x02b, 0x00000808,
	0x02b, 0x00063333,
	0x02c, 0x0000000d,
	0x02a, 0x00000004,
	0x02b, 0x00000808,
	0x02b, 0x0006b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000005,
	0x02b, 0x00000808,
	0x02b, 0x00073333,
	0x02c, 0x0000000d,
	0x02a, 0x00000006,
	0x02b, 0x00000709,
	0x02b, 0x0005b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000007,
	0x02b, 0x00000709,
	0x02b, 0x00063333,
	0x02c, 0x0000000d,
	0x02a, 0x00000008,
	0x02b, 0x0000060a,
	0x02b, 0x0004b333,
	0x02c, 0x0000000d,
	0x02a, 0x00000009,
	0x02b, 0x0000060a,
	0x02b, 0x00053333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000a,
	0x02b, 0x0000060a,
	0x02b, 0x0005b333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000b,
	0x02b, 0x0000060a,
	0x02b, 0x00063333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000c,
	0x02b, 0x0000060a,
	0x02b, 0x0006b333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000d,
	0x02b, 0x0000060a,
	0x02b, 0x00073333,
	0x02c, 0x0000000d,
	0x02a, 0x0000000e,
	0x02b, 0x0000050b,
	0x02b, 0x00066666,
	0x02c, 0x0000001a,
	0x02a, 0x000e0000,
	0x010, 0x0004000f,
	0x011, 0x000e31fc,
	0x010, 0x0006000f,
	0x011, 0x000ff9f8,
	0x010, 0x0002000f,
	0x011, 0x000203f9,
	0x010, 0x0003000f,
	0x011, 0x000ff500,
	0x010, 0x00000000,
	0x011, 0x00000000,
	0x010, 0x0008000f,
	0x011, 0x0003f100,
	0x010, 0x0009000f,
	0x011, 0x00023100,
	0x012, 0x00032000,
	0x012, 0x00071000,
	0x012, 0x000b0000,
	0x012, 0x000fc000,
	0x013, 0x000287af,
	0x013, 0x000244b7,
	0x013, 0x000204ab,
	0x013, 0x0001c49f,
	0x013, 0x00018493,
	0x013, 0x00014297,
	0x013, 0x00010295,
	0x013, 0x0000c298,
	0x013, 0x0000819c,
	0x013, 0x000040a8,
	0x013, 0x0000001c,
	0x014, 0x0001944c,
	0x014, 0x00059444,
	0x014, 0x0009944c,
	0x014, 0x000d9444,
	0x015, 0x0000f424,
	0x015, 0x0004f424,
	0x015, 0x0008f424,
	0x015, 0x000cf424,
	0x016, 0x000e0330,
	0x016, 0x000a0330,
	0x016, 0x00060330,
	0x016, 0x00020330,
	0x000, 0x00010159,
	0x018, 0x0000f401,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01f, 0x00080003,
	0x0fe, 0x00000000,
	0x0fe, 0x00000000,
	0x01e, 0x00044457,
	0x01f, 0x00080000,
	0x000, 0x00030159,
};

u32 RTL8192CE_RADIOB_1TARRAY[RADIOB_1TARRAYLENGTH] = {
	0x0,
};

u32 RTL8192CEMAC_2T_ARRAY[MAC_2T_ARRAYLENGTH] = {
	0x420, 0x00000080,
	0x423, 0x00000000,
	0x430, 0x00000000,
	0x431, 0x00000000,
	0x432, 0x00000000,
	0x433, 0x00000001,
	0x434, 0x00000004,
	0x435, 0x00000005,
	0x436, 0x00000006,
	0x437, 0x00000007,
	0x438, 0x00000000,
	0x439, 0x00000000,
	0x43a, 0x00000000,
	0x43b, 0x00000001,
	0x43c, 0x00000004,
	0x43d, 0x00000005,
	0x43e, 0x00000006,
	0x43f, 0x00000007,
	0x440, 0x0000005d,
	0x441, 0x00000001,
	0x442, 0x00000000,
	0x444, 0x00000015,
	0x445, 0x000000f0,
	0x446, 0x0000000f,
	0x447, 0x00000000,
	0x458, 0x00000041,
	0x459, 0x000000a8,
	0x45a, 0x00000072,
	0x45b, 0x000000b9,
	0x460, 0x00000088,
	0x461, 0x00000088,
	0x462, 0x00000006,
	0x463, 0x00000003,
	0x4c8, 0x00000004,
	0x4c9, 0x00000008,
	0x4cc, 0x00000002,
	0x4cd, 0x00000028,
	0x4ce, 0x00000001,
	0x500, 0x00000026,
	0x501, 0x000000a2,
	0x502, 0x0000002f,
	0x503, 0x00000000,
	0x504, 0x00000028,
	0x505, 0x000000a3,
	0x506, 0x0000005e,
	0x507, 0x00000000,
	0x508, 0x0000002b,
	0x509, 0x000000a4,
	0x50a, 0x0000005e,
	0x50b, 0x00000000,
	0x50c, 0x0000004f,
	0x50d, 0x000000a4,
	0x50e, 0x00000000,
	0x50f, 0x00000000,
	0x512, 0x0000001c,
	0x514, 0x0000000a,
	0x515, 0x00000010,
	0x516, 0x0000000a,
	0x517, 0x00000010,
	0x51a, 0x00000016,
	0x524, 0x0000000f,
	0x525, 0x0000004f,
	0x546, 0x00000020,
	0x547, 0x00000000,
	0x559, 0x00000002,
	0x55a, 0x00000002,
	0x55d, 0x000000ff,
	0x605, 0x00000030,
	0x608, 0x0000000e,
	0x609, 0x0000002a,
	0x652, 0x00000020,
	0x63c, 0x0000000a,
	0x63d, 0x0000000a,
	0x700, 0x00000021,
	0x701, 0x00000043,
	0x702, 0x00000065,
	0x703, 0x00000087,
	0x708, 0x00000021,
	0x709, 0x00000043,
	0x70a, 0x00000065,
	0x70b, 0x00000087,
};

u32 RTL8192CEAGCTAB_2TARRAY[AGCTAB_2TARRAYLENGTH] = {
	0xc78, 0x7b000001,
	0xc78, 0x7b010001,
	0xc78, 0x7b020001,
	0xc78, 0x7b030001,
	0xc78, 0x7b040001,
	0xc78, 0x7b050001,
	0xc78, 0x7a060001,
	0xc78, 0x79070001,
	0xc78, 0x78080001,
	0xc78, 0x77090001,
	0xc78, 0x760a0001,
	0xc78, 0x750b0001,
	0xc78, 0x740c0001,
	0xc78, 0x730d0001,
	0xc78, 0x720e0001,
	0xc78, 0x710f0001,
	0xc78, 0x70100001,
	0xc78, 0x6f110001,
	0xc78, 0x6e120001,
	0xc78, 0x6d130001,
	0xc78, 0x6c140001,
	0xc78, 0x6b150001,
	0xc78, 0x6a160001,
	0xc78, 0x69170001,
	0xc78, 0x68180001,
	0xc78, 0x67190001,
	0xc78, 0x661a0001,
	0xc78, 0x651b0001,
	0xc78, 0x641c0001,
	0xc78, 0x631d0001,
	0xc78, 0x621e0001,
	0xc78, 0x611f0001,
	0xc78, 0x60200001,
	0xc78, 0x49210001,
	0xc78, 0x48220001,
	0xc78, 0x47230001,
	0xc78, 0x46240001,
	0xc78, 0x45250001,
	0xc78, 0x44260001,
	0xc78, 0x43270001,
	0xc78, 0x42280001,
	0xc78, 0x41290001,
	0xc78, 0x402a0001,
	0xc78, 0x262b0001,
	0xc78, 0x252c0001,
	0xc78, 0x242d0001,
	0xc78, 0x232e0001,
	0xc78, 0x222f0001,
	0xc78, 0x21300001,
	0xc78, 0x20310001,
	0xc78, 0x06320001,
	0xc78, 0x05330001,
	0xc78, 0x04340001,
	0xc78, 0x03350001,
	0xc78, 0x02360001,
	0xc78, 0x01370001,
	0xc78, 0x00380001,
	0xc78, 0x00390001,
	0xc78, 0x003a0001,
	0xc78, 0x003b0001,
	0xc78, 0x003c0001,
	0xc78, 0x003d0001,
	0xc78, 0x003e0001,
	0xc78, 0x003f0001,
	0xc78, 0x7b400001,
	0xc78, 0x7b410001,
	0xc78, 0x7b420001,
	0xc78, 0x7b430001,
	0xc78, 0x7b440001,
	0xc78, 0x7b450001,
	0xc78, 0x7a460001,
	0xc78, 0x79470001,
	0xc78, 0x78480001,
	0xc78, 0x77490001,
	0xc78, 0x764a0001,
	0xc78, 0x754b0001,
	0xc78, 0x744c0001,
	0xc78, 0x734d0001,
	0xc78, 0x724e0001,
	0xc78, 0x714f0001,
	0xc78, 0x70500001,
	0xc78, 0x6f510001,
	0xc78, 0x6e520001,
	0xc78, 0x6d530001,
	0xc78, 0x6c540001,
	0xc78, 0x6b550001,
	0xc78, 0x6a560001,
	0xc78, 0x69570001,
	0xc78, 0x68580001,
	0xc78, 0x67590001,
	0xc78, 0x665a0001,
	0xc78, 0x655b0001,
	0xc78, 0x645c0001,
	0xc78, 0x635d0001,
	0xc78, 0x625e0001,
	0xc78, 0x615f0001,
	0xc78, 0x60600001,
	0xc78, 0x49610001,
	0xc78, 0x48620001,
	0xc78, 0x47630001,
	0xc78, 0x46640001,
	0xc78, 0x45650001,
	0xc78, 0x44660001,
	0xc78, 0x43670001,
	0xc78, 0x42680001,
	0xc78, 0x41690001,
	0xc78, 0x406a0001,
	0xc78, 0x266b0001,
	0xc78, 0x256c0001,
	0xc78, 0x246d0001,
	0xc78, 0x236e0001,
	0xc78, 0x226f0001,
	0xc78, 0x21700001,
	0xc78, 0x20710001,
	0xc78, 0x06720001,
	0xc78, 0x05730001,
	0xc78, 0x04740001,
	0xc78, 0x03750001,
	0xc78, 0x02760001,
	0xc78, 0x01770001,
	0xc78, 0x00780001,
	0xc78, 0x00790001,
	0xc78, 0x007a0001,
	0xc78, 0x007b0001,
	0xc78, 0x007c0001,
	0xc78, 0x007d0001,
	0xc78, 0x007e0001,
	0xc78, 0x007f0001,
	0xc78, 0x3800001e,
	0xc78, 0x3801001e,
	0xc78, 0x3802001e,
	0xc78, 0x3803001e,
	0xc78, 0x3804001e,
	0xc78, 0x3805001e,
	0xc78, 0x3806001e,
	0xc78, 0x3807001e,
	0xc78, 0x3808001e,
	0xc78, 0x3c09001e,
	0xc78, 0x3e0a001e,
	0xc78, 0x400b001e,
	0xc78, 0x440c001e,
	0xc78, 0x480d001e,
	0xc78, 0x4c0e001e,
	0xc78, 0x500f001e,
	0xc78, 0x5210001e,
	0xc78, 0x5611001e,
	0xc78, 0x5a12001e,
	0xc78, 0x5e13001e,
	0xc78, 0x6014001e,
	0xc78, 0x6015001e,
	0xc78, 0x6016001e,
	0xc78, 0x6217001e,
	0xc78, 0x6218001e,
	0xc78, 0x6219001e,
	0xc78, 0x621a001e,
	0xc78, 0x621b001e,
	0xc78, 0x621c001e,
	0xc78, 0x621d001e,
	0xc78, 0x621e001e,
	0xc78, 0x621f001e,
};

u32 RTL8192CEAGCTAB_1TARRAY[AGCTAB_1TARRAYLENGTH] = {
	0xc78, 0x7b000001,
	0xc78, 0x7b010001,
	0xc78, 0x7b020001,
	0xc78, 0x7b030001,
	0xc78, 0x7b040001,
	0xc78, 0x7b050001,
	0xc78, 0x7a060001,
	0xc78, 0x79070001,
	0xc78, 0x78080001,
	0xc78, 0x77090001,
	0xc78, 0x760a0001,
	0xc78, 0x750b0001,
	0xc78, 0x740c0001,
	0xc78, 0x730d0001,
	0xc78, 0x720e0001,
	0xc78, 0x710f0001,
	0xc78, 0x70100001,
	0xc78, 0x6f110001,
	0xc78, 0x6e120001,
	0xc78, 0x6d130001,
	0xc78, 0x6c140001,
	0xc78, 0x6b150001,
	0xc78, 0x6a160001,
	0xc78, 0x69170001,
	0xc78, 0x68180001,
	0xc78, 0x67190001,
	0xc78, 0x661a0001,
	0xc78, 0x651b0001,
	0xc78, 0x641c0001,
	0xc78, 0x631d0001,
	0xc78, 0x621e0001,
	0xc78, 0x611f0001,
	0xc78, 0x60200001,
	0xc78, 0x49210001,
	0xc78, 0x48220001,
	0xc78, 0x47230001,
	0xc78, 0x46240001,
	0xc78, 0x45250001,
	0xc78, 0x44260001,
	0xc78, 0x43270001,
	0xc78, 0x42280001,
	0xc78, 0x41290001,
	0xc78, 0x402a0001,
	0xc78, 0x262b0001,
	0xc78, 0x252c0001,
	0xc78, 0x242d0001,
	0xc78, 0x232e0001,
	0xc78, 0x222f0001,
	0xc78, 0x21300001,
	0xc78, 0x20310001,
	0xc78, 0x06320001,
	0xc78, 0x05330001,
	0xc78, 0x04340001,
	0xc78, 0x03350001,
	0xc78, 0x02360001,
	0xc78, 0x01370001,
	0xc78, 0x00380001,
	0xc78, 0x00390001,
	0xc78, 0x003a0001,
	0xc78, 0x003b0001,
	0xc78, 0x003c0001,
	0xc78, 0x003d0001,
	0xc78, 0x003e0001,
	0xc78, 0x003f0001,
	0xc78, 0x7b400001,
	0xc78, 0x7b410001,
	0xc78, 0x7b420001,
	0xc78, 0x7b430001,
	0xc78, 0x7b440001,
	0xc78, 0x7b450001,
	0xc78, 0x7a460001,
	0xc78, 0x79470001,
	0xc78, 0x78480001,
	0xc78, 0x77490001,
	0xc78, 0x764a0001,
	0xc78, 0x754b0001,
	0xc78, 0x744c0001,
	0xc78, 0x734d0001,
	0xc78, 0x724e0001,
	0xc78, 0x714f0001,
	0xc78, 0x70500001,
	0xc78, 0x6f510001,
	0xc78, 0x6e520001,
	0xc78, 0x6d530001,
	0xc78, 0x6c540001,
	0xc78, 0x6b550001,
	0xc78, 0x6a560001,
	0xc78, 0x69570001,
	0xc78, 0x68580001,
	0xc78, 0x67590001,
	0xc78, 0x665a0001,
	0xc78, 0x655b0001,
	0xc78, 0x645c0001,
	0xc78, 0x635d0001,
	0xc78, 0x625e0001,
	0xc78, 0x615f0001,
	0xc78, 0x60600001,
	0xc78, 0x49610001,
	0xc78, 0x48620001,
	0xc78, 0x47630001,
	0xc78, 0x46640001,
	0xc78, 0x45650001,
	0xc78, 0x44660001,
	0xc78, 0x43670001,
	0xc78, 0x42680001,
	0xc78, 0x41690001,
	0xc78, 0x406a0001,
	0xc78, 0x266b0001,
	0xc78, 0x256c0001,
	0xc78, 0x246d0001,
	0xc78, 0x236e0001,
	0xc78, 0x226f0001,
	0xc78, 0x21700001,
	0xc78, 0x20710001,
	0xc78, 0x06720001,
	0xc78, 0x05730001,
	0xc78, 0x04740001,
	0xc78, 0x03750001,
	0xc78, 0x02760001,
	0xc78, 0x01770001,
	0xc78, 0x00780001,
	0xc78, 0x00790001,
	0xc78, 0x007a0001,
	0xc78, 0x007b0001,
	0xc78, 0x007c0001,
	0xc78, 0x007d0001,
	0xc78, 0x007e0001,
	0xc78, 0x007f0001,
	0xc78, 0x3800001e,
	0xc78, 0x3801001e,
	0xc78, 0x3802001e,
	0xc78, 0x3803001e,
	0xc78, 0x3804001e,
	0xc78, 0x3805001e,
	0xc78, 0x3806001e,
	0xc78, 0x3807001e,
	0xc78, 0x3808001e,
	0xc78, 0x3c09001e,
	0xc78, 0x3e0a001e,
	0xc78, 0x400b001e,
	0xc78, 0x440c001e,
	0xc78, 0x480d001e,
	0xc78, 0x4c0e001e,
	0xc78, 0x500f001e,
	0xc78, 0x5210001e,
	0xc78, 0x5611001e,
	0xc78, 0x5a12001e,
	0xc78, 0x5e13001e,
	0xc78, 0x6014001e,
	0xc78, 0x6015001e,
	0xc78, 0x6016001e,
	0xc78, 0x6217001e,
	0xc78, 0x6218001e,
	0xc78, 0x6219001e,
	0xc78, 0x621a001e,
	0xc78, 0x621b001e,
	0xc78, 0x621c001e,
	0xc78, 0x621d001e,
	0xc78, 0x621e001e,
	0xc78, 0x621f001e,
};
