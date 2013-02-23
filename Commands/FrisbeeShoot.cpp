// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "FrisbeeShoot.h"
#define PUSHER_TIMER                0.25
FrisbeeShoot::FrisbeeShoot() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterPusher);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	pusherTimer = new Timer();
}
// Called just before this Command runs the first time
void FrisbeeShoot::Initialize() 
{
   // start the shooter
	Robot::shooterPusher->motor->Set(Relay::kReverse);
	// reset and start the timer
	pusherTimer->Reset();
	pusherTimer->Start();
	
	// <DEBUG>
	printf("FIRE\n");
	// </DEBUG>
}
// Called repeatedly when this Command is scheduled to run
void FrisbeeShoot::Execute() 
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool FrisbeeShoot::IsFinished() 
{
   //don't read stopSwitch until we know we are off it
   if (pusherTimer->Get() > PUSHER_TIMER) 
	{
		return Robot::shooterPusher->stopSwitch->Get();
	}
  return false;
}
// Called once after isFinished returns true
void FrisbeeShoot::End() 
{
   // stop the shooter moter and the timer
	Robot::shooterPusher->motor->Set(Relay::kOff);
	pusherTimer->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FrisbeeShoot::Interrupted() 
{
	End();
}
