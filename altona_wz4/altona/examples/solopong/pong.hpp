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
  sF32 BallX;
  sF32 BallY;
  sF32 SpeedX;
  sF32 SpeedY;
  sF32 PaddleA;
  sF32 PaddleB;
  sF32 PaddleSize;
  sF32 Speedup;
  sInt Lives;
  sInt DeathTimer;
  sInt Score;

public:
  SoloPong();
  ~SoloPong();
  void Reset();
  void OnTick();
  void OnPaint();

  sString<256> ScoreString;
};

/****************************************************************************/

