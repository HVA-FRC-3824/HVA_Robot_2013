// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef CHASSIS_TURN_ANGLE_H
#define CHASSIS_TURN_ANGLE_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "Timer.h"

/**
 * This command uses PID controls to accurately turn a set degrees.
 * This allows it to be accurate and concise without losing precision 
 * from loss of voltage.
 * 
 * @author HVA Robotics Team 3824
 */
class ChassisTurnAngle: public Command 
{	
private:
	double degreesToTurn; 
   Timer *turnTimer;
	PIDController *PIDcontroller;
	
public:
	ChassisTurnAngle(double turnAngle);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
