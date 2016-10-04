// Copyright (c) 2016 Per Malmberg
// Licensed under MIT, see LICENSE file.
// Give credit where credit is due.

#pragma once

#include <FSM.h>
#include "AddEvent.h"
#include "SubtractEvent.h"

class EventBaseState
		: public fsm::BaseState<EventBaseState>,
		  public fsm::EventReceiver<AddEvent>,
		  public fsm::EventReceiver<SubtractEvent>
{
public:
	EventBaseState( const std::string& name, fsm::FSM<EventBaseState>& fsm ) :
			BaseState( name, fsm )
	{}

};