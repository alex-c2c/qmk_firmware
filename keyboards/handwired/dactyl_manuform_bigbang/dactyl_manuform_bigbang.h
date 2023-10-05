#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
    L11, L12, L13, L14, L15, L16, L17, \
    L21, L22, L23, L24, L25, L26, L27, \
    L31, L32, L33, L34, L35, L36, L37, \
    L41, L42, L43, L44, L45, L46, L47, \
                   L54, L55, L56, L57, L58, \
                                  L67, L68, \
         R12, R13, R14, R15, R16, R17, R18, \
         R22, R23, R24, R25, R26, R27, R28, \
         R32, R33, R34, R35, R36, R37, R38, \
         R42, R43, R44, R45, R46, R47, R48, \
    R51, R52, R53, R54, R55, \
    R61, R62  \
) { \
    { L11, L12, L13, L14, L15, L16, L17, XXX }, \
    { L21, L22, L23, L24, L25, L26, L27, XXX }, \
    { L31, L32, L33, L34, L35, L36, L37, XXX }, \
    { L41, L42, L43, L44, L45, L46, L47, XXX }, \
    { XXX, XXX, XXX, L54, L55, L56, L57, L58 }, \
    { XXX, XXX, XXX, XXX, XXX, XXX, L67, L68 }, \
    { XXX, R12, R13, R14, R15, R16, R17, R18 }, \
    { XXX, R22, R23, R24, R25, R26, R27, R28 }, \
    { XXX, R32, R33, R34, R35, R36, R37, R38 }, \
    { XXX, R42, R43, R44, R45, R46, R47, R48 }, \
    { R51, R52, R53, R54, R55, XXX, XXX, XXX }, \
    { R61, R62, XXX, XXX, XXX, XXX, XXX, XXX } \
}
