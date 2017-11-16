#ifndef KEYMAP_COMMON_H
#define KEYMAP_COMMON_H

#include <stdint.h>
#include <stdbool.h>
#include "keycode.h"
#include "action.h"
#include "action_macro.h"
#include "report.h"
#include "host.h"
#include "print.h"
#include "debug.h"
#include "keymap.h"


#define KEYMAP_GPAD( \
    K00,      K02, K03, K04, K05, K06, \
              K12, K13, K14, K15, K16, \
    K20, K21, K22, K23, K24, K25, K26, \
    K30, K31,                K35, K36, \
                   K43, K44, K45, K46  \
) { \
    { KC_##K00, KC_NO,    KC_##K02, KC_##K03, KC_##K04, KC_##K05, KC_##K06}, \
    { KC_NO,    KC_NO,    KC_##K12, KC_##K13, KC_##K14, KC_##K15, KC_##K16}, \
    { KC_##K20, KC_##K21, KC_##K22, KC_##K23, KC_##K24, KC_##K25, KC_##K26}, \
    { KC_##K30, KC_##K31, KC_NO,    KC_NO,    KC_NO,    KC_##K35, KC_##K36}, \
    { KC_NO,    KC_NO,    KC_NO,    KC_##K43, KC_##K44, KC_##K45, KC_##K46}  \
}

#endif

