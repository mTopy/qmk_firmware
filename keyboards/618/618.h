/* Copyright 2021 mTopy
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

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT_ansi( \
    k000, k001,  k002,  k003, k004, k005,   k006, k007, k008, k009,   k010, k011, k012, k013, k014,  k015, k016, k017, k018, \
    k019, k020,  k021, k022, k023, k024, k025, k026, k027, k028, k029, k030, k031, k032, k033, k034, k035, k036, k037, k038, \
    k039, k040,  k041, k042, k043, k044, k045, k046, k047, k048, k049, k050, k051, k052, k053, k054, k055, k056, k057, k058,\
    k059, k060,  k061, k062, k063, k064, k065, k066, k067, k068, k069, k070, k071, k072, k073, k074, k075, k076, \
    k077, k078,  k079, k080, k081, k082, k083, k084, k085, k086, k087, k088, k089, k090, k091, k092, k093, k094, k095,\
    k096, k097,  k098, k099, k100, k101, k102, k103, k104, k105, k106, k107, k109 \
) { \
    {k000, k002, k004, k006, k008, k010, k012, k014, k016, k018}, \
    {k001, k003, k005, k007, k009, k011, k013, KC_NO, k015, k017},  \
    {k019, k021, k023, k025, k027, k029, k031, k033, k035, k037},\
    {k020, k022, k024, k026, k028, k030, k032, k034, k036, k038},\
    {k039, k041, k043, k045, k047, k049, k051, k053, k055, k057},\
    {k040, k042, k044, k046, k048, k050, k052, k054, k056, k058},\
    {k059, k061, k063, k065, k067, k069, k071, k073, KC_NO, k075},\
    {k060, k062, k064, k066, k068, k070, k072, KC_NO, k074, k076,},\
    {k077, k079, k081, k083, k085, k087, k089, k091, k093, k095},\
    {k078, k080, k082, k084, k086, k088, k090, KC_NO, k092, k094},\
    {k096, k098, k100, KC_NO, KC_NO, k102, k104, k106, KC_NO},\
    {k097, KC_NO, k099, k101, KC_NO, k103, k105, KC_NO, k107, k109}\
}



#define LAYOUT_iso(  \
    k000, k001,     k002,   k003, k004, k005, k006,     k007, k008, k009, k010,     k011, k012, k013, k014,     k015, k016, k017, k018, \
    k019, k020,     k021, k022, k023, k024, k025, k026, k027, k028, k029, k030, k031, k032, k033, k034,         k035, k036, k037, k038, \
    k039, k040,     k041, k042, k043, k044, k045, k046, k047, k048, k049, k050, k051, k052, k053, k054, k055, k056, k057, k058,\
    k059, k060,     k061, k062, k063, k064, k065, k066, k067, k068, k069, k070, k071, k072, k073, k074, k075, k076, \
    k077, k078,     k079, k110, k080, k081, k082, k083, k084, k085, k086, k087, k088, k089, k090, k091, k092, k093, k094, k095,\
    k096, k097,     k098, k099, k100, k101, k102, k103, k104, k105, k106, k107, k109 \
){  \
    {k000, k002, k004, k006, k008, k010, k012, k014, k016, k018}, \
    {k001, k003, k005, k007, k009, k011, k013, KC_NO, k015, k017},  \
    {k019, k021, k023, k025, k027, k029, k031, k033, k035, k037},\
    {k020, k022, k024, k026, k028, k030, k032, k034, k036, k038},\
    {k039, k041, k043, k045, k047, k049, k051, k053, k055, k057},\
    {k040, k042, k044, k046, k048, k050, k052, k054, k056, k058},\
    {k059, k061, k063, k065, k067, k069, k071, KC_NO, KC_NO, k075},\
    {k060, k062, k064, k066, k068, k070, k072, k073, k074, k076,},\
    {k077, k079, k081, k083, k085, k087, k089, k091, k093, k095},\
    {k078, k080, k082, k084, k086, k088, k090, KC_NO, k092, k094},\
    {k096, k098, k100, KC_NO, KC_NO, k102, k104, k106, KC_NO},\
    {k097, k110, k099, k101, KC_NO, k103, k105, KC_NO, k107, k109}\
}
