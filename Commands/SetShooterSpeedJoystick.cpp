// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetShooterSpeedJoystick.h"
SetShooterSpeedJoystick::SetShooterSpeedJoystick() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterWheel);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void SetShooterSpeedJoystick::Initialize() {
	
}
// Called repeatedly when this Command is scheduled to run
void SetShooterSpeedJoystick::Execute() {
	double shooterSpeed = Robot::oi->getDriveJoystick()->GetAxis(Joystick::kThrottleAxis);
	shooterSpeed = (shooterSpeed+1)*2500; //convert from Joystick -1..1 to RPM 0..5000
	Robot::shooterWheel->getPIDController()->SetSetpoint(1/(shooterSpeed/60));
	SmartDashboard::PutNumber("Shooter Period", Robot::shooterWheel->encoder->GetPeriod());
	SmartDashboard::PutNumber("Shooter speed", shooterSpeed);
	SmartDashboard::PutNumber("Shooter Speed Output", Robot::shooterWheel->getPIDController()->Get());
}
// Make this return true when this Command no longer needs to run execute()
bool SetShooterSpeedJoystick::IsFinished() {
	return false; //never finishes (always waiting on changed Joystick input)
}
// Called once after isFinished returns true
void SetShooterSpeedJoystick::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooterSpeedJoystick::Interrupted() {
}
