// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Drivetrain.h"
#include "../Robotmap.h"
#include "../Commands/TeleoperatedCommand.h"
Drivetrain::Drivetrain() : Subsystem("Drivetrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	frontRight = RobotMap::drivetrainFrontRight;
	frontLeft = RobotMap::drivetrainFrontLeft;
	backRight = RobotMap::drivetrainBackRight;
	backLeft = RobotMap::drivetrainBackLeft;
	holonomic = RobotMap::drivetrainHolonomic;
	ultrasonicFront = RobotMap::drivetrainUltrasonicFront;
	ultrasonicRear = RobotMap::drivetrainUltrasonicRear;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Drivetrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new TeleoperatedCommand());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Drivetrain::HolonomicDrive(Joystick *joystick) 
{
	// Simply passes Joystick *joystick to the drivetrain to control the robot.
	holonomic->HolonomicDrive(joystick->GetMagnitude(), joystick->GetDirectionDegrees(), joystick->GetThrottle());
}
void Drivetrain::HolonomicDrive(float magnitude, float direction, float rotation)
{
	holonomic->HolonomicDrive(magnitude, 360 - direction, rotation);
}
float Drivetrain::GetFrontDistance()
{
	return ultrasonicFront->GetValue() * UNITS_TO_INCHES;
}
float Drivetrain::GetRearDistance()
{
	return ultrasonicRear->GetValue() * UNITS_TO_INCHES;
}

