// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetShooterAngle.h"
#include <math.h>
#define SHOOTER_ANGLE_THRESHOLD      0.1
#define SHOOTER_ANGLE_HOME         575.0

#define MAX_VALUE	               637.0
#define MIN_VALUE 				   505.0

#define THRESHOLD 1.0
SetShooterAngle::SetShooterAngle(double angle_parameter) 
{
	angle = angle_parameter;
	SmartDashboard::PutNumber("Shooter Angle:", angle);
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterAngleAdjust);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	angleSpecifiedInConstructor = true;
}
SetShooterAngle::SetShooterAngle::SetShooterAngle()
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterAngleAdjust);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	SmartDashboard::PutNumber("Shooter Angle:", 0.0);
	angleSpecifiedInConstructor = false;
}
// Called just before this Command runs the first time
void SetShooterAngle::Initialize() 
{
	if(angleSpecifiedInConstructor == false)
	{
		angle = SmartDashboard::GetNumber("Shooter Angle:");
	}
   if (angle > MAX_VALUE)
	   angle = MAX_VALUE;
   if (angle < 505)
	   angle = MIN_VALUE;

   // setup the PID controller
  Robot::shooterAngleAdjust->getPIDController()->SetSetpoint(angle);
  Robot::shooterAngleAdjust->getPIDController()->Enable();
}
// Called repeatedly when this Command is scheduled to run
void SetShooterAngle::Execute() 
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool SetShooterAngle::IsFinished() 
{
   // default command, so always return false (never ends)
	return fabs(angle - Robot::shooterAngleAdjust->potentiometer->PIDGet()) < THRESHOLD;
}
// Called once after isFinished returns true
void SetShooterAngle::End() 
{
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooterAngle::Interrupted() 
{
}
