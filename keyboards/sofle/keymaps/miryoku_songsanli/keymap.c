#include QMK_KEYBOARD_H

enum sofle_layers {
    _BASE,
    _NAVIGATION,
    _MOUSE,
    _MEDIA,
    _NUMBER,
    _SYMBOL,
    _FUNCTION,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT( \
  XXXXXXX, XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,            XXXXXXX,                                                             XXXXXXX,              XXXXXXX,               XXXXXXX,      XXXXXXX,      XXXXXXX,         XXXXXXX, \
  XXXXXXX, KC_Q,         KC_W,         KC_E,         KC_R,               KC_T,                                                                KC_Y,                 KC_U,                  KC_I,         KC_O,         KC_P,            XXXXXXX, \
  XXXXXXX, LCTL_T(KC_A), LOPT_T(KC_S), LGUI_T(KC_D), LSFT_T(KC_F),       KC_G,                                                                KC_H,                 RSFT_T(KC_J),          RGUI_T(KC_K), ROPT_T(KC_L), RCTL_T(KC_SCLN), XXXXXXX, \
  XXXXXXX, KC_Z,         KC_X,         KC_C,         KC_V,               KC_B,                    KC_MUTE,               XXXXXXX,             KC_N,                 KC_M,                  KC_COMM,      KC_DOT,       KC_SLSH,         XXXXXXX, \
                         XXXXXXX,      XXXXXXX,      LT(_MEDIA, KC_TAB), LT(_NAVIGATION, KC_SPC), LT(_MOUSE, KC_ESC),    LT(_SYMBOL, KC_ENT), LT(_NUMBER, KC_BSPC), LT(_FUNCTION, KC_DEL), XXXXXXX,      XXXXXXX \
),
[_NAVIGATION] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, XXXXXXX,                      KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_ENT,  KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX \
),
[_MOUSE] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_LCTL, KC_LOPT, KC_LCMD, KC_LSFT, XXXXXXX,                      KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_BTN2, KC_BTN1, KC_BTN3, XXXXXXX, XXXXXXX \
),
[_MEDIA] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, XXXXXXX, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    KC_MSTP, KC_MPLY, KC_MUTE, XXXXXXX, XXXXXXX \
),
[_NUMBER] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_LBRC,    KC_7,    KC_8,    KC_9, KC_RBRC,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_QUOT,    KC_4,    KC_5,    KC_6,  KC_EQL,                      XXXXXXX, KC_RSFT, KC_RCMD, KC_ROPT, KC_RCTL, XXXXXXX, \
  XXXXXXX,  KC_GRV,    KC_1,    KC_2,    KC_3, KC_BSLS, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                    XXXXXXX, XXXXXXX,  KC_DOT,    KC_0, KC_MINS,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),
[_SYMBOL] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX, KC_DQUO,  KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,                      XXXXXXX, KC_RSFT, KC_RCMD, KC_ROPT, KC_RCTL, XXXXXXX, \
  XXXXXXX, KC_TILD, KC_EXLM,   KC_AT, KC_HASH, KC_PIPE,   RESET,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                    XXXXXXX, XXXXXXX, KC_LPRN, KC_RPRN, KC_UNDS,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),
[_FUNCTION] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX,  KC_F12,   KC_F7,   KC_F8,   KC_F9, KC_RCBR,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  XXXXXXX,  KC_F11,   KC_F4,   KC_F5,   KC_F6, KC_PLUS,                      XXXXXXX, KC_RSFT, KC_RCMD, KC_ROPT, KC_RCTL, XXXXXXX, \
  XXXXXXX,  KC_F10,   KC_F1,   KC_F2,   KC_F3, KC_PIPE,   RESET,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
                    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
)
};

#ifdef OLED_DRIVER_ENABLE

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };

    oled_write_P(qmk_logo, false);
}

static void print_status_narrow(void) {
    oled_write_P(PSTR("\n\n"), false);
    // Print current layer
    oled_write_ln_P(PSTR("LAYER"), false);
    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case _NAVIGATION:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _MOUSE:
            oled_write_P(PSTR("Mouse\n"), false);
            break;
        case _MEDIA:
            oled_write_P(PSTR("Media\n"), false);
            break;
        case _NUMBER:
            oled_write_P(PSTR("Num\n"), false);
            break;
        case _SYMBOL:
            oled_write_P(PSTR("Sym\n"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("Func\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Undef\n"), false);
    }
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master()) {
        return OLED_ROTATION_270;
    }
    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        render_logo();
    }
}

#endif

#ifdef ENCODER_ENABLE

void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_PGDOWN);
        } else {
            tap_code(KC_PGUP);
        }
    }
}

#endif
