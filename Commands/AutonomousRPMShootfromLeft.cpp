// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "AutonomousRPMShootfromLeft.h"
#include "FrisbeeShoot.h"
#include "ChassisDriveDistance.h"
#include "ChassisTurnAngle.h"
#include "SetShooterSpeed.h"
#include "SetShooterAngle.h"
#include "FrisbeeShoot.h"

#define AUTONOMOUS_DRIVE_FORWARD_DISTANCE    2.0
#define AUTONOMOUS_TURN_ANGLE               15.0

#define SHOOTER_ANGLE                       36.9175  // 585

AutonomousRPMShootfromLeft::AutonomousRPMShootfromLeft() 
{
	// ramp the shooter speed up
	AddParallel(new SetShooterSpeed(2500, true));
	
	// set the shooter angle
	AddParallel(new SetShooterAngle(SHOOTER_ANGLE));
	
	// drive forward
	AddSequential(new ChassisDriveDistance(AUTONOMOUS_DRIVE_FORWARD_DISTANCE, DRIVING_POWER));
	   
	// turn left 
	AddSequential(new ChassisTurnAngle(AUTONOMOUS_TURN_ANGLE)); 
	
	// shoot first Frisbee
	AddSequential(new FrisbeeShoot());
	
	// wait
	AddSequential(new WaitCommand(AUTONOMOUS_SHOOT_WAIT1));
	   
	// shoot second Frisbee
	AddSequential(new FrisbeeShoot());
	
	// wait
	AddSequential(new WaitCommand(AUTONOMOUS_SHOOT_WAIT2));
	   
	// shoot third Frisbee
	AddSequential(new FrisbeeShoot());
}
