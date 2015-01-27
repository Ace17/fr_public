/*+**************************************************************************/
/***                                                                      ***/
/***   Copyright (C) 2005-2006 by Dierk Ohlerich                          ***/
/***   all rights reserved                                                ***/
/***                                                                      ***/
/***   To license this software, please contact the copyright holder.     ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types2.hpp"
#include "doc.hpp"

/****************************************************************************/

class CodecRyg : public DocCodec
{
public:
  const sChar *GetName();
  void Pack(sImage *bmp,sImageData *dxt,sInt level=1);
  void Unpack(sImage *bmp,sImageData *dxt,sInt level=1);
};

/****************************************************************************/


