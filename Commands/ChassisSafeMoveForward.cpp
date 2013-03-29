// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ChassisSafeMoveForward.h"
#include "AutonomousRPMShootingwithPickupFirst.h"
#include "ChassisDrivetoWallStraight.h"
#include "ChassisDriveDistanceStraight.h"
ChassisSafeMoveForward::ChassisSafeMoveForward() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	ultasonicDrive = new ChassisDrivetoWallStraight(DRIVE_UNDER_TOWER_DISTANCE, DRIVE_UNDER_TOWER_POWER);
	timeDrive = new ChassisDriveDistanceStraight(DRIVE_UNDER_TOWER_DURATION, DRIVE_UNDER_TOWER_POWER);
}
// Called just before this Command runs the first time
void ChassisSafeMoveForward::Initialize() 
{
	   // ensure the ultrasonic range finder indicates a correct position
	   // drive straight to get the first Frisbee
	   if (Robot::drivetrain->GetFrontDistance() > (DRIVE_UNDER_TOWER_DISTANCE + MINIMUM_DRIVE_DISTANCE))
	   {
		  ultasonicDrive->Start();
	      SmartDashboard::PutBoolean("Used Ultrasonic", true);
	      isUltraUsed = true;
	   }
	   else
	   {
		  timeDrive->Start();
	      SmartDashboard::PutBoolean("Used Ultrasonic", false);
	      isUltraUsed = false;
	   }
	   SmartDashboard::PutBoolean("Is ultra used", isUltraUsed);
}
// Called repeatedly when this Command is scheduled to run
void ChassisSafeMoveForward::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool ChassisSafeMoveForward::IsFinished() 
{
	if (isUltraUsed == true)
	{
		return !(ultasonicDrive->IsRunning());
	}
	else
	{
		return !(timeDrive->IsRunning());
	}
	return false;
}
// Called once after isFinished returns true
void ChassisSafeMoveForward::End() 
{
	// Stop the commands if they are running so that the time out for safe move forward will successfully work
	if(ultasonicDrive->IsRunning())
	{
		ultasonicDrive->Cancel();
	}
	if(timeDrive->IsRunning())
	{
		timeDrive->Cancel();
	}
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisSafeMoveForward::Interrupted() 
{
	End();
}
