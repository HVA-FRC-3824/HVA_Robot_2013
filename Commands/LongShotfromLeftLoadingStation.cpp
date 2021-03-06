// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#include "LongShotfromLeftLoadingStation.h"
#include "SetShooterAngle.h"
#include "SetShooterSpeed.h"
#include "ChassisDriveDistanceStraight.h"
#include "ChassisTurnAngle.h"
#include "FrisbeeShoot.h"

#define BACK_UP_SPEED        -0.2
#define BACK_UP_TIME          0.5
#define ROTATE_ANGLE       -150.0
#define SHOOTER_ANGLE        18.0455  // 25.0
#define SHOOTER_SPEED      3600.0

LongShotfromLeftLoadingStation::LongShotfromLeftLoadingStation()
{
	AddParallel(new SetShooterAngle(SHOOTER_ANGLE));
	AddParallel(new SetShooterSpeed(SHOOTER_SPEED, true));
	AddSequential(new ChassisDriveDistanceStraight(BACK_UP_TIME, BACK_UP_SPEED));
	AddSequential(new ChassisTurnAngle(ROTATE_ANGLE));
	AddSequential(new FrisbeeShoot()); //TODO: Actually shoot all four frisbees
	AddSequential(new ChassisTurnAngle(-ROTATE_ANGLE));
	AddSequential(new ChassisDriveDistanceStraight(-BACK_UP_TIME, BACK_UP_SPEED));
}
