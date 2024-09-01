#include QMK_KEYBOARD_H

#define _QWERTY 0
#define _SYMBOLS 1
#define _NAVIGATION 2

#define NAVIGATION LT(_NAVIGATION, KC_BSPC)
#define SYMBOLS LT(_SYMBOLS, KC_PSC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  ,KC_BSPC,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_MINS,
        KC_LSFT, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,                         KC_H  , KC_J  , KC_K  , KC_L  , KC_SCLN,KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  , KC_COMM,KC_DOT ,KC_SLSH,KC_BSLS,
                           SYMBOLS, NAVIGATION, KC_LALT,                         KC_LGUI, KC_ENT, SYMBOLS,
                                       KC_LCTL, KC_LSFT,                         KC_RSFT, KC_RCTL
    ),

    [_SYMBOLS] = LAYOUT_5x6(
        KC_ESC , KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,                         KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , KC_BSPC,
        KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,                         KC_Y  , KC_U  ,     KC_LBRC  , KC_RBRC , KC_P, KC_MINS,
        KC_LSFT, KC_LABK  , KC_QUOTE  , S(KC_QUOTE), KC_RABK  , KC_G  ,                     KC_H  , S(KC_LBRC), KC_LPRN  , KC_RPRN ,S(KC_RBRC), KC_QUOT,
        KC_LCTL, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,                         KC_N  , KC_M  , KC_COMM,KC_DOT ,KC_SLSH, KC_BSLS,
                              _______, _______, _______,                         _______, _______, _______,
                                       _______, _______,                         _______, _______

    ),

    [_NAVIGATION] = LAYOUT_5x6(
        KC_TILD,KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,                        KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_DEL,
        _______,_______,_______,_______,_______,KC_LBRC,                        KC_RBRC, KC_P7 , KC_P8 , KC_P9 ,  _______,  KC_PLUS,
        _______,KC_HOME,KC_PGUP,KC_PGDN,KC_END ,KC_LPRN,                        KC_RPRN, KC_LEFT, KC_UP, KC_DOWN, KC_RIGHT, KC_PIPE,
        _______,_______,_______,_______,_______,_______,                        _______, KC_P1 , KC_P2 , KC_P3 ,KC_EQL ,    KC_UNDS,
                              _______, _______, _______,                        _______, _______, _______,
                                       _______, _______,                        _______, _______
    )
};
