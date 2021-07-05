#include QMK_KEYBOARD_H

#include "dnaq.h"

#define LAYOUT_wrapped(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QW] = LAYOUT_wrapped(
     _____________________QWERTY__L1_____________________,                                    _____________________QWERTY__R1_____________________,
     _____________________QWERTY__L2_____________________,                                    _____________________QWERTY__R2_____________________,
     _____________________QWERTY__L3_____________________, KC_BSPC,  KC_LGUI, KC_RGUI, KC_SPC, _____________________QWERTY__R3_____________________,
                                TG(_NW), MO(_NM), MO(_SR), KC_BSPC,  KC_TAB,  KC_ENT,  KC_SPC, MO(_SL), MO(_NV), CU_LEAD
  ),
  [_SL] = LAYOUT_wrapped(
     ______________________SYML__L1______________________,                                   ______________________SYML__R1______________________,
     ______________________SYML__L2______________________,                                   ______________________SYML__R2______________________,
     ______________________SYML__L3______________________, _______,_______,_______,_______,  ______________________SYML__R3______________________,
                                _______, _______, _______, _______,_______,_______,_______, _______, _______, _______
  ),
  [_SR] = LAYOUT_wrapped(
     ______________________SYMR__L1______________________,                                   ______________________SYMR__R1______________________,
     ______________________SYMR__L2______________________,                                   ______________________SYMR__R2______________________,
     ______________________SYMR__L3______________________, _______,_______,_______,_______,  ______________________SYMR__R3______________________,
                                _______, _______, _______, _______,_______,_______,_______, _______, _______, _______
  ),
  [_NV] = LAYOUT_wrapped(
     _______________________NAV_L1_______________________,                                   _______________________NAV_R1_______________________,
     _______________________NAV_L2_______________________,                                   _______________________NAV_R2_______________________,
     _______________________NAV_L3_______________________, _______,_______,_______,_______,  _______________________NAV_R3_______________________,
                                _______, _______, _______, _______,_______,_______,_______, _______, _______, _______
  ),
  [_NM] = LAYOUT_wrapped(
     _______________________NUM_L1_______________________,                                   _______________________NUM_R1_______________________,
     _______________________NUM_L2_______________________,                                   _______________________NUM_R2_______________________,
     _______________________NUM_L3_______________________, _______,_______,_______,   KC_0,  _______________________NUM_R3_______________________,
                                _______, _______, _______, _______,_______,_______,   KC_0, _______, _______, _______
  ),
#if 0
  [_NW] = LAYOUT_wrapped(
     _____________________ADNWSE2_L1_____________________,                                   _____________________ADNWSE2_R1_____________________,
     _____________________ADNWSE2_L2_____________________,                                   _____________________ADNWSE2_R2_____________________,
     _____________________ADNWSE2_L3_____________________,    KC_E, KC_TAB, KC_ENT,  KC_SPC, _____________________ADNWSE2_R3_____________________,
                                TG(_NW), KC_LGUI, KC_BSPC, KC_TAB,  MO(_L3), MO(_L3),  KC_SPC, KC_ENT, KC_LALT, CU_LEAD
  ),
  [_L3] = LAYOUT_wrapped(
     _____________________NEO2_L3_L1_____________________,                                     _____________________NEO2_L3_R1_____________________,
     _____________________NEO2_L3_L2_____________________,                                     _____________________NEO2_L3_R2_____________________,
     _____________________NEO2_L3_L3_____________________, _______, _______, _______, _______, _____________________NEO2_L3_R3_____________________,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
  [_L4] = LAYOUT_wrapped(
     _____________________NEO2_L4_L1_____________________,                                     _____________________NEO2_L4_R1_____________________,
     _____________________NEO2_L4_L2_____________________,                                     _____________________NEO2_L4_R2_____________________,
     _____________________NEO2_L4_L3_____________________, _______, _______, _______, _______, _____________________NEO2_L4_R3_____________________,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
  ),
#endif
    [_AD] = LAYOUT_wrapped(
     _____________________ADJUST__L1_____________________,                                     _____________________ADJUST__R1_____________________,
     _____________________ADJUST__L2_____________________,                                     _____________________ADJUST__R2_____________________,
     _____________________ADJUST__L3_____________________, _______, _______, _______, _______, _____________________ADJUST__R3_____________________,
                                _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),
// /*
//  * Layer template
//  *
//  * ,-------------------------------------------.                              ,-------------------------------------------.
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------|                              |------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |                              |      |      |      |      |      |        |
//  * |--------+------+------+------+------+------+-------------.  ,-------------+------+------+------+------+------+--------|
//  * |        |      |      |      |      |      |      |      |  |      |      |      |      |      |      |      |        |
//  * `----------------------+------+------+------+------+------|  |------+------+------+------+------+----------------------'
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        |      |      |      |      |      |  |      |      |      |      |      |
//  *                        `----------------------------------'  `----------------------------------'
//  */
//     [_LAYERINDEX] = LAYOUT(
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______,
//       _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
//                                  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
//     ),
};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        // xmonad swap windows
        if (clockwise) {
            register_code(KC_LGUI);
            tap_code(KC_J);
            unregister_code(KC_LGUI);
        } else { register_code(KC_LGUI);
            tap_code(KC_K);
            unregister_code(KC_LGUI);
        }
    } else if (index == 1) {
        // scrollwheel
        register_code(KC_LGUI);
        tap_code(KC_Z);
        unregister_code(KC_LGUI);
        if (clockwise) {
            tap_code(KC_MS_WH_DOWN);
        } else {
            tap_code(KC_MS_WH_UP);
        }
    }
    return true;
}
#endif
