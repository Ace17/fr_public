/*+**************************************************************************/
/***                                                                      ***/
/***   This file is distributed under a BSD license.                      ***/
/***   See LICENSE.txt for details.                                       ***/
/***                                                                      ***/
/**************************************************************************+*/

#pragma once

#include "base/types.hpp"

/****************************************************************************/

// Use the sNETDEBUG_ENABLE define to remove
// all NetDebug functionality from the project.
#define sNETDEBUG_ENABLE (!sSTRIPPED)

/****************************************************************************/

#if sNETDEBUG_ENABLE
// enable debug server. Call this in sMain() before calling sInit()
void sAddDebugServer(sInt port = 80);
void sAddNetDebugLog(const sChar* host);
#else
sINLINE void sAddDebugServer(sInt port = 80)
{
}

sINLINE void sAddNetDebugLog(const sChar* host)
{
}

#endif

/****************************************************************************/

