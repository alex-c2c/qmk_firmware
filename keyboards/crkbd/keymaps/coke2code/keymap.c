/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "keycodes.h"

#ifdef OLED_ENABLE
#    include "oled.c"
#endif

#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
#    include "rgb.c"
#endif


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_split_3x6_3(
    KC_ESC,         KC_Q,   KC_W,   KC_F,    KC_P,    KC_B,                             KC_J,       KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_BSPC,
    LCTL_T(KC_TAB), KC_A,   KC_R,   KC_S,    KC_T,    KC_G,                             KC_M,       KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,
    KC_LSFT,        KC_Z,   KC_X,   KC_C,    KC_D,    KC_V,                             KC_K,       KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
    KC_LGUI,        MO(_LOWER),     KC_SPC,                                             KC_SPC,     MO(_RAISE), KC_RALT
  ),

  [_LOWER] = LAYOUT_split_3x6_3(
    KC_GRV,         KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               KC_6,           KC_7,           KC_8,       KC_9,       KC_0,       KC_DELETE,
    LCTL_T(KC_TAB), KC_PIPE,    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_PGUP,            KC_HOME,        KC_RPRN,        KC_RBRC,    KC_RCBR,    KC_BSLS,    XXXXXXX,
    KC_LSFT,        XXXXXXX,    XXXXXXX,    KC_UNDS,    KC_MINUS,   KC_PGDN,            KC_END,         KC_EQUAL,       KC_PLUS,    XXXXXXX,    XXXXXXX,    KC_RSFT,
    KC_LGUI,        _______,    KC_ENT,                                                 KC_ENT,         MO(_ADJUST),    KC_RALT
  ),

  [_RAISE] = LAYOUT_split_3x6_3(
    KC_TILDE,   KC_EXLM,        KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_DELETE,
    KC_F1,      KC_F2,          KC_F3,      KC_F4,      KC_F5,      KC_F6,              XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,
    KC_F7,      KC_F8,          KC_F9,      KC_F10,     KC_F11,     KC_F12,             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_RSFT,
    KC_LGUI,    MO(_ADJUST),    KC_ENT,                                                 KC_ENT,     _______,    KC_RALT
  ),

  [_ADJUST] = LAYOUT_split_3x6_3(
    XXXXXXX,        RGBRST,     RGB_TOG,    RGB_RMOD,   RGB_MOD,    XXXXXXX,            XXXXXXX,    KC_MUTE,    KC_VOLD,    KC_VOLU,    XXXXXXX,    KC_PSCR,
    LCTL_T(KC_TAB), RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_SPI,    XXXXXXX,            XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,
    KC_LSFT,        RGB_HUD,    RGB_SAD,    RGB_VAD,    RGB_SPD,    XXXXXXX,            XXXXXXX,    KC_MPRV,    KC_MSTP,    KC_MPLY,    KC_MNXT,    KC_RSFT,
    KC_LGUI,        _______,    KC_ENT,                                                 KC_ENT,     _______,    KC_RALT
  )
};


