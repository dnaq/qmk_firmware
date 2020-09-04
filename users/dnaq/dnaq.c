#include QMK_KEYBOARD_H
#include "dnaq.h"
#include "leader.h"
#include "sendstring_swedish.h"

void *leader_git_func(uint16_t keycode) {
    switch (keycode) {
        case KC_A:
            SEND_STRING("git add ");
            return NULL;
        case KC_C:
            SEND_STRING("git commit -m \"\"" SS_TAP(X_LEFT));
            return NULL;
        case KC_P:
            SEND_STRING("git push ");
            return NULL;
        case KC_S:
            SEND_STRING("git status\n");
            return NULL;
        case KC_D:
            SEND_STRING("git diff\n");
            return NULL;
        default:
            return NULL;
    }
}

void *leader_start_func(uint16_t keycode) {
    switch (keycode) {
        case CU_LEAD:
            SEND_STRING(SS_TAP(X_SLCK) SS_DELAY(10) SS_TAP(X_SLCK) SS_DELAY(40) SS_TAP(X_ENT));
            return NULL;
        case KC_Q:
            SEND_STRING(SS_TAP(X_SLCK) SS_DELAY(10) SS_TAP(X_SLCK) SS_DELAY(40) "1" SS_DELAY(40) SS_TAP(X_ENT));
            return NULL;
        case KC_W:
            SEND_STRING(SS_TAP(X_SLCK) SS_DELAY(10) SS_TAP(X_SLCK) SS_DELAY(40) "2" SS_DELAY(40) SS_TAP(X_ENT));
            return NULL;
        case KC_E:
            SEND_STRING(SS_TAP(X_SLCK) SS_DELAY(10) SS_TAP(X_SLCK) SS_DELAY(40) "3" SS_DELAY(40) SS_TAP(X_ENT));
            return NULL;
        case KC_R:
            SEND_STRING(SS_TAP(X_SLCK) SS_DELAY(10) SS_TAP(X_SLCK) SS_DELAY(40) "4" SS_DELAY(40) SS_TAP(X_ENT));
            return NULL;
        case KC_G:
            return leader_git_func;
        default:
            return NULL;
    }
}

static bool caps_word_enabled = false;
void caps_word_enable(void) {
    caps_word_enabled = true;
    if (!host_keyboard_led_state().caps_lock) {
        tap_code(KC_CAPS);
    }
}

void caps_word_disable(void) {
    caps_word_enabled = false;
    if (host_keyboard_led_state().caps_lock) {
        tap_code(KC_CAPS);
    }
}

static void process_caps_word(uint16_t keycode, keyrecord_t *record) {
    if (caps_word_enabled) {
        // first strip of the mod taps and layer taps if needed
        switch (keycode) {
            case QK_MOD_TAP ... QK_MOD_TAP_MAX:
            case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
                if (record->tap.count == 0)
                    return;
                keycode = keycode & 0xFF;
        }
        // we end caps word on one of the following keypresses
        switch (keycode & 0xFF) {
            case KC_0:
                if (!(get_mods() && MOD_MASK_SHIFT)) {
                    break;
                }
            case KC_RBRC:
            case KC_ESC:
            case KC_SPC:
            case KC_ENT:
            case KC_TAB:
            case KC_DOT:
            case KC_COMM:
                if (record->event.pressed) {
                    caps_word_disable();
                }
        }
    }
}

__attribute__ ((weak))
bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keymap(keycode, record)) {
        return false;
    }
    if (!process_leader(keycode, record)) {
        return false;
    }
    process_caps_word(keycode, record);

    switch (keycode) {
        case CU_CAPS:
            if (record->event.pressed) {
                caps_word_enable();
            }
            return false;
        case CU_LEAD:
            if (record->event.pressed) {
                start_leading();
                
            }
            return false;
        case CU_GRV:
            if (record->event.pressed) {
                tap_code16(SE_GRV);
                tap_code(KC_SPACE);
            }
            return false;
        case CU_TILD:
            if (record->event.pressed) {
                tap_code16(SE_TILD);
                tap_code(KC_SPACE);
            }
            return false;
        case CU_CIRC:
            if (record->event.pressed) {
                tap_code16(SE_CIRC);
                tap_code(KC_SPACE);
            }
            return false;
        default:
            return true;
    }
}

#ifdef COMBO_ENABLE
#include "g/keymap_combo.h"
#endif

__attribute__ ((weak))
layer_state_t layer_state_set_keymap(layer_state_t state) {
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    state = layer_state_set_keymap(state);
    return update_tri_layer_state(state, _L3, _L4, _AD);
}
