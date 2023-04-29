/*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _QWERTY,
    _NUM,
    _VIM,
    _FUNC,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 *
 * ,----------------------------------.                      ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |                      |   Y  |   U  |   I  |   O  |   P  |
 * |------+------+------+------+------|                      |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |                      |   H  |   J  |   K  |   L  |   '  |
 * |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
 * | Z/CTL| X/ALT| C/GUI| V/SFT|   B  |  |  2  |    |  3  |  |   N  | M/SFT| ,/GUI| ./ALT| //CTL|
 * `----------------------------------'  `-----'    `-----'  `----------------------------------'
 *          ,-----.   ,--------------------.            ,--------------------.   ,-----.
 *          |  1  |   |  BS  |  TAB  |  ;  |            |L3,ESC|L2,ENT|L1,SPC|   |  4  |
 *          `-----'   `--------------------'            `--------------------'   `-----'
 */
[_QWERTY] = LAYOUT(
	KC_Q,			KC_W,			KC_E,			KC_R,			KC_T,		KC_Y,	    KC_U,				KC_I,				KC_O,		        KC_P,
	KC_A,           KC_S,           KC_D,           KC_F,           KC_G,		KC_H,	    KC_J,	            KC_K,	            KC_L,	            KC_QUOT,
	LCTL_T(KC_Z),   LALT_T(KC_X),   LGUI_T(KC_C),   LSFT_T(KC_V),   KC_B,       KC_N,       RSFT_T(KC_M),       RGUI_T(KC_COMM),    RALT_T(KC_DOT),     RCTL_T(KC_SLSH),
	KC_1,			KC_BSPC,	    KC_TAB,	        KC_SCLN,		KC_2,	    KC_3,	    LT(3,KC_ESC),		LT(2,KC_ENT),		LT(1,KC_SPC),		KC_4
),

/* NAVNUM
 *
 * ,----------------------------------.                      ,----------------------------------.
 * |      | PgUp |  UP  | PgDn |      |                      |   /  |   7  |   8  |   9  |   -  |
 * |------+------+------+------+------|                      |------+------+------+------+------|
 * | Home | Left | Down | Right| End  |                      |   =  |   4  |   5  |   6  |   +  |
 * |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
 * |      |      |  INS |      |      |  |CAPS |    |NUMLK|  |   0  |   1  |   2  |   3  |   *  |
 * `----------------------------------'  `-----'    `-----'  `----------------------------------'
 *          ,-----.   ,--------------------.            ,--------------------.   ,-----.
 *          |  1  |   | DEL | SPACE | TAB  |            |  ESC  | BS | ENTER |   |  4  |
 *          `-----'   `--------------------'            `--------------------'   `-----'
 */
[_NAVNUM] = LAYOUT(
	KC_NO,		KC_PGUP,		KC_UP,			KC_PGDN,	KC_NO,				KC_SLSH,	KC_7,	KC_8,		KC_9,			KC_MINS,
	KC_HOME,	KC_LEFT,		KC_DOWN,		KC_RGHT,	KC_END,				KC_EQL,		KC_4,	KC_5,		KC_6,			KC_PLUS,
	KC_NO,		KC_NO,			KC_INS,			KC_NO,		KC_NO,				KC_0,		KC_1,	KC_2,		KC_3,			KC_ASTR,
	KC_1,		LT(3,KC_DEL),	LT(1,KC_SPC),	KC_TAB,		KC_CAPS,			KC_NUM,		KC_ESC,	KC_BSPC,	LT(2,KC_ENT),	KC_4
),

/* SYM
 *
 * ,----------------------------------.                      ,----------------------------------.
 * |   %  |   @  |   [  |   ]  |   \  |                      |      |      |   ^  |      |      |
 * |------+------+------+------+------|                      |------+------+------+------+------|
 * |   #  |   !  |   (  |   )  |   |  |                      |   _  |   '  |   "  |   ~  |   `  |
 * |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
 * |   $  |   £  |   {  |   }  |   &  |  |CAPS |    |NUMLK|  |      |      |      |      |      |
 * `----------------------------------'  `-----'    `-----'  `----------------------------------'
 *          ,-----.   ,--------------------.            ,--------------------.   ,-----.
 *          |  1  |   | DEL | SPACE | TAB  |            |  ESC  | BS | ENTER |   |  4  |
 *          `-----'   `--------------------'            `--------------------'   `-----'
 */
[_SYM] = LAYOUT(
	KC_PERC,	KC_AT,			KC_LBRC,		KC_RBRC,	KC_BSLS,		KC_NO,		KC_NO,		KC_CIRC,	KC_NO,			KC_NO,
	KC_HASH,	KC_EXLM,		KC_LPRN,		KC_RPRN,	KC_PIPE,		KC_UNDS,	KC_QUOT,	KC_DQT,		KC_TILD,		KC_GRV,
	KC_DLR,		KC_NO,			KC_LCBR,		KC_RCBR,	KC_AMPR,		KC_NO,		KC_NO,		KC_NO,		KC_NO,			KC_NO,
	KC_1,		LT(3,KC_DEL),	LT(1,KC_SPC),	KC_TAB,		KC_CAPS,		KC_NUM,		KC_ESC,		KC_BSPC,	LT(2,KC_ENT),	KC_4
),

/* FUNC
 *
 * ,----------------------------------.                      ,----------------------------------.
 * |      |      |      |      |      |                      |      |  F7  |  F8  |  F9  |  F11 |
 * |------+------+------+------+------|                      |------+------+------+------+------|
 * |      |      |      |      |      |                      |      |  F4  |  F5  |  F6  |  F12 |
 * |------+------+------+------+------|  ,-----.    ,-----.  |------+------+------+------+------|
 * | Reset|      |      |      |      |  |CAPS |    |NUMLK|  |  F10 |  F1  |  F2  |  F3  |  F13 |
 * `----------------------------------'  `-----'    `-----'  `----------------------------------'
 *          ,-----.   ,--------------------.            ,--------------------.   ,-----.
 *          |  1  |   | DEL | SPACE | TAB  |            |  ESC  | BS | ENTER |   |  4  |
 *          `-----'   `--------------------'            `--------------------'   `-----'
 */
[_FUNC] =  LAYOUT(
	KC_NO,	KC_NO,			KC_NO,			KC_NO,	KC_NO,			KC_NO,	KC_F7,	KC_F8,		KC_F9,			KC_F11,
	KC_NO,	KC_NO,			KC_NO,			KC_NO,	KC_NO,			KC_NO,	KC_F4,	KC_F5,		KC_F6,			KC_F12,
	QK_BOOT,	KC_NO,			KC_NO,			KC_NO,	KC_NO,			KC_F10,	KC_F1,	KC_F2,		KC_F3,			KC_F13,
	KC_1,	LT(3,KC_DEL),	LT(1,KC_SPC),	KC_TAB,	KC_CAPS,		KC_NUM,	KC_ESC,	KC_BSPC,	LT(2,KC_ENT),	KC_4
),
};
