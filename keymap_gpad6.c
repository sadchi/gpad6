#include "keymap_common.h"

/*
 * Hasu
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    KEYMAP_GPAD(
         ESC, 1,   2,   3,     4,    5,   \
         Q,   W,   E,   R,     T,    \
         TAB  ,    Z,   A,     S,    D,   F,   G, \
         LALT ,    X,   SPC,   BSPC, \
         B,   N,   M,   LCTL),
};

/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {};

