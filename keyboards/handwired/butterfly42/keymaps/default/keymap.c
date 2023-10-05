#include QMK_KEYBOARD_H

#define _COLEMAK_DH 0 // default COLEMAK_DH layer
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3

/*
* Keymap: Default Layer in _COLEMAK_DH
*
* |------+------+------+------+------+------+------|------+------+------+------+------+------|
* |  ESC |  Q   |   W  |   F  |   P  |   B  |      |   J  |   L  |   U  |   Y  |   :  | BSPC |
* |------+------+------+------+------+------+      |------+------+------+------+------+------|
* | LCTL |  A   |   R  |   S  |   T  |   G  |      |   M  |   N  |   E  |   I  |   O  |   '  |
* |------+------+------+------+------|------+      |------+------+------+------+------+------|
* | LSFT |  Z   |   X  |   C  |   D  |   V  |      |   K  |   H  |   ,  |   .  |   /  | RSFT |
* |------+------+------+------+------|------+      |------+------+------+------+------+------|
* |      |      |      | LGUI | Lower|  SPC |      |  SPC | Raise| LALT |      |      |      |
* |------|------|------|------|------|------|------|------+------+------+------+------+------|
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_COLEMAK_DH] = LAYOUT(
    KC_ESC,         KC_Q,       KC_W,       KC_F,       KC_P,       KC_B,           KC_J,   KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_BSPC,
    LCTL_T(KC_TAB), KC_A,       KC_R,       KC_S,       KC_T,       KC_G,           KC_M,   KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,
    KC_LSFT,        KC_Z,       KC_X,       KC_C,       KC_D,       KC_V,           KC_K,   KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,
    XXXXXXX,        XXXXXXX,    XXXXXXX,    KC_LGUI,    MO(_LOWER), KC_SPC,         KC_SPC, MO(_RAISE), KC_LALT,    XXXXXXX,    XXXXXXX,    XXXXXXX
  ),

  [_LOWER] = LAYOUT(
    KC_GRV,         KC_1,       KC_2,       KC_3,       KC_4,       KC_5,               KC_6,           KC_7,           KC_8,       KC_9,       KC_0,       KC_DELETE,
    LCTL_T(KC_TAB), KC_PIPE,    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_PGUP,            KC_HOME,        KC_RPRN,        KC_RBRC,    KC_RCBR,    KC_BSLS,    XXXXXXX,
    KC_LSFT,        XXXXXXX,    XXXXXXX,    KC_UNDS,    KC_MINUS,   KC_PGDN,            KC_END,         KC_EQUAL,       KC_PLUS,    XXXXXXX,    XXXXXXX,    KC_RSFT,
    XXXXXXX,        XXXXXXX,    XXXXXXX,    KC_LGUI,    _______,    KC_ENT,             KC_ENT,         MO(_ADJUST),    KC_LALT,    XXXXXXX,    XXXXXXX,    XXXXXXX
  ),

  [_RAISE] = LAYOUT(
    KC_TILDE,   KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,         KC_PERC,            KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    KC_DELETE,
    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,          KC_F6,              XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,
    KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,         KC_F12,             XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_RSFT,
    XXXXXXX,    XXXXXXX,    XXXXXXX,    KC_LGUI,    MO(_ADJUST),    KC_ENT,             KC_ENT,     _______,    KC_LALT,    XXXXXXX,    XXXXXXX,    XXXXXXX
  ),

  [_ADJUST] = LAYOUT(
    XXXXXXX,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    KC_MUTE,    KC_VOLD,    KC_VOLU,    XXXXXXX,    KC_PSCR,
    LCTL_T(KC_TAB), XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,
    KC_LSFT,        XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,            XXXXXXX,    KC_MPRV,    KC_MSTP,    KC_MPLY,    KC_MNXT,    KC_RSFT,
    XXXXXXX,        XXXXXXX,    XXXXXXX,    KC_LGUI,    _______,    KC_ENT,             KC_ENT,     _______,    KC_LALT,    XXXXXXX,    XXXXXXX,    XXXXXXX
  )
};
