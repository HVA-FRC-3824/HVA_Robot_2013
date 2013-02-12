// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "AutonomousShootfromRight.h"
#include "FrisbeeAimAndShoot.h"
#include "ChassisDriveDistance.h"
#include "ChassisTurnAngle.h"

#define AUTONOMOUS_DRIVE_FORWARD_DISTANCE   10.0
#define AUTONOMOUS_TURN_ANGLE              -15.0

AutonomousShootfromRight::AutonomousShootfromRight() 
{
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
   
   // drive forward
   AddSequential(new ChassisDriveDistance(AUTONOMOUS_DRIVE_FORWARD_DISTANCE));
   
   // turn left 
   AddSequential(new ChassisTurnAngle(AUTONOMOUS_TURN_ANGLE)); 
 
   // shoot first Frisbee
   AddSequential(new FrisbeeAimAndShoot());
   
   // shoot second Frisbee
   AddSequential(new FrisbeeAimAndShoot());
   
   // shoot third Frisbee
   AddSequential(new FrisbeeAimAndShoot());
}
