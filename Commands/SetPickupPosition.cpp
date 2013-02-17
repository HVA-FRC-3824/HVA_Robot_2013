// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetPickupPosition.h"
#include "math.h"
// TODO: Set MAX and MIN of pickup
#define MAX_VALUE 		958.0
#define MIN_VALUE 		360.0
#define THRESHOLD 		  5.0
SetPickupPosition::SetPickupPosition(double position_parameter)
{
	position = position_parameter;
	SmartDashboard::PutNumber("Pickup Position", position);
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::pickup);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	// Set a boolean to indicate if the position was specified in the constructor
	positionSpecifiedInConstructor = true;
}
SetPickupPosition::SetPickupPosition() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::pickup);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	SmartDashboard::PutNumber("Pickup Position", 0.0);
	positionSpecifiedInConstructor = false;
}
// Called just before this Command runs the first time
void SetPickupPosition::Initialize() 
{
	// Determine in the pickup position should be pulled from the SmartDashboard
	if (positionSpecifiedInConstructor == false)
	{
		position = SmartDashboard::GetNumber("Pickup Position");
	}
	
	// Ensure the range of the pickup
	if (position > MAX_VALUE)
		position = MAX_VALUE;
	if (position < MIN_VALUE)
		position = MIN_VALUE;
	
	// Setup the PID controller
	Robot::pickup->getPIDController()->SetSetpoint(position);
	Robot::pickup->getPIDController()->Enable();
}
// Called repeatedly when this Command is scheduled to run
void SetPickupPosition::Execute() 
{
	
}
// Make this return true when this Command no longer needs to run execute()
bool SetPickupPosition::IsFinished() 
{
	return fabs(position - Robot::pickup->potentiometer->PIDGet()) < THRESHOLD;
}
// Called once after isFinished returns true
void SetPickupPosition::End() 
{
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetPickupPosition::Interrupted() 
{
}
