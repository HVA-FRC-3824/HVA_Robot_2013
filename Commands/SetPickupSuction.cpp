// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetPickupSuction.h"
SetPickupSuction::SetPickupSuction() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
//	suctionSetInConstructor = false;
//	SmartDashboard::PutBoolean("Pickup Suction", Robot::pickup->suction->Get());
	suction = false;
}
SetPickupSuction::SetPickupSuction(bool suction_parameter)
{
	suction = suction_parameter;
//	suctionSetInConstructor = true;
}
// Called just before this Command runs the first time
void SetPickupSuction::Initialize() 
{
//	// Check if the suction is already set
//	if(suctionSetInConstructor == false)
//	{
//		suction = SmartDashboard::GetBoolean("Pickup Suction");
//	}
	
	Robot::pickup->suction->Set(suction);
	if(suction == false)
	{
		Robot::pickup->releaseSuction->Set(true);
	}
	
	// <DEBUG>
//	SmartDashboard::PutNumber("Pickup Suction", suction);
	// </DEBUG>
}
// Called repeatedly when this Command is scheduled to run
void SetPickupSuction::Execute()
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool SetPickupSuction::IsFinished()
{
	return true;
}
// Called once after isFinished returns true
void SetPickupSuction::End() 
{
	if(suction == false)
	{
		Robot::pickup->releaseSuction->Set(false);
	}
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetPickupSuction::Interrupted()
{
}
