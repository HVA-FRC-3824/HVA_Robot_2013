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
SetShooterAngle::SetShooterAngle(double angle_parameter) 
{
	angle = angle_parameter;
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterAngleAdjust);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	// set the boolean to indicate that the constructor with angle was called
	angleSpecifiedInConstructor = true;
}
SetShooterAngle::SetShooterAngle::SetShooterAngle()
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterAngleAdjust);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
   // set the boolean to indicate that the constructor without angle was called
	angleSpecifiedInConstructor = false;
}
// Called just before this Command runs the first time
void SetShooterAngle::Initialize() 
{
   // determine if the shooter angle should be pulled from the SmartDashboard
	if(angleSpecifiedInConstructor == false)
	{
		angle = DriverStation::GetInstance()->GetEnhancedIO().GetAnalogIn(ANALOG_SHOOTER_ADJUST);
		angle = angle * (SHOOTER_ANGLE_MAX_VALUE - SHOOTER_ANGLE_MIN_VALUE)/3.3 + SHOOTER_ANGLE_MIN_VALUE;
	}
	
	// ensure the range of the shooter angle
   if (angle > SHOOTER_ANGLE_MAX_VALUE)
	   angle = SHOOTER_ANGLE_MAX_VALUE;
   if (angle < SHOOTER_ANGLE_MIN_VALUE)
	   angle = SHOOTER_ANGLE_MIN_VALUE;
   
   // setup the PID controller
   Robot::shooterAngleAdjust->getPIDController()->SetSetpoint(angle);
   Robot::shooterAngleAdjust->getPIDController()->Enable();
}
// Called repeatedly when this Command is scheduled to run
void SetShooterAngle::Execute() 
{
	if(angleSpecifiedInConstructor == false)
	{
		angle = DriverStation::GetInstance()->GetEnhancedIO().GetAnalogIn(ANALOG_SHOOTER_ADJUST);
		angle = angle * (SHOOTER_ANGLE_MAX_VALUE - SHOOTER_ANGLE_MIN_VALUE)/3.3 + SHOOTER_ANGLE_MIN_VALUE;
		
		if (angle > SHOOTER_ANGLE_MAX_VALUE)
			angle = SHOOTER_ANGLE_MAX_VALUE;
		if (angle < SHOOTER_ANGLE_MIN_VALUE)
			angle = SHOOTER_ANGLE_MIN_VALUE;
		   
		Robot::shooterAngleAdjust->getPIDController()->SetSetpoint(angle);	
	}
	
	// <DEBUG>
	SmartDashboard::PutNumber("ShooterAngel", angle);
	// </DEBUG>
}
// Make this return true when this Command no longer needs to run execute()
bool SetShooterAngle::IsFinished() 
{
   // determine if the shooter angle is within the desired range
	return fabs(angle - Robot::shooterAngleAdjust->potentiometer->PIDGet()) < SHOOTER_ANGLE_THRESHOLD;
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
