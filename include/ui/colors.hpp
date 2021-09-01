#pragma once

//abgr8888 color
// COLOR_GRAY(0xFF) = WHITE, COLOR_GRAY(0x00) = BLACK
#define COLOR_GRAY(x) (0xFF000000 | (x) << 16 | (x) << 8 | (x))

#define DEF_DRAW_RED 0xFF0000FF
#define DEF_DRAW_GREEN 0xFF00FF00
#define DEF_DRAW_BLUE 0xFFFF0000
#define DEF_DRAW_BLACK 0xFF000000
#define DEF_DRAW_WHITE 0xFFFFFFFF
#define DEF_DRAW_AQUA 0xFFFFFF00
#define DEF_DRAW_AQUA 0xFFFFFF00
#define DEF_DRAW_YELLOW 0xFF00C5FF
#define DEF_DRAW_LIGHT_GRAY 0xFFAAAAAA
#define DEF_DRAW_GRAY 0xFF777777
#define DEF_DRAW_DARK_GRAY 0xFF333333
#define DEF_DRAW_WEAK_RED 0x500000FF
#define DEF_DRAW_WEAK_GREEN 0x5000FF00
#define DEF_DRAW_WEAK_BLUE 0x50FF0000
#define DEF_DRAW_WEAK_BLACK 0x50000000
#define DEF_DRAW_WEAK_WHITE 0x50FFFFFF
#define DEF_DRAW_WEAK_AQUA 0x50FFFF00
#define DEF_DRAW_WEAK_YELLOW 0x5000C5FF
#define DEF_DRAW_NO_COLOR 0x0

#define COLOR_LINK 0xFFCB6600

#define DEFAULT_TEXT_COLOR (var_night_mode ? COLOR_GRAY(0xFF) : COLOR_GRAY(0x00))
#define LIGHT0_TEXT_COLOR (var_night_mode ? COLOR_GRAY(0xCC) : COLOR_GRAY(0x33))
#define LIGHT1_TEXT_COLOR (var_night_mode ? COLOR_GRAY(0xA0) : COLOR_GRAY(0x77))
#define DEFAULT_BACK_COLOR (var_night_mode ? COLOR_GRAY(0x00) : COLOR_GRAY(0xFF))
#define LIGHT0_BACK_COLOR (var_night_mode ? COLOR_GRAY(0x22) : COLOR_GRAY(0xDD))
#define LIGHT1_BACK_COLOR (var_night_mode ? COLOR_GRAY(0x50) : COLOR_GRAY(0xAA))
#define LIGHT2_BACK_COLOR (var_night_mode ? COLOR_GRAY(0x70) : COLOR_GRAY(0x77))
#define LIGHT3_BACK_COLOR (var_night_mode ? COLOR_GRAY(0xA0) : COLOR_GRAY(0x33))
