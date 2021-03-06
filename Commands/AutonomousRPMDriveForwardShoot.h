// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef AUTONOMOUS_RPM_DRIVE_FORWARD_SHOOT_H
#define AUTONOMOUS_RPM_DRIVE_FORWARD_SHOOT_H

#include "Commands/CommandGroup.h"
#include "ChassisDriveDistanceStraight.h"
#include "SetShooterSpeed.h"
#include "FrisbeeShoot.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class AutonomousRPMDriveForwardShoot: public CommandGroup {
private:
	double power;
	double duration;
	double shooterSpeed;
public:	
	AutonomousRPMDriveForwardShoot();

};

#endif
