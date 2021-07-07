#pragma once

#include "keymap_swedish.h"
enum layers {
    _QW,
    _CM,
    _NW,
    _SL,
    _SR,
    _NM,
    _NV,
    _L3,
    _L4,
    _AD,
};

enum keycodes {
    CU_CAPS = SAFE_RANGE,
    CU_LEAD,
    CU_CIRC,
    CU_GRV,
    CU_TILD,

    // callum style one shot mods
    CM_LSFT,
    CM_LCTL,
    CM_LALT,
    CM_LGUI,
    CM_RSFT,
    CM_RCTL,
    CM_RALT,
    CM_RGUI,

    KEYMAP_SAFE_RANGE,
};

#define CT_ESC LCTL_T(KC_ESC)
#define CT_ADIA RCTL_T(SE_ADIA)

#define NM_TAB LT(_NM, KC_TAB)
#define NV_ENT LT(_NV, KC_ENT)


#define _____________________QWERTY__L0_____________________   KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define _____________________QWERTY__L1_____________________   KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T 
#define _____________________QWERTY__L2_____________________   CT_ESC,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G
#define _____________________QWERTY__L3_____________________  KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B

#define _____________________QWERTY__R0_____________________     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS
#define _____________________QWERTY__R1_____________________     KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,SE_ARNG
#define _____________________QWERTY__R2_____________________     KC_H,   KC_J,   KC_K,   KC_L,SE_ODIA,SE_ADIA
#define _____________________QWERTY__R3_____________________     KC_N,   KC_M,KC_COMM, KC_DOT,SE_SLSH,KC_RSFT

#define _____________________ADNWSE__L0_____________________   KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define _____________________ADNWSE__L1_____________________   KC_TAB,   KC_C,   KC_F,   KC_O,   KC_U,SE_ODIA 
#define _____________________ADNWSE__L2_____________________   CT_ESC,   KC_D,   KC_S,   KC_A,   KC_I,   KC_Y
#define _____________________ADNWSE__L3_____________________  KC_LSFT,   KC_V,   KC_X,   KC_Q,SE_ADIA,SE_ARNG

#define _____________________ADNWSE__R0_____________________     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS
#define _____________________ADNWSE__R1_____________________     KC_J,   KC_M,   KC_L,   KC_P,   KC_B,KC_BSPC
#define _____________________ADNWSE__R2_____________________     KC_G,   KC_T,   KC_R,   KC_N,   KC_H,KC_RCTL
#define _____________________ADNWSE__R3_____________________     KC_Z,   KC_W,KC_COMM, KC_DOT,   KC_K,KC_RSFT

#define _____________________ADNWSE2_L0_____________________   KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define _____________________ADNWSE2_L1_____________________   KC_TAB,   KC_J,   KC_P,   KC_U,SE_ADIA,SE_ARNG
#define _____________________ADNWSE2_L2_____________________   CT_ESC,   KC_D,   KC_T,   KC_I,   KC_A,   KC_O
#define _____________________ADNWSE2_L3_____________________  KC_LSFT,   KC_K,   KC_B,   KC_Y,SE_ODIA,   KC_Q

#define _____________________ADNWSE2_R0_____________________     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS
#define _____________________ADNWSE2_R1_____________________     KC_F,   KC_C,   KC_L,   KC_H,   KC_W,KC_BSPC
#define _____________________ADNWSE2_R2_____________________     KC_G,   KC_S,   KC_R,   KC_N,   KC_M,KC_RCTL
#define _____________________ADNWSE2_R3_____________________     KC_Z,   KC_X,KC_COMM, KC_DOT,   KC_V,KC_RSFT

#define _________________COLEMAK_MOD_DH_L0__________________   KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define _________________COLEMAK_MOD_DH_L1__________________   KC_TAB,   KC_Q,   KC_W,   KC_F,   KC_P,   KC_B 
#define _________________COLEMAK_MOD_DH_L2__________________   CT_ESC,   KC_A,   KC_R,   KC_S,   KC_T,   KC_G
#define _________________COLEMAK_MOD_DH_L3__________________  KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_D,   KC_V

#define _________________COLEMAK_MOD_DH_R0__________________     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS
#define _________________COLEMAK_MOD_DH_R1__________________     KC_J,   KC_L,   KC_U,   KC_Y,KC_SCLN, KC_EQL
#define _________________COLEMAK_MOD_DH_R2__________________     KC_M,   KC_N,   KC_E,   KC_I,   KC_O,KC_QUOT
#define _________________COLEMAK_MOD_DH_R3__________________     KC_K,   KC_H,KC_COMM, KC_DOT,KC_SLSH,KC_RSFT

