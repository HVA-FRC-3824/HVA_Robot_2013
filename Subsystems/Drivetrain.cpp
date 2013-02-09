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
#include "../Commands/Teleoperated.h"
Drivetrain::Drivetrain() : Subsystem("Drivetrain") 
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
//	turnSource = new TurnSource();
//	turnOutput = new TurnOutput();
//	distanceSource = new DistanceSource();
//	distanceOutput = new DistanceOutput();
}
    
void Drivetrain::InitDefaultCommand() 
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new Teleoperated());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Drivetrain::HolonomicDrive(Joystick *joystick) 
{
	// Simply passes Joystick *joystick to the drivetrain to control the robot.
	holonomic->HolonomicDrive(joystick->GetMagnitude(), 360 - joystick->GetDirectionDegrees(), joystick->GetThrottle());
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
float Drivetrain::GetDistance()
{
   return ultrasonicFront->GetValue() * UNITS_TO_INCHES;
}
void Drivetrain::PIDWrite(float output)
{
   holonomic->HolonomicDrive(0.0, 0.0, output); //This PID only works for rotation
}
double Drivetrain::PIDGet()
{
	return ultrasonicFront->GetValue() * UNITS_TO_INCHES;
}
//double Drivetrain::TurnSource::PIDGet()
//{
//   return Robot::drivetrain->gyro->GetAngle();
//}
//
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
