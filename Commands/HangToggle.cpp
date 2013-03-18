// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "HangToggle.h"
#include "HangerUp.h"
#include "HangerPullDown.h"
HangToggle::HangToggle() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::hang);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	m_isUp = false;
	
	m_hangUp       = new HangerUp();
	m_hangPullDown = new HangerPullDown();
}
// Called just before this Command runs the first time
void HangToggle::Initialize() 
{
	printf("HangToggle Initialize\n");
	
	printf("m_isUp: %d\n", m_isUp);
	
	// If the arms are up then pull down
	if (m_isUp == true)
	{
		printf("running m_hangPullDown\n");
		
		m_hangPullDown->Run();
		m_isUp = false;
	}
	else // The arm is down so lift up
	{
		printf("running m_hangUp\n");
		m_hangUp->Run();
		m_isUp = true;
	}
}
// Called repeatedly when this Command is scheduled to run
void HangToggle::Execute() 
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool HangToggle::IsFinished() 
{
	return true;
}
// Called once after isFinished returns true
void HangToggle::End()
{
	printf("HangToggle End\n");	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HangToggle::Interrupted() 
{
	printf("HangToggle Interrupted\n");
}
