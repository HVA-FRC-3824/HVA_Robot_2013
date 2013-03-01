// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "AutonomousShootMiddleGoalSoft.h"
#include "SetShooterSpeed.h"
#include "SetShooterAngle.h"
#include "FrisbeeShoot.h"

AutonomousShootMiddleGoalSoft::AutonomousShootMiddleGoalSoft() {
	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//      AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// ramp the shooter speed up
	AddSequential(new SetShooterSpeed(1.0, false), 1.0);
	AddSequential(new WaitCommand(1.0));
	
	AddParallel(new SetShooterSpeed(0.66, false), 3.0);
	
	// set the shooter angle
	AddSequential(new SetShooterAngle(434), 3.0);
	
	AddSequential(new WaitCommand(4.0));
	
	// shoot 1st frisbee
   AddSequential(new FrisbeeShoot());
   
   // Slow the next shoots down
   //AddParallel(new SetShooterSpeed(0.5, false), 3.0);
    
   // wait
   AddSequential(new WaitCommand(AUTONOMOUS_SHOOT_WAIT1));
    
   // shoot 2nd frisbee
   AddSequential(new FrisbeeShoot());
    
   // wait
   AddSequential(new WaitCommand(AUTONOMOUS_SHOOT_WAIT2));
    
   // shoot 3rd frisbee
   AddSequential(new FrisbeeShoot());
   
   // wait
   AddSequential(new WaitCommand(AUTONOMOUS_SHOOT_WAIT2));
    
   // shoot 4rd frisbee
   AddSequential(new FrisbeeShoot());
}
