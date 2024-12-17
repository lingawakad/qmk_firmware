/*
Copyright 2020 Pierre Chevalier <pierrechevalier83@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

// Define main board
#define MASTER_LEFT

// frood
// /fru:d/
// Noun
// A really amazingly together guy. E.g. “There’s a frood who really knows where his towel is.”

// should no longer need the RP2040 defines for the rev7

//#define RP2040_FLASH_GD25Q64CS

// Activates the double-tap behavior
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET

// Timeout window in ms in which the double tap can occur
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U

// Specify an optional status LED by GPIO number which blinks when entering the bootloader
//#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED D5

// Pick good defaults for enabling homerow modifiers
#define TAPPING_TERM 200
#define PERMISSIVE_HOLD
#define TAPPING_FORCE_HOLD
