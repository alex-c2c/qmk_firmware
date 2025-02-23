#pragma once

#include "quantum.h"

#define LAYOUT(\
    K101, K102, K103, K104, K105, K106, K107, K108, K109, K110, K111, K112, K113, K114, K115, K116, K117, K118, K119, K120, K121, K122,\
    K201, K202, K203, K204, K205, K206, K207, K208, K209, K210, K211, K212, K213, K214, K215, K216, K217, K218, K219, K220, K221, K222,\
    K301, K302, K303, K304, K305, K306, K307, K308, K309, K310, K311, K312, K313, K314, K315, K316, K317, K318, K319, K320, K321, K322,\
    K401, K402, K403, K404, K405, K406, K407, K408, K409, K410, K411, K412, K413, K414, K415, K416, K417, K418, K419, K420, K421, K422,\
    K501, K502, K503, K504, K505, K506, K507, K508, K509, K510, K511, K512, K513, K514, K515, K516, K517, K518, K519, K520, K521, K522,\
    K601, K602, K603, K604, K605, K606, K607, K608, K609, K610, K611, K612, K613, K614, K615, K616, K617, K618, K619, K620, K621, K622,\
    K701, K702, K703, K704, K705, K706, K707, K708, K709, K710, K711, K712, K713, K714, K715, K716, K717, K718, K719, K720, K721, K722\
    ) {\
        {K101,      K102,   K103,   K104,   K105,   KC_NO,    K107,   K108,     K109,   K110,   K111,   K112,   K113,   K114,   K115,   K116,   K117,   K118,   K119,   K120,   K121,   KC_NO},\
        {K201,      K202,   K203,   K204,   K205,   KC_NO,    K207,   K208,     K209,   K210,   K211,   K212,   K213,   K214,   K215,   K216,   K217,   K218,   KC_NO,  KC_NO,  KC_NO,  KC_NO},\
        {K301,      K302,   K303,   K304,   K305,   K306,     K307,   K308,     K309,   K310,   K311,   K312,   K313,   K314,   K315,   K316,   K317,   K318,   K319,   K320,   K321,   K322},\
        {K401,      K402,   K403,   K404,   K405,   K406,     K407,   K408,     K409,   K410,   K411,   K412,   K413,   K414,   K415,   K416,   K417,   K418,   K419,   K420,   K421,   K422},\
        {K501,      K502,   K503,   KC_NO,  K505,   K506,     K507,   K508,     K509,   K510,   K511,   K512,   K513,   K514,   K515,   K516,   KC_NO,  K518,   KC_NO,  KC_NO,  KC_NO,  K522},\
        {K601,      K602,   K603,   K604,   K605,   K606,     K607,   K608,     K609,   K610,   K611,   K612,   K613,   K614,   K615,   KC_NO,  KC_NO,  K618,   KC_NO,  K620,   KC_NO,  K622},\
        {KC_NO,     K702,   K703,   KC_NO,  K705,   K706,     KC_NO,  K708,     KC_NO,  KC_NO,  K711,   KC_NO,  K713,   KC_NO,  K715,   KC_NO,  KC_NO,  K718,   K719,   K720,   K721,   K722}\
     }
