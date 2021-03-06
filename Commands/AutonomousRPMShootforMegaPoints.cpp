// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "AutonomousRPMShootforMegaPoints.h"
#include "ChassisDriveDistanceStraight.h"
#include "SetShooterSpeed.h"
#include "SetShooterAngle.h"
#include "FrisbeeShoot.h"
#include "FrisbeePickup.h"

#define DRIVE_BACK_TIME                0.4
#define DRIVE_BACK_SPEED              -0.4
#define DRIVE_FORWARD_TIME             0.8
#define DRIVE_FORWARD_SPEED            0.4

#define SHOOTER_LOWER_WAIT_TIME        1.0
#define SHOOTER_RAISE_WAIT_TIME        1.0

#define SHOOTER_SPEED               2650.0

#define SHOOTER_ANGLE_SHOOT_FIRST     27.313  // 300.0
#define SHOOTER_ANGLE_TOWER_FIRST     17.203  //   0.0

#define SHOOTER_WAIT                   0.4

AutonomousRPMShootforMegaPoints::AutonomousRPMShootforMegaPoints()
{
   // backup to allow the shoot to lower
   AddSequential(new ChassisDriveDistanceStraight(DRIVE_BACK_TIME, DRIVE_BACK_SPEED));

   // start the shooter
   AddParallel(new SetShooterSpeed(SHOOTER_SPEED, true), 1.0);

   // lower the shooter to shoot
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_SHOOT_FIRST), 2.0);

   // wait for shooter to lower
   AddSequential(new WaitCommand(SHOOTER_LOWER_WAIT_TIME));

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

   // lower the shooter to go under the tower
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_TOWER_FIRST), 2.0);
	
   // drive under the tower to pickup
   AddSequential(new ChassisDriveDistanceStraight(DRIVE_FORWARD_TIME, DRIVE_FORWARD_SPEED));
	
   // pickup a frisbee
   AddSequential(new FrisbeePickup());
	
   // pickup another frisbee
   AddSequential(new FrisbeePickup());
	
   // shoot frisbee
   AddSequential(new FrisbeeShoot());
	
   // wait between shots
   AddSequential(new WaitCommand(SHOOTER_WAIT));
	
   // shoot another frisbee
   AddSequential(new FrisbeeShoot());	
}
