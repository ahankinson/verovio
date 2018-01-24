/////////////////////////////////////////////////////////////////////////////
// Name:        pgfoot.cpp
// Author:      Laurent Pugin
// Created:     2017
// Copyright (c) Authors and others. All rights reserved.
/////////////////////////////////////////////////////////////////////////////

#include "pgfoot.h"

//----------------------------------------------------------------------------

#include <assert.h>

//----------------------------------------------------------------------------

#include "vrv.h"

namespace vrv {

//----------------------------------------------------------------------------
// PgFoot
//----------------------------------------------------------------------------

PgFoot::PgFoot() : RunningElement("pgfoot-")
{
    Reset();
}

PgFoot::~PgFoot()
{
}

void PgFoot::Reset()
{
    RunningElement::Reset();
}

//----------------------------------------------------------------------------
// Functor methods
//----------------------------------------------------------------------------

} // namespace vrv
