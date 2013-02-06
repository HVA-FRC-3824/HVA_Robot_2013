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
ChassisTurnAngle::ChassisTurnAngle(float turnAngle) 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	PIDcontroller = new PIDController(
	      SmartDashboard::GetNumber("Chassis Turn P Term:"),
	      SmartDashboard::GetNumber("Chassis Turn I Term:"), 
	      SmartDashboard::GetNumber("Chassis Turn D Term:"),
	      Robot::drivetrain->gyro, Robot::drivetrain);
	// set the desired turn angle
	degreesToTurn = turnAngle;
	
}
// Called just before this Command runs the first time
void ChassisTurnAngle::Initialize() 
{
	float goToGyro = (degreesToTurn + Robot::drivetrain->gyro->GetAngle());
	PIDcontroller->SetSetpoint(goToGyro);
	PIDcontroller->SetAbsoluteTolerance(TURN_THRESHOLD);
	PIDcontroller->Enable();
}
// Called repeatedly when this Command is scheduled to run
void ChassisTurnAngle::Execute()
{
   
}
// Make this return true when this Command no longer needs to run execute()
bool ChassisTurnAngle::IsFinished() 
{
   return PIDcontroller->OnTarget();
 
}
// Called once after isFinished returns true
void ChassisTurnAngle::End() 
{
   PIDcontroller->Disable();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisTurnAngle::Interrupted() 
{
   PIDcontroller->Disable();
}
