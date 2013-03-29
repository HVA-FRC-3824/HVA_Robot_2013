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
#include "AutonomousRPMShootingwithPickupFirst.h"
#include "ChassisDrivetoWallStraight.h"
#include "ChassisSafeMoveForward.h"

AutonomousRPMShootingwithPickup::AutonomousRPMShootingwithPickup() 
{
   // set the shooter angle to get below the tower
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_BACK_OF_TOWER), 3.0);

   //Robot::MatchCount += 1;
   //SmartDashboard::PutNumber("Match Counter", Robot::MatchCount);
//   SmartDashboard::PutNumber("Shot Counter", 0);
//   SmartDashboard::PutNumber("Pickup Counter", 0);

   // start the shooter
   AddSequential(new SetShooterSpeed(SHOOTER_SPEED_BACK_OF_TOWER, true), 3.0);

   // shoot 3 Frisbees as fast as possible (it waits on the speed to be correct)
   //AddSequential(new FrisbeeRapidShoot(3), 10.0);
   // Note: Should not have to wait since the Set Shooter Spped command will
   //       not return until the shooter is up to speed
   //AddSequential(new WaitCommand(1.0));
   AddSequential(new WaitCommand(0.2));
   AddSequential(new FrisbeeShoot());
   AddSequential(new WaitCommand(0.1));
   AddSequential(new FrisbeeShoot());
   AddSequential(new WaitCommand(0.1));
   AddSequential(new FrisbeeShoot());
   
   // lower the shooter to pickup the Frisbees (basically all the way down)
   AddParallel(new SetShooterAngle(SHOOTER_ANGLE_FOR_PICKUP), 3.0);

   // ensure the ultrasonic range finder indicates a correct position
   // drive straight to get the Frisbees
   //AddSequential(new ChassisDrivetoWallStraight(DRIVE_UNDER_TOWER_DISTANCE, DRIVE_UNDER_TOWER_POWER), 3.0);
   AddSequential(new ChassisSafeMoveForward(), 3.0);
   
   // wait to allow the robot to move under the tower
   AddSequential(new WaitCommand(0.1));
   
   // pick up the Frisbee
   AddSequential(new FrisbeePickup());

   // turn and drive forward slightly to get the next Frisbee
   AddSequential(new ChassisTurnAngle(TURN_LEFT_ANGLE), 2.0);
//   AddSequential(new ChassisDriveDistance(0.08, 0.4));

   // pick up the Frisbee
   AddSequential(new FrisbeePickup());

   // turn back to the goal
   AddSequential(new ChassisTurnAngle(TURN_RIGHT_ANGLE), 2.0);
   
   // set the shooter angle for under the tower
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE_UNDER_TOWER), 3.0);

   // shoot the Frisbees
   AddSequential(new WaitCommand(0.1));
   AddSequential(new FrisbeeShoot());
   AddSequential(new WaitCommand(0.1));
   AddSequential(new FrisbeeShoot());
}
