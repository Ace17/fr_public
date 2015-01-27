/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"

class sImage;

/****************************************************************************/

namespace Wz4Audiolyzer
{
  sBool AudioAvailable();
  void RMSImage(sImage *out,sInt width,sInt height,sInt chunkSize);
  void Spectogram(sImage *out,sInt width,sInt fftSize);
}

/****************************************************************************/


