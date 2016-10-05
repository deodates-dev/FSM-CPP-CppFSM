// Copyright (c) 2016 Per Malmberg
// Licensed under MIT, see LICENSE file.
// Give credit where credit is due.

#pragma once


#include "StateDrivenBaseState.h"
#include "../Event/EventCounter.h"

class BState: public StateDrivenBaseState
{
public:
	BState( EventCounter& counter );
};