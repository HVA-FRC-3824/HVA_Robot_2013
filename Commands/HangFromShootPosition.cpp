// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.



#include "HangFromShootPosition.h"
#include "ChassisDriveDistanceStraight.h"
#include "ChassisTurnAngle.h"

#define DRIVE_BACK_TIME			1.5 //TODO: Find actual values for these constants.
#define DRIVE_BACK_SPEED		-0.5
#define DRIVE_FORWARD_TIME		1.5
#define DRIVE_FORWARD_SPEED		-0.8
HangFromShootPosition::HangFromShootPosition() {
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.
	AddSequential(new ChassisDriveDistanceStraight(DRIVE_BACK_TIME, DRIVE_BACK_SPEED));
	AddSequential(new ChassisTurnAngle(180)); //This is degrees, right?
	AddSequential(new ChassisDriveDistanceStraight(DRIVE_FORWARD_TIME, DRIVE_FORWARD_SPEED));
	
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
