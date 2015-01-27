/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"
#include "base/system.hpp"
#include "base/graphics.hpp"
#include "util/painter.hpp"
#include "util/shaders.hpp"

#include "extra/mcubes.hpp"
#include "extra/freecam.hpp"

/****************************************************************************/

class MyApp : public sApp
{
  sPainter *Painter;
  sTexture2D *Tex;
  sMaterial *Mtrl;
  sMaterialEnv Env;
  sTiming Timer;
  sBool EnableDraw;
  sBool EnableMon;
  sInt Gran;

  sFreeflightCamera Cam;
  MarchingCubes *MC;

public:
  MyApp();
  ~MyApp();
  void OnPaint3D();
  void OnInput(const sInput2Event &ie);
};


/****************************************************************************/


