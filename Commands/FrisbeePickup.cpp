// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "FrisbeePickup.h"
#include "SetPickupPosition.h"
#include "SetPickupSuction.h"
#include "SetShooterAngleforPickup.h"

int FrisbeePickup::PickupCount = 0;
FrisbeePickup::FrisbeePickup() 
{
	// Turn on the suction
	AddParallel(new SetPickupSuction(true));
	
	// Make sure the shooter is out of the way for the pickup
	AddSequential(new SetShooterAngleforPickup(), 1.0);
	
	// Move the arm to the pickup stage position
	//AddSequential(new SetPickupPosition(PICKUP_STAGE), 1.0);
	//AddSequential(new WaitCommand(.5));
	
	// Move the arm to the pickup position
	AddSequential(new SetPickupPosition(PICKUP_POSITION), 1.0);
	AddSequential(new WaitCommand(0.3));
	
	// Move the arm to the release position
	AddSequential(new SetPickupPosition(PICKUP_RELEASE_POSITION), 1.0);
	AddSequential(new WaitCommand(0.7));
	
	// Turn off the suction
	AddParallel(new SetPickupSuction(false));
	PickupCount++;
//	SmartDashboard::PutNumber("Pickup Counter", FrisbeePickup::PickupCount);

//	// TODO - remove for autonomous to make it quicker
//	AddSequential(new WaitCommand(0.5));
//
//	// Move the arm to the home position
//	AddSequential(new SetPickupPosition(PICKUP_HOME_POSITION), 1.0);
}
