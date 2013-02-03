// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "GotoWall.h"
GotoWall::GotoWall() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void GotoWall::Initialize() 
{
	
}
// Called repeatedly when this Command is scheduled to run
void GotoWall::Execute() 
{ 
   Robot::drivetrain->HolonomicDrive(DRIVING_POWER, DRIVING_DIRECTION, DRIVING_ROTATION); 
}
// Make this return true when this Command no longer needs to run execute()
bool GotoWall::IsFinished() 
{
   // Gets the distance to the wall in inches.
   range = Robot::drivetrain->GetFrontDistance();
   
   if(range < STOPPING_DISTANCE) // STOPPING_DISTANCE = 10.0 inches
   {
      // if the distance to the wall is less than the distance set in header file,
      // isFinished() will return true and go to End() method.
      return true;
   }
   else
   {
      return false;
   }
}
// Called once after isFinished returns true
void GotoWall::End() 
{
   Robot::drivetrain->holonomic->StopMotor();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void GotoWall::Interrupted() 
{
}
