// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "AutonomousRPMShootfromCenter.h"
#include "ChassisDriveDistanceStraight.h"
#include "SetShooterSpeed.h"
#include "SetShooterAngle.h"
#include "FrisbeeShoot.h"
 
// To shoot from behind the tower 
//    Speed: 2650
//    Angle: 

#define DRIVE_BACK_TIME             0.6
#define DRIVE_BACK_SPEED            0.4
#define DRIVE_FORWARD_TIME          0.6
#define DRIVE_FORWARD_SPEED         0.4

#define SHOOTER_LOWER_WAIT_TIME     3.0
#define SHOOTER_RAISE_WAIT_TIME     3.0

#define SHOOTER_SPEED            2900.0

#define SHOOTER_ANGLE_SHOOT       354.0
#define SHOOTER_ANGLE_TOWER         0.0

#define SHOOTER_WAIT                0.0

AutonomousRPMShootfromCenter::AutonomousRPMShootfromCenter() 
{
	printf("AutonomousRPMShootfromCenter\n");
	
   // backup to allow the shoot to lower
   AddParallel(new ChassisDriveDistanceStraight(DRIVE_BACK_TIME, -DRIVE_BACK_SPEED));
 
   // start the shooter
   AddParallel(new SetShooterSpeed(SHOOTER_SPEED, true), 3.0);
	
   // set the shooter angle to get below the tower
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_TOWER), 3.0);
   
   // wait for shooter to lower
   AddSequential(new WaitCommand(SHOOTER_LOWER_WAIT_TIME));
   
   // drive back to tower to shoot
   AddSequential(new ChassisDriveDistanceStraight(DRIVE_FORWARD_TIME, DRIVE_FORWARD_SPEED));

   // raise the shooter to shoot
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_SHOOT), 3.0);

   // wait for shooter to lower
   AddSequential(new WaitCommand(SHOOTER_RAISE_WAIT_TIME));

   // shoot 1st frisbee
   AddSequential(new FrisbeeShoot());

   // wait between shots
   AddSequential(new WaitCommand(SHOOTER_WAIT));

   // shoot 2nd frisbee
   AddSequential(new FrisbeeShoot());

   // wait between shots
   AddSequential(new WaitCommand(SHOOTER_WAIT));

   // shoot 3rd frisbee
   AddSequential(new FrisbeeShoot());

   // wait between shots
   AddSequential(new WaitCommand(SHOOTER_WAIT));

   // shoot 4rd frisbee
   AddSequential(new FrisbeeShoot());
}