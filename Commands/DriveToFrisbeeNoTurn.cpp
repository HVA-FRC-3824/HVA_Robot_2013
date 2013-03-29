// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DriveToFrisbeeNoTurn.h"
DriveToFrisbeeNoTurn::DriveToFrisbeeNoTurn() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void DriveToFrisbeeNoTurn::Initialize() {
}
// Called repeatedly when this Command is scheduled to run
void DriveToFrisbeeNoTurn::Execute() {
	Robot::drivetrain->holonomic->HolonomicDrive(0.4, 0,0);	
}
// Make this return true when this Command no longer needs to run execute()
bool DriveToFrisbeeNoTurn::IsFinished() {
	return SmartDashboard::GetNumber("Frisbee Size") >=
			  	 SmartDashboard::GetNumber("Drive to Size");
}
// Called once after isFinished returns true
void DriveToFrisbeeNoTurn::End() {
	Robot::drivetrain->holonomic->HolonomicDrive(0.0, 0,0);
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToFrisbeeNoTurn::Interrupted() {
	End();
}