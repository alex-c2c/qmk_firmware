#include QMK_KEYBOARD_H

#define HITBOX 0 // Base layer


/****************************************************************************************************
*
* Keymap: Default Layer in Qwerty
*
* |------+------+------+------+------+------+------|
* |      |      |      |   1  |   2  |   3  |   4  |
* |------+------+------+------+------+------+------|
* |      |      |      |   5  |   6  |   7  |   8  |
* |------+------+------+------+------|------+------|
* | Left | Down | Right|   A  |   B  |   C  |   D  |
* |------+------+------+------+------|------+------|
* |      |      |  Up  |   E  |   F  |   G  |   H  |
* |------|------|------|------|------|------|------|
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[HITBOX] = LAYOUT(
           KC_NO,   KC_NO,      KC_NO,      KC_1,   KC_2,   KC_3,   KC_4,
           KC_NO,   KC_NO,      KC_NO,      KC_5,   KC_6,   KC_7,   KC_8,
           KC_LEFT, KC_DOWN,    KC_RIGHT,   KC_A,   KC_B,   KC_C,   KC_D,
           KC_NO,   KC_NO,      KC_UP,      KC_E,   KC_F,   KC_G,   KC_H
    )
};
