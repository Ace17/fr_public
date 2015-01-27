/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"
#include "base/system.hpp"

/****************************************************************************/

class sDemoPackFile : public sFileHandler
{
  struct PackHeader;

  sInt Count;
  PackHeader* Dir;
  sU8* Data;
  sFile* File;

public:
  sDemoPackFile(const sChar* name);
  ~sDemoPackFile();

  sFile* Create(const sChar* name, sFileAccess access);
};

extern sBool sProgressDoCallBeginEnd;
void sProgressBegin();
void sProgressEnd();
void sProgress(sInt done, sInt max);

/****************************************************************************/

/****************************************************************************/

