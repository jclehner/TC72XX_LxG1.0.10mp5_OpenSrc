/******************************************************************************
 *
 * $Id: language.h,v 1.3 2015/08/20 02:25:06 dana_tseng Exp $
 *
 * Copyright (C) 1997-2006 by Dimitri van Heesch.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation under the terms of the GNU General Public License is hereby 
 * granted. No representations are made about the suitability of this software 
 * for any purpose. It is provided "as is" without express or implied warranty.
 * See the GNU General Public License for more details.
 *
 * Documents produced by Doxygen are derivative works derived from the
 * input used in their production; they are not affected by this license.
 *
 */

#ifndef LANGUAGE_H
#define LANGUAGE_H

#include "translator.h"

extern Translator *theTranslator;
extern bool setTranslator(const char *languageName);

#endif
