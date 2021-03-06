/*****************************************************************************
 * Copyright (c) 2014 Ted John, Peter Hill
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * This file is part of OpenRCT2.
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *****************************************************************************/

#ifndef CURRENCY_H
#define CURRENCY_H

#include "../common.h"

// List of currencies
typedef enum {
	CURRENCY_POUNDS,			// British Pound
	CURRENCY_DOLLARS,			// US Dollar
	CURRENCY_FRANC,				// French Franc
	CURRENCY_DEUTSCHMARK,		// Deutsche Mark
	CURRENCY_YEN,				// Japanese Yen
	CURRENCY_PESETA,			// Spanish Peseta
	CURRENCY_LIRA,				// Italian Lira
	CURRENCY_GUILDERS,			// Dutch Gilder
	CURRENCY_KRONA,				// Swedish Krona
	CURRENCY_EUROS,				// Euro
	CURRENCY_WON,				// South Korean Won
	CURRENCY_ROUBLE,			// Russian Rouble
	CURRENCY_CZECH_KORUNA,		// Czech koruna
	CURRENCY_HKD,			// Hong Kong Dollar
	CURRENCY_TWD,			// New Taiwan Dollar
	CURRENCY_YUAN,			// Chinese Yuan

	CURRENCY_END				// Last item
} CURRENCY_TYPE;

typedef enum {
	CURRENCY_PREFIX,
	CURRENCY_SUFFIX
} CURRENCY_AFFIX;

#define CURRENCY_SYMBOL_MAX_SIZE 8

// Currency format specification - inspired by OpenTTD
typedef struct {
	char isoCode[4];
	// Rate is relative to 0.10 GBP
	int rate;
	uint8 affix_unicode;
	utf8 symbol_unicode[CURRENCY_SYMBOL_MAX_SIZE];
	uint8 affix_ascii;
	char symbol_ascii[CURRENCY_SYMBOL_MAX_SIZE];
	rct_string_id stringId;
} currency_descriptor;

// List of currency formats
extern const currency_descriptor CurrencyDescriptors[CURRENCY_END];

#endif
