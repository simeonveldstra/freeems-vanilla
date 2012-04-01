/* FreeEMS - the open source engine management system
 *
 * Copyright 2010-2012 Fred Cooke
 *
 * This file is part of the FreeEMS project.
 *
 * FreeEMS software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * FreeEMS software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with any FreeEMS software.  If not, see http://www.gnu.org/licenses/
 *
 * We ask that if you make any changes to this file you email them upstream to
 * us at admin(at)diyefi(dot)org or, even better, fork the code on github.com!
 *
 * Thank you for choosing FreeEMS to run your engine!
 */


/** @file
 *
 * @ingroup dataInitialisers
 *
 * @brief Will eventually contain my pre-canned tune
 *
 * For now this will be used to ID that tables are being parsed and rendered
 * correctly in mtx 16 by 16
 *
 * This file only contains the data to be hash included into the VE tables
 * in the fuel table files for car specific builds.
 */


// Low RPM                                                                                                           High RPM
// 250,    700,   1000,   1600,   2200,   2800,   3400,   4000,   4600,   5200,   5800,   6400,   7000,   7600,   8200,    8800, // Vacuum
VE(50), VE(40), VE(30), VE(30), VE(30), VE(30), VE(38), VE(59), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), //  15
VE(44), VE(34), VE(31), VE(32), VE(34), VE(36), VE(39), VE(67), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), //  30
VE(41), VE(31), VE(30), VE(32), VE(36), VE(37), VE(43), VE(70), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), //  45
VE(40), VE(31), VE(31), VE(36), VE(39), VE(42), VE(49), VE(72), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), //  60

VE(49), VE(43), VE(41), VE(43), VE(45), VE(47), VE(56), VE(73), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), //  75
VE(58), VE(53), VE(51), VE(51), VE(52), VE(55), VE(65), VE(76), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), //  90
VE(64), VE(64), VE(64), VE(65), VE(65), VE(65), VE(70), VE(78), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 105
VE(80), VE(72), VE(72), VE(71), VE(72), VE(73), VE(75), VE(79), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 120

VE(80), VE(79), VE(78), VE(76), VE(77), VE(77), VE(77), VE(79), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 135
VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 150
VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 165
VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 180

VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 195
VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(80), VE(99), VE(127), // 210
VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(89), VE(99), VE(127), // 225
VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(99), VE(127), // 240
// 250,    700,   1000,   1600,   2200,   2800,   3400,   4000,   4600,   5200,   5800,   6400,   7000,   7600,   8200,    8800, // Boost
// Low RPM                                                                                                             High RPM


// The rest are UNUSED until we get full variable size table tuning, firmware can handle it, tuning currently can't :
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0),


VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0), VE(0),
VE(0), VE(0), VE(0), VE(0), VE(0), VE(0)
