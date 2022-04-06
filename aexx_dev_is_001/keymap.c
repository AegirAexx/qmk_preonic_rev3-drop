#include QMK_KEYBOARD_H
#include "muse.h"
#include "keymap_icelandic.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Qwerty
    * ,-----------------------------------------------------------------------------------.
    * |   @  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |  Ö   |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  |  Ð   |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Bksp |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   Æ  |  ´   |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   Þ  |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |  Os  | Alt  |Enter | Mod  |    Space    | Mod  |Enter | Esc  | Left |Right |
    * `-----------------------------------------------------------------------------------'
    */
	[0] = LAYOUT_preonic_1x2uC(
        IS_AT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, IS_ODIA,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, IS_ETH,
        KC_BSPC, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, IS_AE, IS_ACUT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, IS_THRN, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_LALT, KC_ENT, MO(1), KC_SPC, MO(2), KC_ENT, KC_ESC, KC_LEFT, KC_RGHT
    ),
    /* Mod Left
    * ,-----------------------------------------------------------------------------------.
    * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  |  F12 |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Tab  |   !  |   @  |   #  |   $  |   [  |   ]  |   ^  |   /  |   \  |   |  | PrSc |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Del  |   +  |   -  |   _  |   =  |   {  |   }  |   "  |   '  |   `  |   ?  |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   %  |   ~  |   &  |   *  |   (  |   )  |   <  |   ;  |  :   |   >  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |  Os  | Alt  |      |      |    Space    | Mod  | UNDO | CUT  | COPY | PASTE|
    * `-----------------------------------------------------------------------------------'
    */
	[1] = LAYOUT_preonic_1x2uC(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TAB, IS_EXLM, IS_AT, IS_HASH, IS_DLR, IS_LBRC, IS_RBRC, IS_CIRC, IS_SLSH, IS_BSLS, IS_PIPE, KC_PSCR,
        KC_DEL, IS_PLUS, IS_MINS, IS_UNDS, IS_EQL, IS_LCBR, IS_RCBR, IS_DQUO, IS_QUOT, IS_GRV, IS_QUES, KC_NO,
        KC_LSFT, IS_PERC, IS_TILD, IS_AMPR, IS_ASTR, IS_LPRN, IS_RPRN, IS_LABK, IS_SCLN, IS_COLN, IS_RABK, KC_NO,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO, KC_TRNS, KC_SPC, MO(3), KC_UNDO, KC_CUT, KC_COPY, KC_PSTE
    ),
    /* Mod Right
    * ,-----------------------------------------------------------------------------------.
    * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  | F10  | F11  |  F12 |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Tab  |   !  |   @  |   #  |   $  |   [  |   ]  |   ^  |   /  |   \  |   |  | PrSc |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Del  |   +  |   -  |   _  |   =  |   {  |   }  |   "  |   '  |   `  |   ?  |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   %  |   ~  |   &  |   *  |   (  |   )  |   <  |   ;  |  :   |   >  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |  Os  | Alt  |      | Mod  |    Space    |      | UNDO | CUT  | COPY | PASTE|
    * `-----------------------------------------------------------------------------------'
    */
	[2] = LAYOUT_preonic_1x2uC(
        KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
        KC_TAB, IS_EXLM, IS_AT, IS_HASH, IS_DLR, IS_LBRC, IS_RBRC, IS_CIRC, IS_SLSH, IS_BSLS, IS_PIPE, KC_PSCR,
        KC_DEL, IS_PLUS, IS_MINS, IS_UNDS, IS_EQL, IS_LCBR, IS_RCBR, IS_DQUO, IS_QUOT, IS_GRV, IS_QUES, KC_NO,
        KC_LSFT, IS_PERC, IS_TILD, IS_AMPR, IS_ASTR, IS_LPRN, IS_RPRN, IS_LABK, IS_SCLN, IS_COLN, IS_RABK, KC_NO,
        KC_LCTL, KC_LGUI, KC_LALT, KC_NO, MO(3), KC_SPC, KC_TRNS, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE
    ),
    /* Adjust (Mod Left + Mod Right)
    * ,-----------------------------------------------------------------------------------.
    * |Mus on|MusOff|Voice+|Voice-|      |Aud on|AudOff|Aud cy|      |      | Reset| Debug|
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |Bri - |Bri + |      |      |      |      |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      | Home | PgDn | PgUp | End  |Vol - |Vol + | Left | Down |  Up  | Right|      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|  1   |  2   |  3   |  4   |  5   |  6   |  7   |  8   |  9   |  0   |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl |  Os  |      |      |      |    Space    |      |      |      | BL Cy| BL To|
    * `-----------------------------------------------------------------------------------'
    */
	[3] = LAYOUT_preonic_1x2uC(
        MU_ON, MU_OFF, MUV_IN, MUV_DE, KC_NO, AU_ON, AU_OFF, MU_MOD, KC_NO, KC_NO, RESET, DEBUG,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BRID, KC_BRIU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_VOLD, KC_VOLU, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO,
        KC_LSFT, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_NO, KC_NO, KC_TRNS, KC_SPC, KC_TRNS, KC_NO, KC_NO, BL_STEP, BL_TOGG
    )
};

