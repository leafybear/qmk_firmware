#include QMK_KEYBOARD_H


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

 #include "muse.h"

 enum preonic_layers {
   _QWERTY,
   _COLEMAK_DH,
   _JIS,
   _LOWER,
   _RAISE,
   _ADJUST
 };

 enum preonic_keycodes {
   QWERTY = SAFE_RANGE,
   COLEMAK_DH,
   JIS,
   LOWER,
   RAISE,
   ADJUST
 };

 /* layer switching
 MO(_LOWER)
 MO(_RAISE)

 Empty keys used to be KC_NO
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------------------.
   * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |   +  |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bkspc|
   * |------+------+------+------+------+-------------+------+------+------+------+------|
   * |  -   |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   "  |Enter |
   * |------+------+------+------+------+------|------+------+------+------+------+------|
   * | Shift|   ;  |   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |  Up  |  .   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Ctl  | Alt  |  OS  | Esc  |Lower |    Space    |Raise |  /   | Left | Down |Right |
   * `-----------------------------------------------------------------------------------'
   *
   */
  [_QWERTY] = LAYOUT_preonic_1x2uC(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_SFTENT,
    KC_LSFT, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_UP, KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_GESC, LOWER, KC_SPC, RAISE, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
  ),
  [_COLEMAK_DH] = LAYOUT_preonic_1x2uC(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL,
    KC_TAB, KC_Q, KC_W, KC_F, KC_P, KC_B, KC_J, KC_L, KC_U, KC_Y, KC_QUOT, KC_BSPC,
    KC_MINS, KC_A, KC_R, KC_S, KC_T, KC_G, KC_M, KC_N, KC_E, KC_I, KC_O, KC_SFTENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_D, KC_V, KC_K, KC_H, KC_SCLN, KC_COMM, KC_UP, KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_GESC, LOWER, KC_SPC, RAISE, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
  ),
	[_RAISE] = LAYOUT_preonic_1x2uC(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR, _______, KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PIPE, KC_VOLU, KC_PDOT,
    _______, _______, _______, _______, _______, KC_MPLY, _______, KC_BSLS, _______, KC_VOLD, _______
  ),
	[_LOWER] = LAYOUT_preonic_1x2uC(
    _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,
    KC_P0, KC_F11, KC_F12, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_PPLS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_PMNS, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    KC_P1, KC_P3, KC_P7, _______, _______, KC_MPLY, _______, _______, _______, _______, _______
  ),
	[_ADJUST] = LAYOUT_preonic_1x2uC(
    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, _______, _______, _______, _______, _______, _______,
    RGB_M_R, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, _______, _______, _______, _______, _______, RESET,
    RGB_M_G, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    RGB_M_X, MU_ON, MU_OFF, _______, _______, QWERTY, COLEMAK_DH, _______, _______, _______, _______, _______,
    RGB_M_SW, AU_ON, AU_OFF, _______, _______, _______, _______, _______, _______, _______, _______)
};

/* Not sure why but these settings make the MUSIC features of preonic work much better */

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
        case QWERTY:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_QWERTY);
          }
          return false;
          break;
        case COLEMAK_DH:
          if (record->event.pressed) {
            set_single_persistent_default_layer(_COLEMAK_DH);
          }
          return false;
          break;
        case LOWER:
          if (record->event.pressed) {
            layer_on(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_LOWER);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
        case RAISE:
          if (record->event.pressed) {
            layer_on(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          } else {
            layer_off(_RAISE);
            update_tri_layer(_LOWER, _RAISE, _ADJUST);
          }
          return false;
          break;
      }
    return true;
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case RAISE:
    case LOWER:
      return false;
    default:
      return true;
  }
}
