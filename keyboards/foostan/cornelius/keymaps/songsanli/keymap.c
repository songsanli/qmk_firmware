/* Copyright 2020 foostan
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
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
     XXXXXXX,         KC_Q,         KC_W,          KC_E,          KC_R,    KC_T,          KC_Y,           KC_U,             KC_I,         KC_O,            KC_P,      XXXXXXX,
     KC_CAPS, LCTL_T(KC_A), LALT_T(KC_S),  LGUI_T(KC_D),  LSFT_T(KC_F),    KC_G,          KC_H,   LSFT_T(KC_J),     LGUI_T(KC_K), LALT_T(KC_L), LCTL_T(KC_SCLN),     CH_INPUT,
     XXXXXXX,         KC_Z,         KC_X,          KC_C,          KC_V,    KC_B,          KC_N,           KC_M,          KC_COMM,       KC_DOT,         KC_SLSH,      XXXXXXX,
     XXXXXXX,      XXXXXXX,      XXXXXXX, LT(5, KC_TAB), LT(1, KC_SPC),  KC_ESC, LT(3, KC_ENT), LT(2, KC_BSPC), LT(4, KC_DELETE),      XXXXXXX,         KC_LEFT,      KC_RGHT
  ),

[1] = LAYOUT(
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,    XXXXXXX, XXXXXXX,     XXXXXXX,     XXXXXXX, XXXXXXX,
     XXXXXXX, KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, XXXXXXX,    KC_LEFT,    KC_DOWN,   KC_UP,    KC_RIGHT,     XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_HOME,    KC_PGDN, KC_PGUP,      KC_END,     XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, _______,   MO(1), _______,    _______,    _______, _______,     XXXXXXX,     XXXXXXX, XXXXXXX
  ),

[2] = LAYOUT(
     XXXXXXX, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, KC_QUOT,    KC_4,    KC_5,    KC_6,  KC_EQL, XXXXXXX, KC_LSFT, KC_LCMD, KC_LOPT, KC_LCTL, XXXXXXX,
     XXXXXXX,  KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX,  KC_DOT,    KC_0, KC_MINS, _______,   MO(2), _______, XXXXXXX, XXXXXXX, XXXXXXX
  ),

[3] = LAYOUT(
     XXXXXXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, KC_DQUO,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS, XXXXXXX, KC_LSFT, KC_LCMD, KC_LOPT, KC_LCTL, XXXXXXX,
     XXXXXXX, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_RPRN, KC_UNDS,   MO(3), _______, _______, XXXXXXX, XXXXXXX, XXXXXXX
  ),

[4] = LAYOUT(
     XXXXXXX,  KC_F12,   KC_F7,   KC_F8,   KC_F9, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX,  KC_F11,   KC_F4,   KC_F5,   KC_F6, XXXXXXX, XXXXXXX, KC_LSFT, KC_LCMD, KC_LOPT, KC_LCTL, XXXXXXX,
     XXXXXXX,  KC_F10,   KC_F1,   KC_F2,   KC_F3, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, _______, _______,   MO(4), XXXXXXX, XXXXXXX, XXXXXXX
  ),
[5] = LAYOUT(
     QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPLY, XXXXXXX,           XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_MNXT, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,           XXXXXXX,         XXXXXXX, XXXXXXX, XXXXXXX,
     XXXXXXX, XXXXXXX, XXXXXXX,   MO(5), _______, _______, _______, _______,           _______,         XXXXXXX, XXXXXXX, XXXXXXX
  ),
};

// bool get_tapping_force_hold(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LT(1, KC_SPC):
//             return true;
//         case LT(2, KC_BSPC):
//             return true;
//         default:
//             return false;
//     }
// }
