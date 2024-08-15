// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1
#define _RAISE 2
#define _L2 3
#define _R2 4

enum custom_keycodes {
    BASE = SAFE_RANGE,
    LOWER,
    RAISE,
    L2,
    R2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_dayo(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6
    ),
    [1] = LAYOUT_dayo(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6
    ),
    [2] = LAYOUT_dayo(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6
    ),
    [3] = LAYOUT_dayo(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6
    ),
    [4] = LAYOUT_dayo(
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,
        KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6
    ),
};

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
//     [0] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
//     [1] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
//     [2] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN)},
//     [3] =    { ENCODER_CCW_CW(KC_VOLU,KC_VOLD)},
//     [4] =    { ENCODER_CCW_CW(KC_VOLU,KC_VOLD)}
// };
// #endif


