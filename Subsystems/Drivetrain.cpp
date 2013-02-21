// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "../Robot.h"
#include "Drivetrain.h"
#include "../Commands/DrivetrainNormalDrive.h"
#define UNITS_TO_INCHES                0.544124212
Drivetrain::Drivetrain() : Subsystem("Drivetrain") , pidMag(0)
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	frontRight = RobotMap::drivetrainFrontRight;
	frontLeft = RobotMap::drivetrainFrontLeft;
	rearRight = RobotMap::drivetrainRearRight;
	rearLeft = RobotMap::drivetrainRearLeft;
	holonomic = RobotMap::drivetrainHolonomic;
	ultrasonicFront = RobotMap::drivetrainUltrasonicFront;
	ultrasonicRear = RobotMap::drivetrainUltrasonicRear;
	gyro = RobotMap::drivetrainGyro;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SmartDashboard::PutNumber("turn sensetivity",0.5);
}
    
void Drivetrain::InitDefaultCommand() 
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DrivetrainNormalDrive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SmartDashboard::PutNumber("turn sensitivity",0.5);
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Drivetrain::HolonomicDrive(Joystick *joystick) 
{
	// Simply passes Joystick *joystick to the drivetrain to control the robot.
	holonomic->HolonomicDrive(joystick->GetMagnitude(), 
	                          joystick->GetDirectionDegrees(),
	                          joystick->GetThrottle()*SmartDashboard::GetNumber("turn sensitivity")); 
}
void Drivetrain::HolonomicDrive(float magnitude, float direction, float rotation)
{
   // drive the robot based on the method parameters
	holonomic->HolonomicDrive(magnitude, direction, rotation);
}
void Drivetrain::HolonomicDriveReverse(Joystick *joystick)
{
	holonomic->HolonomicDrive(joystick->GetMagnitude(), 
	                         (joystick->GetDirectionDegrees() + 180),
	                          joystick->GetThrottle());
}
float Drivetrain::GetFrontDistance()
{
   // return the front ultrasonic sensor in inches
	return ultrasonicFront->GetValue() * UNITS_TO_INCHES;
}
float Drivetrain::GetRearDistance()
{
   // return the rear ultrasonic sensor in inches
	return ultrasonicRear->GetValue() * UNITS_TO_INCHES;
}
double Drivetrain::PIDGet()
{
   // return the gyro angle for the PID controller
   return Robot::drivetrain->gyro->GetAngle();
}
void Drivetrain::PIDWrite(float output)
{
   // turn the robot based on the PID controller
   holonomic->HolonomicDrive(pidMag, 0.0, output); //This PID only works for rotation
}
//{
//	return ultrasonicFront->GetValue() * UNITS_TO_INCHES;
//}
//double Drivetrain::DistanceSource::PIDGet()
//{
//   return Robot::drivetrain->GetFrontDistance();
//}
//
//void Drivetrain::TurnOutput::PIDWrite(float output)
//{
//   Robot::drivetrain->holonomic->HolonomicDrive(0.0, 0.0, output);
//}
// 
//void Drivetrain::DistanceOutput::PIDWrite(float output)
//{
//    Robot::drivetrain->holonomic->HolonomicDrive(output, 0.0, 0.0);  
//}
