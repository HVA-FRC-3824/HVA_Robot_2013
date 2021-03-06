// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef CYPRESS_GOTO_POSITION_TEST_H
#define CYPRESS_GOTO_POSITION_TEST_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

/**
 * Set shooter angle and speed based on input board
 */
class CypressGotoPosition: public Command 
{
private:
	double m_angle;
	double m_velocity;
	double m_isRPM;
	Command *setShooterAngle;
	Command *setShooterSpeed;
public:
	CypressGotoPosition();
	CypressGotoPosition(double angle, double velocity, bool isRPM = true);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
