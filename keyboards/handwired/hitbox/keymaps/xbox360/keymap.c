#include QMK_KEYBOARD_H

enum layers {
	_GAME1,
	_FN1,
	_GAME2,
	_FN2,
	_GAME3,
	_FN3
};

#define JOY_MAP_AXIS_LSL 0
#define JOY_MAP_AXIS_LSR 0
#define JOY_MAP_AXIS_LSU 1
#define JOY_MAP_AXIS_LSD 1

#define JOY_MAP_AXIS_RSL 3
#define JOY_MAP_AXIS_RSR 3
#define JOY_MAP_AXIS_RSU 4
#define JOY_MAP_AXIS_RSD 4

#define JOY_MAP_AXIS_LT 2
#define JOY_MAP_AXIS_RT 5

#define AXIS_NEUTRAL 0
#define AXIS_FULL 127

#define JOY_MAP_BTN_A 0
#define JOY_MAP_BTN_B 1
#define JOY_MAP_BTN_X 2
#define JOY_MAP_BTN_Y 3

#define JOY_MAP_BTN_LB 4
#define JOY_MAP_BTN_RB 5

#define JOY_MAP_BTN_LS 8
#define JOY_MAP_BTN_RS 9

#define JOY_MAP_BTN_START 6
#define JOY_MAP_BTN_SELECT 7
#define JOY_MAP_BTN_HOME 12

// Joystick Config
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
	JOYSTICK_AXIS_VIRTUAL,
};

enum custom_keycodes {
	GC_LSU = SAFE_RANGE,
	GC_LSD,
	GC_LSL,
	GC_LSR,
	GC_RSU,
	GC_RSD,
	GC_RSL,
	GC_RSR,
	GC_DPU,
	GC_DPD,
	GC_DPL,
	GC_DPR,
	GC_BTX,
	GC_BTY,
	GC_BTA,
	GC_BTB,
	GC_LB,
	GC_LT,
	GC_LS,
	GC_RB,
	GC_RT,
	GC_RS,
	GC_STA,
	GC_SEL,
	GC_HOM
};

// #define GAME2   TG(_GAME2)
// #define GAME3   TG(_GAME3)
// #define FN1		MO(_FN1)
// #define FN2		MO(_FN2)
// #define FN3		MO(_FN3)

