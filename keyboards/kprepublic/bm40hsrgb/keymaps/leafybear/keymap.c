/* Copyright 2020 tominabox1
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

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Qwerty
   * ,-----------------------------------------------------------------------------------.
   * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
   * |------+------+------+------+------+------+------+------+------+------+------+------|
   * | BLTog| Ctrl | Alt  | GUI  |Lower |    Space    |Raise | Left | Down |  Up  |Right |
   * `-----------------------------------------------------------------------------------'
   */
	[_QWERTY] = LAYOUT_planck_mit(
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    KC_MINS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_QUOT, KC_SFTENT,
    KC_LSFT, KC_SCLN, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_UP, KC_DOT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_GESC, RAISE, KC_SPC, LOWER, KC_SLSH, KC_LEFT, KC_DOWN, KC_RGHT
  ),
	[_LOWER] = LAYOUT_planck_mit(
    _______, KC_F1, KC_F2, KC_F3, KC_F10, KC_LCBR, KC_RCBR, KC_AMPR, KC_DLR, KC_PERC, KC_EXLM, KC_DEL,
    _______, KC_F4, KC_F5, KC_F6, KC_F11, KC_LPRN, KC_RPRN, KC_UNDS, KC_EQL, KC_CIRC, KC_GRV, KC_ASTR,
    _______, KC_F7, KC_F8, KC_F9, KC_F12, KC_LBRC, KC_RBRC, KC_HASH, KC_AT, KC_PIPE, KC_VOLU, KC_PLUS,
    _______, _______, _______, _______, _______, KC_MPLY, _______, KC_BSLS, _______, KC_VOLD, KC_MUTE),
	[_RAISE] = LAYOUT_planck_mit(
    KC_P0, KC_1, KC_2, KC_3, KC_0, RGB_TOG, RGB_MOD, RGB_HUI, RGB_SPI, _______, _______, KC_PSCR,
    KC_PPLS, KC_4, KC_5, KC_6, _______, BL_TOGG, RGB_RMOD, RGB_HUD, RGB_SPD, _______, _______, KC_CAPS,
    KC_PMNS, KC_7, KC_8, KC_9, KC_PDOT, KC_PLUS, _______, _______, _______, _______, _______, _______,
    KC_P1, KC_P3, KC_P7, _______, _______, KC_MPLY, _______, _______, _______, _______, _______),
	[_ADJUST] = LAYOUT_planck_mit(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RESET,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, DEBUG,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______)
};


layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}
