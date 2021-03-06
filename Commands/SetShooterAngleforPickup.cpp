// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "SetShooterAngleforPickup.h"
#include "../Robot.h"
#include "SetShooterAngle.h"

SetShooterAngleforPickup::SetShooterAngleforPickup() 
{
	Requires(Robot::shooterAngleAdjust);
}

void SetShooterAngleforPickup::Initialize()
{
   // set the shooter angle as high as possible for autonomous pickup
   // Note: The camera is not used by the operators in autonomous
	if (Robot::shooterAngleAdjust->potentiometer->PIDGet() > SHOOTER_ANGLE_MAX_PICKUP_VALUE)
	{
		AddSequential(new SetShooterAngle(SHOOTER_ANGLE_PICKUP_VALUE));
	}
}
