// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Teleoperated.h"
Teleoperated::Teleoperated() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void Teleoperated::Initialize() 
{
}
// Called repeatedly when this Command is scheduled to run
void Teleoperated::Execute() 
{	
	// get the trhottle on the shooter joystick
	//float speed = Robot::oi->getShootJoystick()->GetThrottle();
	
	// convert the joystick range (-1 to 1) to the desired motor speed (0 to 1)
	//speed = (-speed / 2) + 0.5;
    //Robot::shooterWheelVoltage->motor->Set(speed);
   
   SmartDashboard::PutNumber("Gyro", Robot::drivetrain->gyro->GetAngle());
   SmartDashboard::PutNumber("Shooter Speed", Robot::shooterWheel->pidEncoder->PIDGet());
   SmartDashboard::PutNumber("Shooter Angle Degrees", (0.0337 * Robot::shooterAngleAdjust->potentiometer->PIDGet() + 17.203));
   SmartDashboardData("Shooter Angle in ADC", Robot::shooterAngleAdjust->potentiometer->PIDGet());
   SmartDashboard::PutNumber("Pickup Pot", Robot::pickup->potentiometer->PIDGet());
   SmartDashboard::PutNumber("Ultra Sonic", Robot::drivetrain->GetFrontDistance());

//   SmartDashboard::PutBoolean("Shooter Switch", Robot::shooterPusher->stopSwitch->Get());
//   SmartDashboard::PutNumber("Shooter Voltage", Robot::shooterWheel->motor->Get());
//   SmartDashboard::PutNumber("Pickup Voltage", Robot::pickup->motor->Get());
//   SmartDashboard::PutBoolean("Shoot Sensor", Robot::shooterPusher->stopSwitch->Get());
//   SmartDashboard::PutNumber("Shooter Velocity Sensor Count", Robot::shooterWheel->encoder->Get());
//   SmartDashboard::PutBoolean("Shooter Speed On Target", Robot::shooterWheel->getPIDController()->OnTarget());
}
// Make this return true when this Command no longer needs to run execute()
bool Teleoperated::IsFinished() 
{
	return false;
}
// Called once after isFinished returns true
void Teleoperated::End() 
{
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Teleoperated::Interrupted() 
{
   
}
