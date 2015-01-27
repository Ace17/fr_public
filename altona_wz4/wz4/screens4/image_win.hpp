/*+**************************************************************************/
/***                                                                      ***/
/***   Copyright (C) 2005-2006 by Dierk Ohlerich                          ***/
/***   all rights reserved                                                ***/
/***                                                                      ***/
/***   To license this software, please contact the copyright holder.     ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"

/****************************************************************************/

class sImage;
class sFile;

sImage *sLoadImageWin32(sFile *file);
sImage *sLoadImageWin32(const sChar *name);

/****************************************************************************/


