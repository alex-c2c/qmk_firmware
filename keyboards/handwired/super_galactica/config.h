#pragma once

#include "config_common.h"

#define VENDOR_ID 		0xFEED
#define PRODUCT_ID 		0x0001
#define DEVICE_VER 		0x0001
#define MANUFACTURER 	COKE2CODE
#define PRODUCT 		Super Galactica Custom Keyboard

#define MATRIX_ROWS 7
#define MATRIX_COLS 22

#define MATRIX_COL_PINS { C0, C1, C2, C3, C4, C5, C6, C7, B6, B5, B4, B3, B2, B1, B0, E7, E6, F0, F1, F2, F3, F4 }
#define MATRIX_ROW_PINS { D2, D3, D4, D5, D7, E0, E1 }
#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define DEBOUNCE 5

#ifdef HAPTIC_ENABLE
    #define SOLENOID_PIN B7
    #define SOLENOID_DEFAULT_DWELL 12
    #define SOLENOID_MIN_DWELL 12
    #define NO_HAPTIC_MOD
    #define NO_HAPTIC_FN
    #define NO_HAPTIC_LOCKKEYS
#endif

#ifdef OLED_ENABLE
    #define OLED_DISPLAY_128X64
    #define OLED_IC OLED_IC_SH1106
    #define OLED_DISPLAY_ADDRESS 0x3C
    //#define OLED_COM_PINS 0x12
    #define OLED_COLUMN_OFFSET 2
#endif


