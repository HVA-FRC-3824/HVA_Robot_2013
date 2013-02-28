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

#define SHOOTER_VOLTAGE                0.6
#define SHOOTER_VOLTAGE_TIMEOUT        3.0

#define SHOOTER_ANGLE                410.0
#define SHOOTER_ANGLE_TIMEOUT          3.0

#define WAIT_FOR_STABILITY             2.0
#define SHOOTER_WAIT                   0.5

AutonomousShootMiddleGoalSoft::AutonomousShootMiddleGoalSoft() 
{
   // set the sooter speed
   AddParallel(new SetShooterSpeed(SHOOTER_VOLTAGE, false), SHOOTER_VOLTAGE_TIMEOUT);

   // set the shooter angle
   AddSequential(new SetShooterAngle(SHOOTER_ANGLE), SHOOTER_ANGLE_TIMEOUT);

   // wait to ensure the shooter and angle are complete
   AddSequential(new WaitCommand(WAIT_FOR_STABILITY));

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

   // shoot 4rd frisbee in case one misfired
   AddSequential(new FrisbeeShoot());
   
   // stop the shooter
   AddSequential(new SetShooterSpeed(0.0, false)); 
}
