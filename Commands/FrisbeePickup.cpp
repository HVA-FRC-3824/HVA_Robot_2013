// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "FrisbeePickup.h"
FrisbeePickup::FrisbeePickup() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::pickup);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	// instantiate a timer class
	timer = new Timer();
}
// Called just before this Command runs the first time
void FrisbeePickup::Initialize() {
//	Robot::pickup->motor->Set(1.0);
	
	timer->Reset();
	timer->Start();
}
// Called repeatedly when this Command is scheduled to run
void FrisbeePickup::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool FrisbeePickup::IsFinished() {
	if (timer->Get() > 1.0)
	{
		Robot::pickup->doubleSolenoid1->Set(DoubleSolenoid::kForward);
		return true;
	}
	
	return false;
}
// Called once after isFinished returns true
void FrisbeePickup::End() {
	timer->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FrisbeePickup::Interrupted() {
	End();
}