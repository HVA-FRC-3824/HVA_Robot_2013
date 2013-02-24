// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#ifndef CHASSIS_DRIVE_DISTANCE_STRAIGHT_H
#define CHASSIS_DRIVE_DISTANCE_STRAIGHT_H


#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class ChassisDriveDistanceStraight: public Command, public PIDSource, public PIDOutput
{
private:
   float driveDuration;
   float drivePower;
   PIDController *PIDcontroller;
   Timer *timer;
public:
	ChassisDriveDistanceStraight(float distance, float power);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
	void PIDWrite(float output);
	double PIDGet();
};

#endif
