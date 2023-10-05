#pragma once

#include "quantum.h"

#define XXX KC_NO

#define LAYOUT( \
     L00, L01, L02, L03, L04, L05, L06, \
     L10, L11, L12, L13, L14, L15, L16, \
     L20, L21, L22, L23, L24, L25, L26, \
     L30, L31, L32, L33, L34, L35, L36 \
) { \
     { L00, L01, L02, L03, L04, L05, L06 }, \
     { L10, L11, L12, L13, L14, L15, L16 }, \
     { L20, L21, L22, L23, L24, L25, L26 }, \
     { L30, L31, L32, L33, L34, L35, L36 } \
}
