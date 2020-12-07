/* Copyright 2020 @toastedmangoes/@waffle#6666
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

#pragma once

enum layers {
  _QWERTY,
  _LOWER,
  _RAISE,
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  ADJUST,
  CP_PSTE,
  SSH_PI,
  ALT_TAB,
  CTLS,
  MAKE,
  UNIT,
  UNIT2,
  UNIT4,
  UNIT5,
  GIT,
  SETUP,
  ZAD,
  MMAP,
  NKINV,
  CONF,
  VIA,
  CD1
};

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)
#define SFA SFT_T(KC_A)
#define SFCLN RSFT_T(KC_SCLN)
#define CTLSLH RCTL_T(KC_SLSH)
#define SFEXM MT(MOD_LSFT, KC_F23)
#define SFPRN MT(MOD_RSFT, KC_F24)
#define CTLESC CTL_T(KC_ESC)
#define CTLTZ CTL_T(KC_Z)
#define CTLNXT RCTL_T(KC_MNXT)
#define GPSCR G(KC_PSCR)
#define MPSCR G(S(KC_4))
#define CTLBSP ALT_T(KC_DEL)
#define SFL SFT_T(KC_L)
#define SFLPRN MT(MOD_RSFT, KC_F22)