/*
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK] = LAYOUT_split_3x6_3(
    XXXXXXX,    KC_Q,           KC_W,   KC_F,   KC_P,   KC_B,    //////    KC_J,    KC_L,      KC_U,       KC_Y,       KC_SCLN,         XXXXXXX,
    XXXXXXX,    LALT_T(KC_A),   KC_R,   KC_S,    KC_T,  KC_G,    //////    KC_M,    KC_N,      KC_E,       KC_I,       RALT_T(KC_O),    XXXXXXX,
    XXXXXXX,    LSFT_T(KC_Z),   KC_X,   KC_C,    KC_D,  KC_V,    //////    KC_K,    KC_H,      KC_COMM,    KC_DOT,     RSFT_T(KC_SLSH), XXXXXXX,
          KC_LGUI, LCTL_T(KC_TAB), LT(_LOWER, KC_SPC),    //////    LT(_RAISE, KC_SPC),   RCTL_T(KC_BSPC), KC_ESC
  ),

  [_LOWER] = LAYOUT_split_3x6_3(
    XXXXXXX,    KC_1,               KC_2,       KC_3,       KC_4,       KC_5,       //////    KC_6,     KC_7,       KC_8,       KC_9,     KC_0,       XXXXXXX,
    XXXXXXX,    LALT_T(KC_PIPE),    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_PGUP,    //////    KC_HOME,  KC_RPRN,    KC_RBRC,    KC_RCBR,  RALT_T(KC_BSLS),    XXXXXXX,
    XXXXXXX,    LSFT_T(KC_DQUO),    KC_TILDE,   KC_UNDS,    KC_MINUS,   KC_PGDN,    //////    KC_END,   KC_EQUAL,   KC_PLUS,    KC_GRV,   RSFT_T(KC_QUOT),    XXXXXXX,
            KC_LGUI, LCTL_T(KC_TAB),  _______,    //////    LT(_ADJUST, KC_ENT), RCTL_T(KC_BSPC), KC_ESC
  ),

  [_RAISE] = LAYOUT_split_3x6_3(
    XXXXXXX,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,    //////    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    XXXXXXX,
    XXXXXXX,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,    //////    KC_F6,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,
    XXXXXXX,    KC_F7,      KC_F8,      KC_F9,     KC_F10,     KC_F11,    //////    KC_F12,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                KC_LGUI, LCTL_T(KC_TAB),  LT(_ADJUST, KC_ENT),    //////    _______, RCTL_T(KC_BSPC), KC_ESC
  ),

  [_ADJUST] = LAYOUT_split_3x6_3(
    XXXXXXX,    RGBRST,     RGB_TOG,    RGB_RMOD,    RGB_MOD,    KC_VOLD,    //////    KC_VOLU,  XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
    XXXXXXX,    RGB_HUI,    RGB_SAI,    RGB_VAI,    RGB_SPI,    KC_MSTP,    //////    KC_MPLY,  KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,
    XXXXXXX,    RGB_HUD,    RGB_SAD,    RGB_VAD,    RGB_SPD,    KC_MPRV,    //////    KC_MNXT,  XXXXXXX,    KC_MSTP,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                    KC_LGUI, LCTL_T(KC_TAB),  _______,    //////    _______, RCTL_T(KC_BSPC), KC_ESC
  )
};
*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#ifdef OLED_ENABLE
    if (record->event.pressed) {
        oled_timer = timer_read();
        add_keylog(keycode);
    }
#endif

    switch (keycode) {
    //     case _LOWER:
    //         if (record->event.pressed) {
    //             layer_on(_LOWER);
    //         } else {
    //             layer_off(_LOWER);
    //         }
    //         return false;
    //     case _RAISE:
    //         if (record->event.pressed) {
    //             layer_on(_RAISE);
    //         } else {
    //             layer_off(_RAISE);
    //         }
    //         return false;
    //     case _ADJUST:
    //         if (record->event.pressed) {
    //             layer_on(_ADJUST);
    //         } else {
    //             layer_off(_ADJUST);
    //         }
    //         return false;

#if defined(RGBLIGHT_ENABLE) || defined(RGB_MATRIX_ENABLE)
        // case RGB_MOD:
        // case RGB_TOG:
        // case RGB_HUI:
        // case RGB_HUD:
        // case RGB_SAI:
        // case RGB_SAD:
        // case RGB_VAI:
        // case RGB_VAD:
        // case RGB_SPI:
        // case RGB_SPD:
        //     /* Override layer-based RGB and resume RGB effect to be able to preview changes */
        //     if (record->event.pressed) {
        //         restore_rgb_config();
        //         process_rgb(keycode, record);
        //         save_rgb_config();
        //     }
        //     return false;
        case RGBRST:
            if (record->event.pressed) {
#    ifdef RGBLIGHT_ENABLE
                eeconfig_update_rgblight_default();
                rgblight_enable();
#    elif RGB_MATRIX_ENABLE
                eeconfig_update_rgb_matrix_default();
                rgb_matrix_enable();
#    endif
                save_rgb_config();
            }
            return false;
#endif
    }

    return true;
}
