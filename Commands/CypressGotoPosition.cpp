// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "CypressGotoPosition.h"
#include "SetShooterAngle.h"
#include "SetShooterSpeed.h"
CypressGotoPosition::CypressGotoPosition() 
{
	CypressGotoPosition(0.0,0.0);
}
CypressGotoPosition::CypressGotoPosition(double angle, double velocity, bool isRPM)
{
	// Read in the parameters and store them
	m_angle = angle;
	m_velocity = velocity;
	m_isRPM = isRPM;
	setShooterAngle = NULL;
	setShooterSpeed = NULL;
}
// Called just before this Command runs the first time
void CypressGotoPosition::Initialize() 
{
	// Check to see if automated shooter position
	if (!(DriverStation::GetInstance()->GetEnhancedIO().GetDigital(INPUT_SHOOTER_ANGLE_ADJUSTMENT_MANUAL)) == false)
	{
		if (setShooterAngle == NULL || !setShooterAngle->IsRunning())
		{
			// If the command is created delete
			if(setShooterAngle != NULL)
			{
				delete(setShooterAngle);
			}
			setShooterAngle = new SetShooterAngle(m_angle);
			setShooterAngle->Start();
		}
		else
		{
			setShooterAngle->Cancel();
		}
	}
	
	// Check to see if automated shooter speed
	if (!(DriverStation::GetInstance()->GetEnhancedIO().GetDigital(INPUT_SHOOTER_SPEED_ADJUSTMENT_MANUAL)) == false)
	{
		if (setShooterSpeed == NULL || !setShooterSpeed->IsRunning())
		{
			// If the command is created delete
			if(setShooterSpeed != NULL)
			{
				delete(setShooterSpeed);
			}
			
			setShooterSpeed = new SetShooterSpeed(m_velocity, m_isRPM);
			setShooterSpeed->Start();
		}
		else
		{
			setShooterSpeed->Cancel();
		}
	}
}
// Called repeatedly when this Command is scheduled to run
void CypressGotoPosition::Execute() 
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool CypressGotoPosition::IsFinished() 
{
	return true;
}
// Called once after isFinished returns true
void CypressGotoPosition::End() 
{
   
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CypressGotoPosition::Interrupted() 
{
	End();
}
