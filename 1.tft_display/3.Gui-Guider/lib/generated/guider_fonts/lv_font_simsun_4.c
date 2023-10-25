/*
 * Copyright 2023 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */
/*******************************************************************************
 * Size: 4 px
 * Bpp: 4
 * Opts: --user-data-dir=/Users/owlj/Library/Application Support/gui-guider --app-path=/Applications/Gui-Guider.app/Contents/Resources/app.asar --no-sandbox --no-zygote --lang=zh-CN --num-raster-threads=4 --enable-zero-copy --enable-gpu-memory-buffer-compositor-resources --enable-main-frame-before-activation --renderer-client-id=5 --time-ticks-at-unix-epoch=-1698044949794252 --launch-time-ticks=72381123840 --shared-files --field-trial-handle=1718379636,r,3544929659767153246,7258263890201438452,131072 --disable-features=SpareRendererForSitePerProcess
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_FONT_SIMSUN_4
#define LV_FONT_SIMSUN_4 1
#endif

#if LV_FONT_SIMSUN_4

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x21, 0x11, 0x11,

    /* U+0022 "\"" */
    0x44, 0x0,

    /* U+0023 "#" */
    0x55, 0x22, 0x55,

    /* U+0024 "$" */
    0x44, 0x34, 0x44, 0x0,

    /* U+0025 "%" */
    0x51, 0x33, 0x15,

    /* U+0026 "&" */
    0x32, 0x62, 0x64,

    /* U+0027 "'" */
    0x40,

    /* U+0028 "(" */
    0x1, 0x3, 0x12, 0x3, 0x0,

    /* U+0029 ")" */
    0x10, 0x30, 0x21, 0x30, 0x0,

    /* U+002A "*" */
    0x44, 0x43,

    /* U+002B "+" */
    0x0, 0x23, 0x0,

    /* U+002D "-" */
    0x11,

    /* U+002E "." */
    0x20,

    /* U+002F "/" */
    0x0, 0x2, 0x10, 0x20, 0x0,

    /* U+0030 "0" */
    0x44, 0x44, 0x44,

    /* U+0031 "1" */
    0x22, 0x12, 0x23,

    /* U+0032 "2" */
    0x34, 0x3, 0x54,

    /* U+0033 "3" */
    0x33, 0x3, 0x34,

    /* U+0034 "4" */
    0x4, 0x24, 0x26,

    /* U+0035 "5" */
    0x32, 0x24, 0x34,

    /* U+0036 "6" */
    0x32, 0x64, 0x44,

    /* U+0037 "7" */
    0x44, 0x2, 0x30,

    /* U+0038 "8" */
    0x33, 0x44, 0x33,

    /* U+0039 "9" */
    0x43, 0x26, 0x33,

    /* U+003A ":" */
    0x10, 0x10,

    /* U+003B ";" */
    0x10, 0x10, 0x0,

    /* U+003C "<" */
    0x0, 0x2, 0x30, 0x2,

    /* U+003D "=" */
    0x11, 0x22,

    /* U+003E ">" */
    0x0, 0x20, 0x3, 0x20,

    /* U+003F "?" */
    0x34, 0x3, 0x11,

    /* U+0040 "@" */
    0x35, 0x65, 0x45,

    /* U+0041 "A" */
    0x0, 0x23, 0x23, 0x34,

    /* U+0042 "B" */
    0x54, 0x44, 0x54,

    /* U+0043 "C" */
    0x44, 0x40, 0x42,

    /* U+0044 "D" */
    0x53, 0x44, 0x53,

    /* U+0045 "E" */
    0x53, 0x42, 0x53,

    /* U+0046 "F" */
    0x53, 0x42, 0x50,

    /* U+0047 "G" */
    0x33, 0x43, 0x34,

    /* U+0048 "H" */
    0x44, 0x44, 0x44,

    /* U+0049 "I" */
    0x22, 0x22, 0x22,

    /* U+004A "J" */
    0x5, 0x4, 0x4, 0x22,

    /* U+004B "K" */
    0x53, 0x62, 0x45,

    /* U+004C "L" */
    0x40, 0x40, 0x53,

    /* U+004D "M" */
    0x56, 0x55, 0x55,

    /* U+004E "N" */
    0x52, 0x34, 0x24,

    /* U+004F "O" */
    0x33, 0x44, 0x33,

    /* U+0050 "P" */
    0x54, 0x42, 0x50,

    /* U+0051 "Q" */
    0x43, 0x44, 0x45, 0x3,

    /* U+0052 "R" */
    0x54, 0x44, 0x44,

    /* U+0053 "S" */
    0x33, 0x33, 0x43,

    /* U+0054 "T" */
    0x54, 0x21, 0x22,

    /* U+0055 "U" */
    0x42, 0x41, 0x31,

    /* U+0056 "V" */
    0x53, 0x41, 0x31,

    /* U+0057 "W" */
    0x55, 0x55, 0x33,

    /* U+0058 "X" */
    0x43, 0x22, 0x35,

    /* U+0059 "Y" */
    0x53, 0x31, 0x22,

    /* U+005A "Z" */
    0x35, 0x21, 0x53,

    /* U+005B "[" */
    0x11, 0x20, 0x20, 0x20, 0x11,

    /* U+005C "\\" */
    0x30, 0x11, 0x3, 0x1,

    /* U+005D "]" */
    0x11, 0x2, 0x2, 0x2, 0x11,

    /* U+005E "^" */
    0x11,

    /* U+005F "_" */
    0x11,

    /* U+0060 "`" */
    0x20,

    /* U+0061 "a" */
    0x34, 0x44,

    /* U+0062 "b" */
    0x0, 0x30, 0x44, 0x43,

    /* U+0063 "c" */
    0x32, 0x41,

    /* U+0064 "d" */
    0x0, 0x4, 0x34, 0x34,

    /* U+0065 "e" */
    0x33, 0x41,

    /* U+0066 "f" */
    0x22, 0x41, 0x40,

    /* U+0067 "g" */
    0x35, 0x42, 0x44,

    /* U+0068 "h" */
    0x30, 0x43, 0x44,

    /* U+0069 "i" */
    0x11, 0x21, 0x22,

    /* U+006A "j" */
    0x2, 0x4, 0x3, 0x22,

    /* U+006B "k" */
    0x30, 0x43, 0x44,

    /* U+006C "l" */
    0x21, 0x11, 0x22,

    /* U+006D "m" */
    0x65, 0x56,

    /* U+006E "n" */
    0x53, 0x44,

    /* U+006F "o" */
    0x33, 0x33,

    /* U+0070 "p" */
    0x54, 0x44, 0x40,

    /* U+0071 "q" */
    0x34, 0x34, 0x4,

    /* U+0072 "r" */
    0x52, 0x40,

    /* U+0073 "s" */
    0x33, 0x34,

    /* U+0074 "t" */
    0x10, 0x40, 0x21,

    /* U+0075 "u" */
    0x33, 0x34,

    /* U+0076 "v" */
    0x43, 0x31,

    /* U+0077 "w" */
    0x65, 0x34,

    /* U+0078 "x" */
    0x43, 0x34,

    /* U+0079 "y" */
    0x43, 0x22, 0x20,

    /* U+007A "z" */
    0x34, 0x43,

    /* U+007B "{" */
    0x1, 0x2, 0x2, 0x2, 0x1,

    /* U+007C "|" */
    0x0, 0x10, 0x10, 0x10, 0x10,

    /* U+007D "}" */
    0x10, 0x20, 0x20, 0x20, 0x10,

    /* U+007E "~" */
    0x20, 0x2,

    /* U+6309 "按" */
    0x0, 0x0, 0x42, 0x32, 0x52, 0x42, 0x31, 0x61,
    0x21, 0x1,

    /* U+94AE "钮" */
    0x0, 0x0, 0x32, 0x44, 0x53, 0x43, 0x31, 0x33,
    0x0, 0x11,

    /* U+F001 "" */
    0x0, 0x2, 0x9, 0xee, 0xa, 0x18, 0x28, 0x4d,
    0x94, 0x2,

    /* U+F008 "" */
    0x97, 0x6a, 0x1c, 0x76, 0xc2, 0x97, 0x6a, 0x10,

    /* U+F00B "" */
    0x0, 0x0, 0xfa, 0xff, 0xb8, 0xbb, 0xfa, 0xfe,
    0x0, 0x0,

    /* U+F00C "" */
    0x0, 0x2b, 0xb5, 0xc2, 0x2c, 0x20,

    /* U+F00D "" */
    0xa4, 0x86, 0xf2, 0x94, 0x80,

    /* U+F011 "" */
    0x0, 0x30, 0x7, 0x38, 0x80, 0xa1, 0x75, 0x49,
    0x30, 0x92, 0x7, 0x93, 0x0,

    /* U+F013 "" */
    0x0, 0x32, 0x0, 0x9e, 0xd6, 0xb, 0x5a, 0x60,
    0x9e, 0xd6, 0x0, 0x32, 0x0,

    /* U+F015 "" */
    0x1, 0x44, 0x2, 0xaa, 0xc0, 0x8e, 0xfa, 0x33,
    0xe6, 0xb0, 0x0, 0x0, 0x0,

    /* U+F019 "" */
    0x0, 0x52, 0x0, 0xb, 0x40, 0x4, 0xfc, 0x2,
    0xcb, 0xb9, 0x18, 0x86, 0x50,

    /* U+F01C "" */
    0x58, 0x89, 0xc, 0x51, 0xa6, 0xff, 0xff, 0x70,

    /* U+F021 "" */
    0x18, 0x87, 0x91, 0x7f, 0x54, 0x3, 0xf6, 0x38,
    0x46, 0x70,

    /* U+F026 "" */
    0x0, 0x7d, 0xff, 0x8,

    /* U+F027 "" */
    0x0, 0x7, 0xd0, 0xff, 0x60, 0x80,

    /* U+F028 "" */
    0x0, 0x2, 0x7, 0xd1, 0x73, 0xff, 0x65, 0x60,
    0x81, 0x73, 0x0, 0x2, 0x0,

    /* U+F03E "" */
    0xbe, 0xff, 0xcb, 0x3b, 0xb8, 0x8b,

    /* U+F048 "" */
    0x30, 0x39, 0x7e, 0x9e, 0xf8, 0x2c, 0x0, 0x0,

    /* U+F04B "" */
    0x50, 0x0, 0xfd, 0x40, 0xff, 0xf5, 0xfd, 0x40,
    0x50, 0x0,

    /* U+F04C "" */
    0x63, 0x63, 0xf8, 0xf8, 0xf8, 0xf8, 0xf7, 0xf7,
    0x0, 0x0,

    /* U+F04D "" */
    0x67, 0x72, 0xff, 0xf8, 0xff, 0xf8, 0xff, 0xf7,
    0x0, 0x0,

    /* U+F051 "" */
    0x30, 0x38, 0xca, 0x8f, 0xe7, 0x78, 0x0, 0x0,

    /* U+F052 "" */
    0x0, 0x40, 0x0, 0x4f, 0xc0, 0xb, 0xcc, 0x40,
    0xef, 0xf7, 0x0, 0x0, 0x0,

    /* U+F053 "" */
    0x0, 0x1, 0xa1, 0x94, 0x0, 0xa1, 0x0, 0x0,

    /* U+F054 "" */
    0x10, 0x7, 0x60, 0xb, 0x27, 0x50, 0x10, 0x0,

    /* U+F067 "" */
    0x3, 0x0, 0xa, 0x20, 0xbe, 0xc5, 0x9, 0x10,
    0x1, 0x0,

    /* U+F068 "" */
    0xbc, 0xc5,

    /* U+F06E "" */
    0x48, 0x88, 0xd, 0x7c, 0xd3, 0x49, 0x88, 0x0,

    /* U+F070 "" */
    0x4, 0x0, 0x0, 0x4, 0xb8, 0x91, 0x9, 0x5c,
    0xa9, 0x1, 0x96, 0x96, 0x0, 0x0, 0x4,

    /* U+F071 "" */
    0x0, 0x3, 0x0, 0x0, 0x8e, 0x10, 0x2, 0xe6,
    0x90, 0xa, 0xf9, 0xf3, 0x7, 0x88, 0x83,

    /* U+F074 "" */
    0x0, 0x1, 0xa4, 0x9d, 0xb, 0x54, 0xa4, 0x9d,
    0x0, 0x1,

    /* U+F077 "" */
    0x4, 0x10, 0x59, 0xa1, 0x50, 0x23,

    /* U+F078 "" */
    0x50, 0x23, 0x59, 0xa1, 0x4, 0x10,

    /* U+F079 "" */
    0x0, 0x0, 0x0, 0x5c, 0x68, 0x50, 0x18, 0x1,
    0x80, 0x9, 0x76, 0xc0, 0x0, 0x0, 0x0,

    /* U+F07B "" */
    0xfe, 0x87, 0xff, 0xff, 0xff, 0xff,

    /* U+F093 "" */
    0x2, 0x20, 0x1e, 0xe1, 0x8, 0x80, 0xba, 0xab,
    0x78, 0x66,

    /* U+F095 "" */
    0x0, 0x1, 0x60, 0x0, 0x6e, 0x0, 0x5, 0x90,
    0xcc, 0xb0, 0x6, 0x40, 0x0,

    /* U+F0C4 "" */
    0x41, 0x21, 0xaa, 0xc1, 0x5f, 0x70, 0xa5, 0x93,
    0x0, 0x0,

    /* U+F0C5 "" */
    0xa, 0x85, 0x8f, 0xd6, 0xcf, 0xfb, 0xcb, 0xc8,
    0x78, 0x50,

    /* U+F0C7 "" */
    0x67, 0x40, 0x80, 0xb3, 0xfb, 0xf4, 0xfb, 0xf4,
    0x0, 0x0,

    /* U+F0E7 "" */
    0x3, 0x30, 0xd, 0x90, 0xe, 0xf4, 0x0, 0xb0,
    0x2, 0x20,

    /* U+F0EA "" */
    0x34, 0x20, 0xfa, 0x70, 0xfb, 0xb6, 0xfb, 0xfb,
    0x7, 0xb7,

    /* U+F0F3 "" */
    0x3, 0x0, 0x4f, 0xb0, 0x8f, 0xf0, 0xac, 0xc4,
    0x4, 0x10,

    /* U+F11C "" */
    0xbc, 0xaa, 0x7f, 0xab, 0xc8, 0xba, 0x8a, 0x70,

    /* U+F124 "" */
    0x0, 0x1, 0x60, 0x1, 0x8f, 0xb0, 0xa, 0xdf,
    0x40, 0x0, 0x4d, 0x0, 0x0, 0x13, 0x0,

    /* U+F15B "" */
    0x43, 0x1f, 0xc9, 0xff, 0xff, 0xff, 0xbb, 0xb0,

    /* U+F1EB "" */
    0x3, 0x53, 0xa, 0x76, 0x7a, 0xa, 0x8a, 0x0,
    0xa, 0x0, 0x0, 0x0, 0x0,

    /* U+F240 "" */
    0x98, 0x88, 0x8c, 0xff, 0xfa, 0x98, 0x88, 0x80,

    /* U+F241 "" */
    0x98, 0x88, 0x8c, 0xff, 0x4a, 0x98, 0x88, 0x80,

    /* U+F242 "" */
    0x98, 0x88, 0x8c, 0xf8, 0xa, 0x98, 0x88, 0x80,

    /* U+F243 "" */
    0x98, 0x88, 0x8c, 0xc0, 0xa, 0x98, 0x88, 0x80,

    /* U+F244 "" */
    0x98, 0x88, 0x88, 0x0, 0xa, 0x98, 0x88, 0x80,

    /* U+F287 "" */
    0x1, 0x73, 0x0, 0xd6, 0x64, 0x80, 0x0, 0x4b,
    0x0,

    /* U+F293 "" */
    0x3, 0x10, 0xaa, 0xb0, 0xd5, 0xd0, 0xb6, 0xb0,
    0x49, 0x60,

    /* U+F2ED "" */
    0x37, 0x51, 0x9c, 0xc3, 0xaa, 0xc4, 0xaa, 0xc4,
    0x58, 0x71,

    /* U+F304 "" */
    0x0, 0x1, 0x40, 0x2, 0xac, 0x2, 0xee, 0x10,
    0xde, 0x20, 0x7, 0x20, 0x0,

    /* U+F55A "" */
    0x2e, 0xdd, 0xed, 0xf6, 0x6f, 0x2e, 0xdd, 0xe0,

    /* U+F7C2 "" */
    0x4, 0x40, 0xa7, 0xb1, 0xff, 0xf2, 0xff, 0xf2,
    0xab, 0xa0,

    /* U+F8A2 "" */
    0x1, 0x6, 0xcb, 0xad, 0x42, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 32, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 5, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 12, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 15, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 18, .adv_w = 32, .box_w = 1, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 19, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 24, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 29, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 34, .adv_w = 32, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 35, .adv_w = 32, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 41, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 44, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 50, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 53, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 56, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 59, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 65, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 68, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 71, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 73, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 76, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 80, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 82, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 86, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 92, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 96, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 99, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 105, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 108, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 111, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 114, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 120, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 124, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 130, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 133, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 136, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 139, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 146, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 149, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 152, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 161, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 170, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 178, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 182, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 187, .adv_w = 32, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 188, .adv_w = 32, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 189, .adv_w = 32, .box_w = 2, .box_h = 1, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 190, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 196, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 202, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 204, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 207, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 210, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 213, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 216, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 220, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 223, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 226, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 228, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 232, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 235, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 238, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 242, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 247, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 249, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 251, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 253, .adv_w = 32, .box_w = 2, .box_h = 3, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 256, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 258, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 263, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 268, .adv_w = 32, .box_w = 2, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 273, .adv_w = 32, .box_w = 2, .box_h = 2, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 275, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 285, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 295, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 305, .adv_w = 64, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 323, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 329, .adv_w = 44, .box_w = 3, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 347, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 360, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 373, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 386, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 394, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 404, .adv_w = 32, .box_w = 2, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 48, .box_w = 3, .box_h = 4, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 72, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 427, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 433, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 441, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 451, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 461, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 471, .adv_w = 56, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 479, .adv_w = 56, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 492, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 500, .adv_w = 40, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 508, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 518, .adv_w = 56, .box_w = 4, .box_h = 1, .ofs_x = 0, .ofs_y = 1},
    {.bitmap_index = 520, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 80, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 543, .adv_w = 72, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 558, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 568, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 574, .adv_w = 56, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 80, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 595, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 601, .adv_w = 64, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 611, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 624, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 634, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 644, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 654, .adv_w = 40, .box_w = 4, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 664, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 674, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 684, .adv_w = 72, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 64, .box_w = 6, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 707, .adv_w = 48, .box_w = 3, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 715, .adv_w = 80, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 728, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 736, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 744, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 752, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 768, .adv_w = 80, .box_w = 6, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 777, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 787, .adv_w = 56, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 797, .adv_w = 64, .box_w = 5, .box_h = 5, .ofs_x = -1, .ofs_y = -1},
    {.bitmap_index = 810, .adv_w = 80, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 48, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 828, .adv_w = 64, .box_w = 4, .box_h = 3, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_2[] = {
    0x0, 0x31a5, 0x8cf8, 0x8cff, 0x8d02, 0x8d03, 0x8d04, 0x8d08,
    0x8d0a, 0x8d0c, 0x8d10, 0x8d13, 0x8d18, 0x8d1d, 0x8d1e, 0x8d1f,
    0x8d35, 0x8d3f, 0x8d42, 0x8d43, 0x8d44, 0x8d48, 0x8d49, 0x8d4a,
    0x8d4b, 0x8d5e, 0x8d5f, 0x8d65, 0x8d67, 0x8d68, 0x8d6b, 0x8d6e,
    0x8d6f, 0x8d70, 0x8d72, 0x8d8a, 0x8d8c, 0x8dbb, 0x8dbc, 0x8dbe,
    0x8dde, 0x8de1, 0x8dea, 0x8e13, 0x8e1b, 0x8e52, 0x8ee2, 0x8f37,
    0x8f38, 0x8f39, 0x8f3a, 0x8f3b, 0x8f7e, 0x8f8a, 0x8fe4, 0x8ffb,
    0x9251, 0x94b9, 0x9599
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 12, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 45, .range_length = 82, .glyph_id_start = 13,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 25353, .range_length = 38298, .glyph_id_start = 95,
        .unicode_list = unicode_list_2, .glyph_id_ofs_list = NULL, .list_length = 59, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 3,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t lv_font_simsun_4 = {
#else
lv_font_t lv_font_simsun_4 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 4,          /*The maximum line height required by the font*/
    .base_line = 0.6,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if LV_FONT_SIMSUN_4*/

