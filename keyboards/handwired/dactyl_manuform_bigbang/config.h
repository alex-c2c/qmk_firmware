/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once


//#define VENDOR_ID 		0xFEED
//#define PRODUCT_ID 		0x0001
//#define DEVICE_VER 		0x0001
//#define MANUFACTURER 	COKE2CODE
//#define PRODUCT 		Dactyl-Manuform (5x7) Custom Keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS { B5, B4, E6, D7, C6, D4 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Enables This makes it easier for fast typists to use dual-function keys */
#define PERMISSIVE_HOLD

#define MASTER_LEFT
//#define MASTER_RIGHT
