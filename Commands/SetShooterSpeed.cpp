// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetShooterSpeed.h"
SetShooterSpeed::SetShooterSpeed(double speed) 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterWheel);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	shooterSpeed = speed;
}
// Called just before this Command runs the first time
void SetShooterSpeed::Initialize() 
{
	Robot::shooterWheel->getPIDController()->SetSetpoint(1/(shooterSpeed/60)); //RPM to Period in s:
	SmartDashboard::PutNumber("Shooter speed", shooterSpeed);
}
// Called repeatedly when this Command is scheduled to run
void SetShooterSpeed::Execute() 
{
	SmartDashboard::PutNumber("Shooter Speed Output", Robot::shooterWheel->getPIDController()->Get());
}

// Make this return true when this Command no longer needs to run execute()
bool SetShooterSpeed::IsFinished() 
{
	 return Robot::shooterWheel->getPIDController()->OnTarget();
}
// Called once after isFinished returns true
void SetShooterSpeed::End() 
{
	//not disabling because we always want the shooter to keep running
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooterSpeed::Interrupted()
{
	//not disabling because we always want the shooter to keep running
	//ideally when interrupting it should reset to previous value but is probably overkill
}
