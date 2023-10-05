#include QMK_KEYBOARD_H

#define _______ KC_TRNS

enum bigbang_layers
{
    _COLEMAK = 0,
    _LOWER,
    _UPPER,
    _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT(
        // left hand
        KC_ESC,         KC_GRV,     KC_1,       KC_2,       KC_3,       KC_4,           KC_5,
        HYPR(KC_1),     KC_TAB,     KC_Q,       KC_W,       KC_F,       KC_P,           KC_B,
        HYPR(KC_2),     KC_LCTL,    KC_A,       KC_R,       KC_S,       KC_T,           KC_G,
        HYPR(KC_3),     KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_D,           KC_V,
                                                KC_LOPT,    KC_LCTL,    KC_DELETE,      KC_SPACE,   KC_LSFT,
                                                                                        KC_LGUI,    MO(_LOWER),
        // right hand
                        KC_6,           KC_7,       KC_8,       KC_9,       KC_0,       KC_MINS,        KC_EQL,
                        KC_J,           KC_L,       KC_U,       KC_Y,       KC_SCLN,    KC_LBRC,        KC_RBRC,
                        KC_M,           KC_N,       KC_E,       KC_I,       KC_O,       KC_QUOT,        KC_SLASH,
                        KC_K,           KC_H,       KC_COMM,    KC_DOT,     KC_SLSH,    KC_RSFT,      KC_ENT,
        KC_RSFT,        KC_SPACE,       KC_BSPC,  KC_RCTL,   KC_RALT,
        MO(_UPPER),     KC_RGUI
    ),

    [_LOWER] = LAYOUT(
        // left hand
        _______,    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
        _______,    _______,    KC_1,       KC_2,       KC_3,       KC_4,       KC_5,
        _______,    _______,    KC_PIPE,    KC_LCBR,    KC_LBRC,    KC_LPRN,    KC_PGUP,
        _______,    _______,    XXXXXXX,    XXXXXXX,    KC_UNDS,    KC_MINUS,   KC_PGDN,
                                            _______,    _______,    _______,    KC_ENT,     _______,
                                                                                _______,    _______,
        // right hand
                        KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
                        KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       XXXXXXX,    XXXXXXX,
                        KC_HOME,    KC_RPRN,    KC_RBRC,    KC_RCBR,    KC_BSLS,    XXXXXXX,    XXXXXXX,
                        KC_END,     KC_EQUAL,    KC_PLUS,    XXXXXXX,    XXXXXXX,    _______,    _______,
        _______,        KC_ENT,     _______,    _______,    _______,
        MO(_ADJUST),    _______
    ),

    [_UPPER] = LAYOUT(
        // left hand
        _______,    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
        _______,    _______,    KC_EXLM,    KC_AT,      KC_HASH,    KC_DLR,     KC_PERC,
        _______,    _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        _______,    _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                            _______,    _______,    _______,    KC_ENT,     _______,
                                                                                _______,    MO(_ADJUST),
        // right hand
                    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
                    KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,    XXXXXXX,    XXXXXXX,
                    XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,    XXXXXXX,
                    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    _______,    _______,
        _______,    KC_ENT,     _______,    _______,    _______,
        _______,    _______
    ),

    [_ADJUST] = LAYOUT(
        // left hand
        _______,    _______,    KC_F1,      KC_F2,      KC_F3,      KC_F4,      KC_F5,
        _______,    _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        _______,    _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
        _______,    _______,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,    XXXXXXX,
                                            _______,    _______,    _______,    KC_ENT,     _______,
                                                                                _______,    _______,
        // right hand
                    KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
                    XXXXXXX,    KC_MUTE,    KC_VOLD,    KC_VOLU,    XXXXXXX,    KC_PSCR,    XXXXXXX,
                    XXXXXXX,    KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   XXXXXXX,    XXXXXXX,
                    XXXXXXX,    KC_MPRV,    KC_MSTP,    KC_MPLY,    KC_MNXT,    _______,    _______,
        _______,    KC_ENT,     _______,    _______,    _______,
        _______,    _______
    ),
};
