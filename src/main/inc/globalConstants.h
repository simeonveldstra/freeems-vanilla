/* FreeEMS - the open source engine management system
 *
 * Copyright 2008-2014 Fred Cooke
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
 * @ingroup allHeaders
 * @ingroup globalHeaders
 *
 * @brief Global constant declarations
 *
 * All global constants are declared in this file for use throughout the program.
 */


/* Header file multiple inclusion protection courtesy eclipse Header Template */
/* and http://gcc.gnu.org/onlinedocs/gcc-3.1.1/cpp/ C pre processor manual    */
#ifndef FILE_GLOBAL_CONSTANTS_H_SEEN
#define FILE_GLOBAL_CONSTANTS_H_SEEN


#ifdef EXTERN
#warning "EXTERN already defined by another header, please sort it out!"
#undef EXTERN /* If fail on warning is off, remove the definition such that we can redefine correctly. */
#endif


#ifdef GLOBAL_CONSTANTS_C
#define EXTERN
#else
#define EXTERN extern
#endif


#define INTERFACE_VERSION  "IFreeEMS Vanilla 0.0.0" // Migrate to come from the makefile where it can be extracted from any file with any tool.

// Sizes for array must be outside ifndef block
#define INTERFACE_VERSION_LENGTH   sizeof(INTERFACE_VERSION)
#define FIRMWARE_VERSION_LENGTH    sizeof(FIRMWARE_VERSION) + sizeof(BUILD_CONFIG) + 1
#define FIRMWARE_BUILD_DATE_LENGTH sizeof(FIRMWARE_BUILD_DATE)
#define COMPILER_VERSION_LENGTH    sizeof(__VERSION__)
#define OPERATING_SYSTEM_LENGTH    sizeof(OPERATING_SYSTEM)
#define BUILT_BY_NAME_LENGTH       sizeof(BUILT_BY_NAME)
#define SUPPORT_EMAIL_LENGTH       sizeof(SUPPORT_EMAIL)


/*&&&&&&&&&&&&&&&&&&&&&&&&&&&&& Arrays here &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

#ifndef NO_CONST_ARRAYS

/* Thermistor ADC to temperature transfer tables as generated by FreeTherm */
EXTERN const volatile unsigned short IATTransferTable[1024]; /* 2k */
EXTERN const volatile unsigned short CHTTransferTable[1024]; /* 2k */
EXTERN const volatile unsigned short MAFTransferTable[1024]; /* 2k */
EXTERN const volatile unsigned char TestTransferTable[2048]; /* 2k */


/** Serial interface unique identifier
 *
 * This should only change when the serial interface changes (even a little)
 *
 * This field consists of 3 chars for a 3 part version number and a free form string. For any unique string the version
 * number is also unique. In this way tools can easily support a range of versions for a specific unique string ID
 */
EXTERN const unsigned char interfaceVersion[INTERFACE_VERSION_LENGTH];

/** Displayable firmware version identifier
 *
 * This changes automatically every time the code is changed at all (even a little) thanks to Git.
 */
EXTERN const unsigned char firmwareVersion[FIRMWARE_VERSION_LENGTH];

EXTERN const unsigned char buildTimeAndDate[FIRMWARE_BUILD_DATE_LENGTH]; ///< When and roughly where it was built
EXTERN const unsigned char compilerVersion[COMPILER_VERSION_LENGTH];     ///< GCC supplied compiler version used to build it
EXTERN const unsigned char operatingSystem[OPERATING_SYSTEM_LENGTH];     ///< Which OS was it built on
EXTERN const unsigned char builtByName[BUILT_BY_NAME_LENGTH];            ///< Name of the person who built it
EXTERN const unsigned char supportEmail[SUPPORT_EMAIL_LENGTH];           ///< Support email for this build


/* Injection (currently used for both inj and ign) */
EXTERN const unsigned char injectorMainOnMasks[INJECTION_CHANNELS];
EXTERN const unsigned char injectorMainOffMasks[INJECTION_CHANNELS];
EXTERN const unsigned char injectorMainActiveMasks[INJECTION_CHANNELS];
EXTERN const unsigned char injectorMainEnableMasks[INJECTION_CHANNELS];
EXTERN const unsigned char injectorMainDisableMasks[INJECTION_CHANNELS];
EXTERN const unsigned char injectorMainGoHighMasks[INJECTION_CHANNELS];
EXTERN const unsigned char injectorMainGoLowMasks[INJECTION_CHANNELS];

#endif


/*&&&&&&&&&&&&&&&&&&&&&&&&&&& NON Arrays here &&&&&&&&&&&&&&&&&&&&&&&&&&&&*/

/* Main lookup tables */ // TODO volatile here or not?
EXTERN const volatile mainTable VETableMainFlash;
EXTERN const volatile mainTable VETableSecondaryFlash;
EXTERN const volatile mainTable AirflowTableFlash;
EXTERN const volatile mainTable LambdaTableFlash;

EXTERN const volatile mainTable IgnitionAdvanceTableMainFlash;
EXTERN const volatile mainTable IgnitionAdvanceTableSecondaryFlash;
EXTERN const volatile mainTable InjectionAdvanceTableMainFlash;
EXTERN const volatile mainTable InjectionAdvanceTableSecondaryFlash;

EXTERN const volatile mainTable VETableMainFlash2;
EXTERN const volatile mainTable VETableSecondaryFlash2;
EXTERN const volatile mainTable AirflowTableFlash2;
EXTERN const volatile mainTable LambdaTableFlash2;

EXTERN const volatile mainTable IgnitionAdvanceTableMainFlash2;
EXTERN const volatile mainTable IgnitionAdvanceTableSecondaryFlash2;
EXTERN const volatile mainTable InjectionAdvanceTableMainFlash2;
EXTERN const volatile mainTable InjectionAdvanceTableSecondaryFlash2;

EXTERN const volatile SmallTables1 SmallTablesAFlash;
EXTERN const volatile SmallTables2 SmallTablesBFlash;
EXTERN const volatile SmallTables3 SmallTablesCFlash;
EXTERN const volatile SmallTables4 SmallTablesDFlash;

EXTERN const volatile SmallTables1 SmallTablesAFlash2;
EXTERN const volatile SmallTables2 SmallTablesBFlash2;
EXTERN const volatile SmallTables3 SmallTablesCFlash2;
EXTERN const volatile SmallTables4 SmallTablesDFlash2;

EXTERN const volatile fixedConfig1 fixedConfigs1;
EXTERN const volatile fixedConfig2 fixedConfigs2;


/* Fueling constants */
EXTERN const unsigned long masterFuelConstant;
EXTERN const unsigned long MAFFuelConstant;


/// @todo TODO Move these to decoder interface AND rename to be more generic/meaningful/accurate, and make set by each decoder where appropriate
// These need to be changed if the timer period is changed at all
/* The number of timer units it takes for the switch on scheduling code to run */
EXTERN const unsigned short injectorSwitchOnCodeTime;
/* The number of timer units it takes for the switch off scheduling code to run */
EXTERN const unsigned short injectorSwitchOffCodeTime;


#undef EXTERN


#else
	/* let us know if we are being untidy with headers */
	#warning "Header file GLOBAL_CONSTANTS_H seen before, sort it out!"
/* end of the wrapper ifdef from the very top */
#endif