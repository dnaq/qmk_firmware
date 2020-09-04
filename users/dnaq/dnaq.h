#pragma once

#include "keymap_swedish.h"
enum layers {
    _QW,
    _CM,
    _NW,
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
    KEYMAP_SAFE_RANGE,
};

#define OSM_SFT OSM(MOD_LSFT)

#define CT_ESC LCTL_T(KC_ESC)
#define CT_ADIA RCTL_T(SE_ADIA)

#define _____________________QWERTY__L0_____________________   KC_GRV,   KC_1,   KC_2,   KC_3,   KC_4,   KC_5
#define _____________________QWERTY__L1_____________________   KC_TAB,   KC_Q,   KC_W,   KC_E,   KC_R,   KC_T 
#define _____________________QWERTY__L2_____________________   CT_ESC,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G
#define _____________________QWERTY__L3_____________________  KC_LSFT,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B

#define _____________________QWERTY__R0_____________________     KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS
#define _____________________QWERTY__R1_____________________     KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,SE_ARNG
#define _____________________QWERTY__R2_____________________     KC_H,   KC_J,   KC_K,   KC_L,SE_ODIA,CT_ADIA
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

#define _____________________NEO2_L3_L0_____________________  _______,_______,_______,_______,_______,_______
#define _____________________NEO2_L3_L1_____________________  _______,  KC_NO,SE_UNDS,SE_LBRC,SE_RBRC,CU_CIRC
#define _____________________NEO2_L3_L2_____________________  _______,SE_BSLS,SE_SLSH,SE_LCBR,SE_RCBR,SE_ASTR
#define _____________________NEO2_L3_L3_____________________  _______,SE_HASH, SE_DLR,SE_PIPE,CU_TILD, CU_GRV

#define _____________________NEO2_L3_R0_____________________  _______,_______,_______,_______,_______,_______
#define _____________________NEO2_L3_R1_____________________  SE_EXLM,SE_LABK,SE_RABK, SE_EQL,SE_AMPR,_______
#define _____________________NEO2_L3_R2_____________________  SE_QUES,SE_LPRN,SE_RPRN,SE_MINS,SE_COLN,  SE_AT 
#define _____________________NEO2_L3_R3_____________________  SE_PLUS,SE_PERC,SE_DQUO,SE_QUOT,SE_SCLN,_______

#define _____________________NEO2_L4_L0_____________________  _______,_______,_______,_______,_______,_______
#define _____________________NEO2_L4_L1_____________________  _______,KC_PGUP,KC_BSPC,  KC_UP, KC_DEL,KC_PGDN
#define _____________________NEO2_L4_L2_____________________  _______,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT, KC_END
#define _____________________NEO2_L4_L3_____________________  _______, KC_ESC, KC_TAB, KC_INS, KC_ENT,_______

#define _____________________NEO2_L4_R0_____________________  _______,_______,_______,_______,_______,_______
#define _____________________NEO2_L4_R1_____________________   SE_EQL,   KC_7,   KC_8,   KC_9,SE_ASTR,_______
#define _____________________NEO2_L4_R2_____________________  SE_PLUS,   KC_4,   KC_5,   KC_6,   KC_0,_______
#define _____________________NEO2_L4_R3_____________________  SE_MINS,   KC_1,   KC_2,   KC_3,SE_SLSH,_______
