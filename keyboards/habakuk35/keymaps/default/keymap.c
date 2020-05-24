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
    { KC_ESC ,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  }, \
    \
    { HU_0   ,HU_1   ,HU_2   ,HU_3   ,HU_4   ,HU_5   }, \
    { KC_TAB ,HU_Q   ,HU_W   ,HU_E   ,HU_R   ,HU_T   }, \
    { KC_CAPS,HU_A   ,HU_S   ,HU_D   ,HU_F   ,HU_G   }, \
    { KC_LSFT,HU_Y   ,HU_X   ,HU_C   ,HU_V   ,HU_B   }, \
    { KC_LCTL,HU_M   ,KC_LALT,MO(1)  ,KC_SPC ,KC_NO  }  \
  },
  //1 Function keys, accents and special characters
  { \
    { _______,KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 }, \
    \
    { _______,HU_6   ,HU_7   ,HU_8   ,HU_9   ,HU_OE  }, \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}  \
  },
  //2 numpad
  { \
    { _______,_______,_______,_______,_______,RESET  }, \
    \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}, \
    { _______,_______,_______,_______,_______,_______}  \
  }
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
