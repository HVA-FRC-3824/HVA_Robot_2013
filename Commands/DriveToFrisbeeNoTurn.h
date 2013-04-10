// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef DRIVE_TO_FRISBEE_NO_TURN_H
#define DRIVE_TO_FRISBEE_NO_TURN_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DriveToFrisbeeNoTurn:  public Command, public PIDSource, public PIDOutput
{
private:
   bool braking;
   float drivePower;
   PIDController *PIDcontroller;
   Timer *timer;
public:
	DriveToFrisbeeNoTurn(double power);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	
	void PIDWrite(float output);
	double PIDGet();
};

#endif
