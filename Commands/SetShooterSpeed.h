// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef SET_SHOOTER_SPEED_H
#define SET_SHOOTER_SPEED_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "Timer.h"
#include "../OI.h"
#include "GetShooterSpeedRPM.h"
/**
 *
 *
 * @author HVA Robotics Team 3824
 */
class SetShooterSpeed: public Command 
{
private:
   double m_shooterSpeed;
   Timer *m_shooterTimer;
   bool m_SpeedSpecifiedInConstructor;
   bool m_isRPM;
   
public:
	SetShooterSpeed(double speed, bool isRPM = true);	// For autonomous
	SetShooterSpeed();				// Get Speed From the Smart Dashboard
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
	friend class GetShooterSpeedRPM;
};

#endif
