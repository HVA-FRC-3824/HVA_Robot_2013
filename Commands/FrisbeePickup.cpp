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

#define PICKUP_POSITION		360.0
#define RELEASE_POSITION	886.0
#define HOME_POSITION		700.0

FrisbeePickup::FrisbeePickup() 
{
	// Turn on the suction
	AddSequential(new SetPickupSuction(true));
	
	// Move the arm to the pickup position
	AddSequential(new SetPickupPosition(PICKUP_POSITION), 1.0);
	AddSequential(new WaitCommand(1));
	
	// Move the arm to the release position
	AddSequential(new SetPickupPosition(RELEASE_POSITION));

	AddSequential(new WaitCommand(1));
	// Turn off the suction
	AddSequential(new SetPickupSuction(false));
	
	AddSequential(new WaitCommand(1));

	
	// Move the arm to the home position
	AddSequential(new SetPickupPosition(HOME_POSITION));

	
	
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
}
