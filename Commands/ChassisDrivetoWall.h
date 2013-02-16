// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#ifndef CHASSIS_DRIVE_TO_WALL_H
#define CHASSIS_DRIVE_TO_WALL_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

//TODO: Add a command which drives to feeder station and aligns to slot.

/**
 * 
 * Drives to STOPPING_DISTANCE without PID
 * 
 * @author HVA Robotics Team 3824
 */
class ChassisDrivetoWall: public Command 
{
private:
	
public:
	ChassisDrivetoWall();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	double distance;
};

#endif
