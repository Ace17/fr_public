/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"
#include "main.hpp"

/****************************************************************************/

class SoloPong
{
  sInt FlashTimer;

public:
  SoloPong();
  ~SoloPong();

  void OnTick();
  void OnPaint();

  sString<256> ScoreString;
};

/****************************************************************************/

