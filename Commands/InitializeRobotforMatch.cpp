// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "InitializeRobotforMatch.h"
#include "HangerPullDown.h"
#include "SetShooterAngle.h"
#include "SetPickupPosition.h"
#include "SetShooterSpeed.h"

InitializeRobotforMatch::InitializeRobotforMatch() 
{
	// disable the shooter
	AddParallel(new SetShooterSpeed(0.0), 3.0);
	
	// retract the Frisbee pickup
	AddParallel(new SetPickupPosition(PICKUP_HOME_POSITION), 3.0);

	// set the shooter angle
	AddParallel(new SetShooterAngle(POSITION_INITIALIZE), 3.0);
	
	// retract the hanger
	AddParallel(new HangerPullDown(), 3.0);	
}
