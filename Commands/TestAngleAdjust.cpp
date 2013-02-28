// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "TestAngleAdjust.h"
#include "SetShooterAngle.h"
#include "ChassisDriveDistance.h"

#define DRIVING_POWER               0.2
#define DRIVING_DIRECTION           0.0
#define DRIVING_ROTATION            0.0  

TestAngleAdjust::TestAngleAdjust() 
{
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.
/*	AddSequential(new SetShooterAngle(505.0));
	AddSequential(new WaitCommand(30.0));
	AddSequential(new SetShooterAngle(555.0));
	AddSequential(new WaitCommand(30.0));
	AddSequential(new SetShooterAngle(605.0));
	AddSequential(new WaitCommand(30.0));
	AddSequential(new SetShooterAngle(655.0));
*/
	AddSequential(new ChassisDriveDistance(2.0, DRIVING_POWER));
	
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
