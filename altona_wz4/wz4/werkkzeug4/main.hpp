/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"
#include "wz4lib/gui.hpp"

/****************************************************************************/

class Wz4FrMainWindow : public MainWindow
{
protected:
  void ExtendWireRegister();
  void ExtendWireProcess();

public:
  void CmdCustomEditor();
  void CmdCustomEditor2();
};

/****************************************************************************/