/*
* |------+------+------+------+------+------+------|
* |      |      |      | HOME |  SEL | STA  | XXXX |
* |------+------+------+------+------+------+------|
* |      |      |      |  LS  |  RS  | XXXX | XXXX |
* |------+------+------+------+------|------+------|
* | Left | Down | Right|   X  |  Y   |  LB  |  LT  |
* |------+------+------+------+------|------+------|
* |      |      |  Up  |   A |   B   |  RB  |  RT  |
* |------|------|------|------|------|------|------|
*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_GAME1] = LAYOUT(
           KC_NO,   KC_NO,      KC_NO,      GC_HOM,     GC_SEL,     GC_STA,     KC_NO,
           KC_NO,   KC_NO,      KC_NO,      GC_LS,      GC_RS,      KC_NO,      KC_NO,
           GC_LSL,  GC_LSD,     GC_LSR,     GC_BTX,     GC_BTY,     GC_LB,      GC_LT,
           KC_NO,   KC_NO,      GC_LSU,     GC_BTA,     GC_BTB,     GC_RB,      GC_RT
    )
};

bool LSU_STATE = false;
bool LSD_STATE = false;
bool LSL_STATE = false;
bool LSR_STATE = false;
bool RSU_STATE = false;
bool RSD_STATE = false;
bool RSL_STATE = false;
bool RSR_STATE = false;
bool DPU_STATE = false;
bool DPD_STATE = false;
bool DPL_STATE = false;
bool DPR_STATE = false;

void trigger_joystick_button(bool pressed, uint16_t joy_map)
{
    if (pressed)
    {
        register_joystick_button(joy_map);
    }
    else
    {
        unregister_joystick_button(joy_map);
    }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
        case GC_LSU:
			if (record->event.pressed) {
				LSU_STATE = true;
				joystick_set_axis(JOY_MAP_AXIS_LSU, -AXIS_FULL);
			} else {
				LSU_STATE = false;
				if (LSD_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_LSU, AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_LSU, AXIS_NEUTRAL);
				}
			}
			return false;
		case GC_LSD:
			if (record->event.pressed) {
				LSD_STATE = true;
				if (!LSU_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_LSD, AXIS_FULL);
				}
			} else {
				LSD_STATE = false;
				if (!LSU_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_LSD, AXIS_NEUTRAL);
				}
			}
			return false;
		case GC_LSL:
			if (record->event.pressed) {
				LSL_STATE = true;
				joystick_set_axis(JOY_MAP_AXIS_LSL, -AXIS_FULL);
			} else {
				LSL_STATE = false;
				if (LSR_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_LSL, AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_LSL, AXIS_NEUTRAL);
				}
			}
			return false;
		case GC_LSR:
			if (record->event.pressed) {
				LSR_STATE = true;
				joystick_set_axis(JOY_MAP_AXIS_LSR, AXIS_FULL);
			} else {
				LSR_STATE = false;
				if (LSL_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_LSR, -AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_LSR, AXIS_NEUTRAL);
				}
			}
			return false;
        case GC_RSU:
			if (record->event.pressed) {
				RSU_STATE = true;
				joystick_set_axis(JOY_MAP_AXIS_RSU, -AXIS_FULL);
			} else {
				RSU_STATE = false;
				if (RSD_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_RSU, AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_RSU, AXIS_NEUTRAL);
				}
			}
			return false;
		case GC_RSD:
			if (record->event.pressed) {
				RSD_STATE = true;
				if (!RSU_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_RSD, AXIS_FULL);
				}
			} else {
				RSD_STATE = false;
				if (RSU_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_RSD, -AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_RSD, AXIS_NEUTRAL);
				}
			}
			return false;
		case GC_RSL:
			if (record->event.pressed) {
				RSL_STATE = true;
				joystick_set_axis(JOY_MAP_AXIS_RSL, -AXIS_FULL);
			} else {
				RSL_STATE = false;
				if (RSR_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_RSL, AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_RSL, AXIS_NEUTRAL);
				}
			}
			return false;
		case GC_RSR:
			if (record->event.pressed) {
				RSR_STATE = true;
				joystick_set_axis(JOY_MAP_AXIS_RSR, AXIS_FULL);
			} else {
				RSR_STATE = false;
				if (RSL_STATE) {
					joystick_set_axis(JOY_MAP_AXIS_RSR, -AXIS_FULL);
				} else {
					joystick_set_axis(JOY_MAP_AXIS_RSR, AXIS_NEUTRAL);
				}
			}
			return false;
        case GC_LT:
            joystick_set_axis(JOY_MAP_AXIS_LT, record->event.pressed ?  AXIS_FULL : -AXIS_FULL);
			return false;
        case GC_RT:
            joystick_set_axis(JOY_MAP_AXIS_RT, record->event.pressed ? AXIS_FULL : -AXIS_FULL);
			return false;
		case GC_DPU:
			if (record->event.pressed) {
				DPU_STATE = true;
				if (DPD_STATE) {
					unregister_joystick_button(16);
				}
				register_joystick_button(18);
			} else {
				DPU_STATE = false;
				unregister_joystick_button(18);
			}
			return false;
		case GC_DPD:
			if (record->event.pressed) {
				DPD_STATE = true;
				if (!DPU_STATE) {
					register_joystick_button(16);
				}
			} else {
				DPD_STATE = false;
				unregister_joystick_button(16);
			}
			return false;
		case GC_DPL:
			if (record->event.pressed) {
				DPL_STATE = true;
				if (DPR_STATE) {
					unregister_joystick_button(17);
				} else {
					register_joystick_button(15);
				}
			} else {
				DPL_STATE = false;
				unregister_joystick_button(15);
				if (DPR_STATE) {
					register_joystick_button(17);
				}
			}
			return false;
		case GC_DPR:
			if (record->event.pressed) {
				DPR_STATE = true;
				if (DPL_STATE) {
					unregister_joystick_button(15);
				} else {
					register_joystick_button(17);
				}
			} else {
				DPR_STATE = false;
				unregister_joystick_button(17);
				if (DPL_STATE) {
					register_joystick_button(15);
				}
			}
			return false;
		case GC_BTX:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_X);
			return false;
		case GC_BTA:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_A);
			return false;
		case GC_BTB:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_B);
			return false;
		case GC_BTY:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_Y);
			return false;
		case GC_LB:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_LB);
			return false;
		case GC_RB:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_RB);
			return false;
		case GC_SEL:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_SELECT);
			return false;
		case GC_STA:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_START);
			return false;
		case GC_LS:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_LS);
			return false;
		case GC_RS:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_RS);
			return false;
		case GC_HOM:
            trigger_joystick_button(record->event.pressed, JOY_MAP_BTN_HOME);
			return false;
		default:
			return true;
	}
};


