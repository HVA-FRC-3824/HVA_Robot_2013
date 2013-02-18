// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#define PIXELTODEGREE 1 //is distance dependent. Average guess. Maybe good enough
#include "DriveToFrisbee.h"
DriveToFrisbee::DriveToFrisbee() : turnCommand(0) {
	
	//DOES NOT REQUIRE ANYTHING BECAUSE IT USES CHASSIS-TURN AS SUBCOMMAND WHICH HANDLES 
	//THE REQUIRE
	
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	SmartDashboard::PutNumber("pixel to degree",1);
}
// Called just before this Command runs the first time
void DriveToFrisbee::Initialize() {
	turnCommand.Initialize();
	pixelToDegree = SmartDashboard::GetNumber("pixel to degree");
	target = Robot::drivetrain->gyro->GetAngle()-
				SmartDashboard::GetNumber("camera offset")*pixelToDegree;
	turnCommand.PIDcontroller.SetSetpoint(target);
}
// Called repeatedly when this Command is scheduled to run
void DriveToFrisbee::Execute() {
//	target = .9*target + .1*Robot::drivetrain->gyro->GetAngle()-
//			SmartDashboard::GetNumber("camera offset")*pixelToDegree;
	
}
// Make this return true when this Command no longer needs to run execute()
bool DriveToFrisbee::IsFinished() {
	return turnCommand.IsFinished();
}
// Called once after isFinished returns true
void DriveToFrisbee::End() {
	turnCommand.End();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToFrisbee::Interrupted() {
	turnCommand.Interrupted();
}