#define ______________________SYML__L0______________________  _______,_______,_______,_______,_______,_______
#define ______________________SYML__L1______________________  _______,  KC_NO,SE_UNDS,SE_LBRC,SE_RBRC,CU_CIRC
#define ______________________SYML__L2______________________  _______,SE_BSLS,SE_SLSH,SE_LCBR,SE_RCBR,SE_ASTR
#define ______________________SYML__L3______________________  _______,SE_HASH, SE_DLR,SE_PIPE,CU_TILD, CU_GRV

#define ______________________SYML__R0______________________  _______,_______,_______,_______,_______,_______
#define ______________________SYML__R1______________________  _______,_______,_______,_______,_______,_______
#define ______________________SYML__R2______________________  _______,CM_RSFT,CM_RCTL,CM_RALT,CM_RGUI,_______
#define ______________________SYML__R3______________________  _______,_______,_______,_______,_______,_______

#define ______________________SYMR__L0______________________  _______,_______,_______,_______,_______,_______
#define ______________________SYMR__L1______________________  _______,_______,_______,_______,_______,_______
#define ______________________SYMR__L2______________________  _______,CM_LGUI,CM_LALT,CM_LCTL,CM_LSFT,_______
#define ______________________SYMR__L3______________________  _______,_______,_______,_______,_______,_______

#define ______________________SYMR__R0______________________  _______,_______,_______,_______,_______,_______
#define ______________________SYMR__R1______________________  SE_EXLM,SE_LABK,SE_RABK, SE_EQL,SE_AMPR,_______
#define ______________________SYMR__R2______________________  SE_QUES,SE_LPRN,SE_RPRN,SE_MINS,SE_COLN,  SE_AT
#define ______________________SYMR__R3______________________  SE_PLUS,SE_PERC,SE_DQUO,SE_QUOT,SE_SCLN,_______

#define _______________________NAV_L0_______________________  _______,_______,_______,_______,_______,_______
#define _______________________NAV_L1_______________________  _______,KC_PGUP,KC_BSPC,  KC_UP, KC_DEL,KC_PGDN
#define _______________________NAV_L2_______________________  _______,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT, KC_END
#define _______________________NAV_L3_______________________  _______, KC_ESC, KC_TAB, KC_INS, KC_ENT,_______

#define _______________________NAV_R0_______________________  _______,_______,_______,_______,_______,_______
#define _______________________NAV_R1_______________________  _______,_______,_______,_______,_______,_______
#define _______________________NAV_R2_______________________  _______,CM_RSFT,CM_RCTL,CM_RALT,CM_RGUI,_______
#define _______________________NAV_R3_______________________  _______,_______,_______,_______,_______,_______

#define _______________________NUM_L0_______________________  _______,_______,_______,_______,_______,_______
#define _______________________NUM_L1_______________________  _______,_______,_______,_______,_______,_______
#define _______________________NUM_L2_______________________  _______,CM_LGUI,CM_LALT,CM_LCTL,CM_LSFT,_______
#define _______________________NUM_L3_______________________  _______,_______,_______,_______,_______,_______

#define _______________________NUM_R0_______________________  _______,_______,_______,_______,_______,_______
#define _______________________NUM_R1_______________________    KC_NO,   KC_7,   KC_8,   KC_9,SE_PLUS,SE_MINS
#define _______________________NUM_R2_______________________    KC_NO,   KC_4,   KC_5,   KC_6,SE_COMM,SE_DOT
#define _______________________NUM_R3_______________________  SE_COLN,   KC_1,   KC_2,   KC_3,SE_SCLN,_______

#define _____________________ADJUST__L0_____________________   KC_F11,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5
#define _____________________ADJUST__L1_____________________   KC_F11,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5
#define _____________________ADJUST__L2_____________________  _______,CM_LGUI,CM_LALT,CM_LCTL,CM_LSFT,_______
#define _____________________ADJUST__L3_____________________  _______,_______,_______,_______,_______,  RESET

#define _____________________ADJUST__R0_____________________    KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F12
#define _____________________ADJUST__R1_____________________    KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F12
#define _____________________ADJUST__R2_____________________  _______,CM_RSFT,CM_RCTL,CM_RALT,CM_RGUI,_______
#define _____________________ADJUST__R3_____________________  _______,_______,_______,_______,_______,_______
