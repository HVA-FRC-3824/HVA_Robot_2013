// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef AUTONOMOUS_RPM_SHOOTING_WITH_PICKUP_FIRST_H
#define AUTONOMOUS_RPM_SHOOTING_WITH_PICKUP_FIRST_H

#include "Commands/CommandGroup.h"

#define DRIVE_UNDER_TOWER_DISTANCE         62.25
#define DRIVE_UNDER_TOWER_POWER             0.4
#define DRIVE_UNDER_TOWER_DURATION          0.5
#define MINIMUM_DRIVE_DISTANCE              4.0
#define TURN_LEFT_ANGLE                   -14.0
#define TURN_RIGHT_ANGLE                   16.0
#define FIRST_SHOOT_ANGLE_OFFSET           -1.0
// Note: Power above is for both ultrasonic and time based driving

/**
 *
 *
 * @author ExampleAuthor
 */
class AutonomousRPMShootingwithPickupFirst: public CommandGroup 
{
public:	
	AutonomousRPMShootingwithPickupFirst();
};

#endif
