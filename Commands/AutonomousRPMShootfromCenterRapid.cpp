// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "AutonomousRPMShootfromCenterRapid.h"
#include "SetShooterSpeed.h"
#include "SetShooterAngle.h"
#include "FrisbeeRapidShoot.h"

#define SHOOTER_SPEED            2650.0
#define SHOOTER_ANGLE_SHOOT        27.313  // 300.0

AutonomousRPMShootfromCenterRapid::AutonomousRPMShootfromCenterRapid() 
{
   // start the shooter
   AddParallel(new SetShooterSpeed(SHOOTER_SPEED, true), 1.0);
	
   // set the shooter angle to get below the tower
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_SHOOT), 3.0);
   
   // shoot 3 Frisbees as fast as possible (it waits on the speed to be correct)
   AddSequential(new FrisbeeRapidShoot(3), 10.0);
}
