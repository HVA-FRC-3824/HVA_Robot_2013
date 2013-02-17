// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ChassisTurnAngle.h"
#include <math.h>
#define TURN_THRESHOLD              5.0
#define TURN_TIMEOUT                5.0
ChassisTurnAngle::ChassisTurnAngle() : anglePassed(false) 
{
	init();
}
ChassisTurnAngle::ChassisTurnAngle(double turnAngle) : degreesToTurn(turnAngle), anglePassed(true)
{
	init();
}
void ChassisTurnAngle::init() {
	// Use requires() here to declare subsystem dependencies
		// eg. requires(chassis);
		// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
		
		PIDcontroller = new PIDController(
		      SmartDashboard::GetNumber("Chassis Turn P Term"),
		      SmartDashboard::GetNumber("Chassis Turn I Term"), 
		      SmartDashboard::GetNumber("Chassis Turn D Term"),
		      Robot::drivetrain, Robot::drivetrain);
		
	   // setup a timer to ensure the command exits in a reasonable time
		turnTimer = new Timer();
}
// Called just before this Command runs the first time
void ChassisTurnAngle::Initialize() 
{
   // reset and start the timer
   turnTimer->Reset();
   turnTimer->Start();
   
   // set the target turn position
   
    if(!anglePassed)
    	goToGyro = SmartDashboard::GetNumber("Chassis Turn Angle");
	goToGyro = (degreesToTurn + Robot::drivetrain->gyro->GetAngle());
	
	// setup the PID controller and enable
	PIDcontroller->SetSetpoint(goToGyro);
	PIDcontroller->Enable();
}
// Called repeatedly when this Command is scheduled to run
void ChassisTurnAngle::Execute()
{
   
}
// Make this return true when this Command no longer needs to run execute()
bool ChassisTurnAngle::IsFinished() 
{
	return (fabs(goToGyro - Robot::drivetrain->gyro->PIDGet()) < TURN_THRESHOLD) || 
	       (turnTimer->Get() > TURN_TIMEOUT);
}
// Called once after isFinished returns true
void ChassisTurnAngle::End() 
{
   // disable the PID controller and the timer
   PIDcontroller->Disable();
   turnTimer->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisTurnAngle::Interrupted() 
{
   End();
}
