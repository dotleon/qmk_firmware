/* Copyright 2018 REPLACE_WITH_YOUR_NAME
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
#include "keymap_hungarian.h"

//static uint8_t current_layer;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  //0
  { \
    { KC_ESC ,HU_1   ,HU_2   ,HU_3   ,HU_4   ,HU_5   ,        HU_6   ,HU_7   ,HU_8   ,HU_9   ,HU_0   ,KC_BSPC }, \
    { KC_TAB ,HU_Q   ,HU_W   ,HU_E   ,HU_R   ,HU_T   ,        HU_Z   ,HU_U   ,HU_I   ,HU_O   ,HU_P   ,KC_DEL  }, \
    { KC_BSPC,HU_A   ,HU_S   ,HU_D   ,HU_F   ,HU_G   ,        HU_H   ,HU_J   ,HU_K   ,HU_L   ,HU_OE  ,KC_ENT  }, \
    { KC_LSFT,HU_Y   ,HU_X   ,HU_C   ,HU_V   ,HU_B   ,        HU_N   ,HU_M   ,HU_COMM,HU_DOT ,HU_UE  ,KC_RSFT }, \
    { KC_LCTL,KC_LCMD,KC_LALT,MO(4)  ,MO(4)  ,KC_SPC ,        OSL(1) ,TT(2)  ,KC_LEFT,KC_UP  ,KC_DOWN,KC_RGHT }  \
  },
  //1 Function keys, accents and special characters
  { \
    { KC_F12 ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,        KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11  }, \
    { _______,HU_CIRC,HU_TILD,HU_EE  ,HU_LBRC,HU_RBRC,        HU_DLR ,HU_UU  ,HU_II  ,HU_OO  ,HU_PERC,_______ }, \
    { _______,HU_AA  ,HU_LPRN,HU_RPRN,HU_LCBR,HU_RCBR,        HU_SCLN,HU_PLUS,HU_MINS,HU_EQL ,HU_OEE ,_______ }, \
    { _______,HU_LESS,HU_MORE,HU_PIPE,HU_BSLS,HU_SLSH,        HU_ASTR,HU_AT  ,HU_AMPR,HU_HASH,HU_UEE ,KC_INS  }, \
    { _______,_______,_______,_______,_______,_______,        _______,_______,KC_HOME,KC_PGUP,KC_PGDN,KC_END  }  \
  },
  //2 numpad
  {\
    { _______,KC_NO  ,KC_NO  ,KC_PSCR,KC_SLCK,KC_PAUS,        KC_NO  ,KC_NO  ,KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS }, \
    { _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,        KC_NO  ,KC_NO  ,KC_P7  ,KC_P8  ,KC_P9  ,KC_PPLS }, \
    { _______,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,        KC_NO  ,KC_NO  ,KC_P4  ,KC_P5  ,KC_P6  ,_______ }, \
    { KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,        KC_NO  ,KC_NO  ,KC_P1  ,KC_P2  ,KC_P3  ,KC_PENT }, \
    { _______,_______,_______,_______,_______,_______,        _______,_______,KC_P0  ,KC_P0  ,KC_PDOT,KC_PENT }  \
  },
  //3 caps and space for games
  {\
    { _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______ }, \
    { _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______ }, \
    { KC_CAPS,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______ }, \
    { _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______ }, \
    { _______,_______,_______,_______,KC_SPC ,_______,        _______,_______,_______,_______,_______,_______ }  \
  },
  //4 navigation, settings and reset
  { \
    { RESET  ,_______,_______,_______,_______,_______,        KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,KC_NO  ,TG(3)   }, \
    { DEBUG  ,_______,_______,_______,_______,_______,        KC_PGUP,KC_HOME,KC_UP  ,KC_END ,KC_NO  ,_______ }, \
    { _______,_______,_______,_______,_______,_______,        KC_PGDN,KC_LEFT,KC_DOWN,KC_RGHT,KC_NO  ,_______ }, \
    { _______,_______,_______,_______,_______,_______,        KC_NO  ,KC_MPRV,KC_MPLY,KC_MNXT,KC_NO  ,_______ }, \
    { _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______ }  \
  }

  /*[1] = { \
  *  _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______, \
  *  _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______, \
  *  _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______, \
  *  _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______, \
  *  _______,_______,_______,_______,_______,_______,        _______,_______,_______,_______,_______,_______  \
  *}
  */
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {
  /*if (current_layer != layer_state) {
    current_layer = layer_state;
    switch(current_layer) {
      case 0:
        #ifdef AUDIO_ENABLE
          PLAY_SONG(songlayeroff);
        #endif
        break;
      case 2:
        #ifdef AUDIO_ENABLE
          PLAY_SONG(songlayeron);
        #endif
        break;
    }
  }*/
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {

    }
  }
  return true;
}

void led_set_user(uint8_t usb_led) {

}
