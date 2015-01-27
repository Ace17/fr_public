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
  sPainter *Painter;
  sTexture2D *Tex;
  sCSBuffer *MCMap;
  sMaterial *Mtrl;
  sGeometry *Geo;
  sVertexFormatHandle *Format;

  sViewport View;
  sMaterialEnv Env;

  sTiming Timer;
  sComputeShader *CS;
  sComputeShader *CSWC;
  sCSBuffer *CSVB;
  sCSBuffer *CSIB;
  sCSBuffer *CSCountVertex;
  sCSBuffer *CSCountIndex;
  sCSBuffer *CSIndirect;
public:
  MyApp();
  ~MyApp();
  void OnPaint3D();
  void OnInput(const sInput2Event &ie);
};

/****************************************************************************/

