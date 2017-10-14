#include "OI.h"

#include <WPILib.h>

OI::OI() : control(new Joystick()) {
	// Process operator interface input here.
}

bool OI::pressButton()
{
	control->getButton();
	return pressed = true;
}

OI::~OI()
{
	delete control;
}
