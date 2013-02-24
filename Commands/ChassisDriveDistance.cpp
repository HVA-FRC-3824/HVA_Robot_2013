// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ChassisDriveDistance.h"
ChassisDriveDistance::ChassisDriveDistance(float duration, float power) 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	// get the drive duration
	driveDuration = duration;
	drivePower = power;
	timer = new Timer();
}
// Called just before this Command runs the first time
void ChassisDriveDistance::Initialize() 
{
	Robot::drivetrain->HolonomicDrive(drivePower, DRIVING_DIRECTION, DRIVING_ROTATION);
	timer->Reset();
	timer->Start();
}
// Called repeatedly when this Command is scheduled to run
void ChassisDriveDistance::Execute() 
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool ChassisDriveDistance::IsFinished() 
{
   // determine when the drive time has expired
	if (timer->Get() >= driveDuration)
		return true;
	
	return false;
}
// Called once after isFinished returns true
void ChassisDriveDistance::End() 
{
   // stop the motor and time
   Robot::drivetrain->holonomic->StopMotor();
	timer->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisDriveDistance::Interrupted() 
{
   End();
}
