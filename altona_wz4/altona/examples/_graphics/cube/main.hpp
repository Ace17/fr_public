/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

/****************************************************************************/
/***                                                                      ***/
/***   (C) 2005 Dierk Ohlerich, all rights reserved                       ***/
/***                                                                      ***/
/****************************************************************************/

#pragma once

#include "base/system.hpp"
#include "base/graphics.hpp"
#include "util/painter.hpp"
#include "util/shaders.hpp"

/****************************************************************************/

class MyApp : public sApp
{
  sPainter* Painter;
  sTexture2D* Tex;
  sMaterial* Mtrl;
  sGeometry* Geo;

  sViewport View;
  sMaterialEnv Env;

  sTiming Timer;

public:
  MyApp();
  ~MyApp();
  void OnPaint3D();
  void OnInput(const sInput2Event& ie);
};

/****************************************************************************/

