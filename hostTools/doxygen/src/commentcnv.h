/*****************************************************************************
 *
 * $Id: commentcnv.h,v 1.3 2015/08/20 02:25:03 dana_tseng Exp $
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

#ifndef _COMMENTCNV_H
#define _COMMNETCNV_H

class BufStr;

extern void convertCppComments(BufStr *inBuf,BufStr *outBuf,
                               const char *fileName);

#endif

