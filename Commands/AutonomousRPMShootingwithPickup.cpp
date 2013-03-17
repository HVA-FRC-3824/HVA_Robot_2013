// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.



#include "AutonomousRPMShootingwithPickup.h"
#include "SetShooterSpeed.h"
#include "SetShooterAngle.h"
#include "FrisbeeRapidShoot.h"
#include "ChassisDriveDistance.h"
#include "ChassisDriveDistanceStraight.h"
#include "FrisbeePickup.h"
#include "ChassisDriveDistanceSidewaysStrainght.h"
#include "ChassisTurnAngle.h"

#define SHOOTER_SPEED            2650.0
#define SHOOTER_ANGLE_SHOOT       340.0
#define SECOND_ANGLE			  378.0

AutonomousRPMShootingwithPickup::AutonomousRPMShootingwithPickup() {

		
	   // set the shooter angle to get below the tower
		AddParallel(new SetShooterAngle(SHOOTER_ANGLE_SHOOT), 3.0);
	   
		// start the shooter
		AddSequential(new SetShooterSpeed(SHOOTER_SPEED, true), 3.0);
	   
	   // shoot 3 Frisbees as fast as possible (it waits on the speed to be correct)
	   //AddSequential(new FrisbeeRapidShoot(3), 10.0);
	AddSequential(new WaitCommand(1.0));
	   AddSequential(new FrisbeeShoot());
	   AddSequential(new WaitCommand(0.1));
	   AddSequential(new FrisbeeShoot());
	   AddSequential(new WaitCommand(0.1));
	   AddSequential(new FrisbeeShoot());
	   
	   AddParallel(new SetShooterAngle(10.0));
	   
	   AddSequential(new ChassisDriveDistanceStraight(0.3, 0.4));
	   
	   AddSequential(new FrisbeePickup());
	   
	   AddSequential(new ChassisTurnAngle(14.0));
	   //AddSequential(new ChassisDriveDistanceSidewaysStrainght(0.1, 0.4));
	   AddSequential(new ChassisDriveDistance(.1, .4));
	   
	   AddSequential(new FrisbeePickup());
	   AddSequential(new ChassisTurnAngle(-12.0));
	   AddParallel(new SetShooterAngle(SECOND_ANGLE));
	   AddSequential(new WaitCommand(2.0));
	   AddSequential(new FrisbeeShoot());
	   AddSequential(new FrisbeeShoot());
}