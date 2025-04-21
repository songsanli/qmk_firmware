/* Copyright 2024 ai03 Design Studio */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

enum custom_keycodes {
    CH_INPUT = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case CH_INPUT:
        if (record->event.pressed) {
            // when keycode QMKBEST is pressed
            SEND_STRING(SS_DOWN(X_LALT) SS_DELAY(50) SS_TAP(X_SPACE) SS_DELAY(50) SS_UP(X_LALT));
        } else {
            // when keycode QMKBEST is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        XXXXXXX, KC_Q,         KC_W,         KC_E,         KC_R,          KC_T,          KC_LBRC, KC_RBRC,       KC_Y,           KC_U,          KC_I,         KC_O,         KC_P,            XXXXXXX,
        KC_CAPS, LCTL_T(KC_A), LALT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),  KC_G,          KC_QUOT, KC_BSLS,       KC_H,           LSFT_T(KC_J),  LGUI_T(KC_K), LALT_T(KC_L), LCTL_T(KC_SCLN), CH_INPUT,
        XXXXXXX, KC_Z,         KC_X,         KC_C,         KC_V,          KC_B,          XXXXXXX, XXXXXXX,       KC_N,           KC_M,          KC_COMM,      KC_DOT,       KC_SLSH,         XXXXXXX,
                                             XXXXXXX,      LT(5, KC_TAB), LT(1, KC_SPC), KC_ESC,  LT(3, KC_ENT), LT(2, KC_BSPC), LT(4, KC_DEL), XXXXXXX
    ),

    [1] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX, XXXXXXX,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [2] = LAYOUT(
        XXXXXXX, KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_QUOT, KC_4,    KC_5,    KC_6,    KC_EQL,  XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_LCMD, KC_LOPT, KC_LCTL, XXXXXXX,
        XXXXXXX, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, KC_DOT,  KC_0,    KC_MINS, _______, _______, _______, _______
    ),

    [3] = LAYOUT(
        XXXXXXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_DQUO, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_LCMD, KC_LOPT, KC_LCTL, XXXXXXX,
        XXXXXXX, KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, _______, KC_RPRN, KC_UNDS, _______, _______, _______, _______
    ),

    [4] = LAYOUT(
        XXXXXXX, KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LSFT, KC_LCMD, KC_LOPT, KC_LCTL, XXXXXXX,
        XXXXXXX, KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [5] = LAYOUT(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX,           XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_MNXT, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX,
                                   _______, _______, _______, _______, _______, _______, _______,           _______
    )

    // [0] = LAYOUT(
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    //                                _______, _______, _______, _______, _______, _______, _______, _______
    // )

};
