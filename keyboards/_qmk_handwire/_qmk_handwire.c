/* Copyright 2017 skully <skullydazed@gmail.com>
 *           2018 Jack Humbert <jack.humb@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "_qmk_handwire.h"


const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {
/* Refer to IS31 manual for these locations
 *   driver
 *   |  R location
 *   |  |      G location
 *   |  |      |      B location
 *   |  |      |      | */
    {0, C3_2,  C1_1,  C4_2}, // 1
    {0, C2_2,  C1_2,  C4_3},
    {0, C2_3,  C1_3,  C3_3},
    {0, C2_4,  C1_4,  C3_4},
    {0, C2_5,  C1_5,  C3_5},
    {0, C2_6,  C1_6,  C3_6},
    {0, C2_7,  C1_7,  C3_7},
    {0, C2_8,  C1_8,  C3_8},
    {0, C3_1,  C2_1,  C4_1},

    {0, C7_8,  C6_8,  C8_8}, // 10
    {0, C7_7,  C6_7,  C9_8},
    {0, C8_7,  C6_6,  C9_7},
    {0, C8_6,  C7_6,  C9_6},
    {0, C8_5,  C7_5,  C9_5},
    {0, C8_4,  C7_4,  C9_4},
    {0, C8_3,  C7_3,  C9_3},
    {0, C8_2,  C7_2,  C9_2},
    {0, C8_1,  C7_1,  C9_1},

    {0, C3_10,  C1_9,   C4_10}, // 19
    {0, C2_10,  C1_10,  C4_11},
    {0, C2_11,  C1_11,  C3_11},
    {0, C2_12,  C1_12,  C3_12},
    {0, C2_13,  C1_13,  C3_13},
    {0, C2_14,  C1_14,  C3_14},
    {0, C2_15,  C1_15,  C3_15},
    {0, C2_16,  C1_16,  C3_16},
    {0, C3_9,   C2_9,   C4_9},

    {0, C7_16,  C6_16,  C8_16}, // 28
    {0, C7_15,  C6_15,  C9_16},
    {0, C8_15,  C6_14,  C9_15},
    {0, C8_10,  C7_10,  C9_10},
    {0, C8_9,   C7_9,   C9_9},
    {0, C8_11,  C7_11,  C9_11},
    {0, C8_12,  C7_12,  C9_12},
    {0, C8_13,  C7_13,  C9_13},
//  {0, C8_14,  C7_14,  C9_4}

};

const rgb_led g_rgb_leds[DRIVER_LED_TOTAL] = {

    /*{row | col << 4}
      |             {x=0..224, y=0..64}
      |              |                 modifier
      |              |                 | */
    {{0|(0<<4)},   {20.36*0, 21.33*0}, 1},
    {{1|(0<<4)},   {20.36*1, 21.33*0}, 0},
    {{2|(0<<4)},   {20.36*2, 21.33*0}, 0},
    {{3|(0<<4)},   {20.36*3, 21.33*0}, 0},
    {{4|(0<<4)},   {20.36*4, 21.33*0}, 0},

    {{0|(1<<4)},   {20.36*5, 21.33*0}, 0},
    {{1|(1<<4)},   {20.36*6, 21.33*0}, 0},
    {{2|(1<<4)},   {20.36*7, 21.33*0}, 0},
    {{3|(1<<4)},   {20.36*8, 21.33*0}, 0},
    {{4|(1<<4)},   {20.36*9, 21.33*0}, 0},

    {{0|(2<<4)},   {20.36*5, 21.33*0}, 0},
    {{1|(2<<4)},   {20.36*6, 21.33*0}, 0},
    {{2|(2<<4)},   {20.36*7, 21.33*0}, 0},
    {{3|(2<<4)},   {20.36*8, 21.33*0}, 0},
    {{4|(2<<4)},   {20.36*9, 21.33*0}, 0},

    {{0|(3<<4)},   {20.36*5, 21.33*0}, 0},
    {{1|(3<<4)},   {20.36*6, 21.33*0}, 0},
    {{2|(3<<4)},   {20.36*7, 21.33*0}, 0},
    {{3|(3<<4)},   {20.36*8, 21.33*0}, 0},
    {{4|(3<<4)},   {20.36*9, 21.33*0}, 0},

    {{0|(4<<4)},   {20.36*5, 21.33*0}, 0},
    {{1|(4<<4)},   {20.36*6, 21.33*0}, 0},
    {{2|(4<<4)},   {20.36*7, 21.33*0}, 0},
    {{3|(4<<4)},   {20.36*8, 21.33*0}, 0},
    {{4|(4<<4)},   {20.36*9, 21.33*0}, 0},

    {{0|(5<<4)},   {20.36*5, 21.33*0}, 0},
    {{1|(5<<4)},   {20.36*6, 21.33*0}, 0},
    {{2|(5<<4)},   {20.36*7, 21.33*0}, 0},
    {{3|(5<<4)},   {20.36*8, 21.33*0}, 0},

    {{0|(6<<4)},   {20.36*5, 21.33*0}, 0},
    {{1|(6<<4)},   {20.36*6, 21.33*0}, 0},
    {{2|(6<<4)},   {20.36*7, 21.33*0}, 0},

    // cluster
    {{5|(0<<4)},   {20.36*5, 21.33*0}, 0},
    {{5|(1<<4)},   {20.36*6, 21.33*0}, 0},
    {{5|(2<<4)},   {20.36*7, 21.33*0}, 0},

};

void matrix_init_kb(void) {

}

void matrix_scan_kb(void) {

}
