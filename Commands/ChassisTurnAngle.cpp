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
#define TURN_THRESHOLD              2.0 //works with 1 but is a bit slow
#define TURN_TIMEOUT                0.1  //time required to rest at target (avoiding just shooting through)
ChassisTurnAngle::ChassisTurnAngle() : PIDcontroller(0.0,0.0,0.0,Robot::drivetrain, Robot::drivetrain), anglePassed(false)  
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
ChassisTurnAngle::ChassisTurnAngle(double turnAngle) : degreesToTurn(turnAngle), PIDcontroller(0,0,0,Robot::drivetrain, Robot::drivetrain), anglePassed(true)
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void ChassisTurnAngle::Initialize() 
{
   
   // set the target turn position
   
    if(!anglePassed)
    	degreesToTurn = SmartDashboard::GetNumber("Chassis Turn Angle Degrees");
	goToGyro = (degreesToTurn + Robot::drivetrain->gyro->GetAngle());
	
	// setup the PID controller and enable
	PIDcontroller.SetPID(SmartDashboard::GetNumber("Chassis Turn P Term"),
		      SmartDashboard::GetNumber("Chassis Turn I Term"), 
		      SmartDashboard::GetNumber("Chassis Turn D Term"));
	PIDcontroller.SetSetpoint(goToGyro);
	PIDcontroller.Enable();
	
	turnTimer.Start();
}
// Called repeatedly when this Command is scheduled to run
void ChassisTurnAngle::Execute()
{
   
}
// Make this return true when this Command no longer needs to run execute()
bool ChassisTurnAngle::IsFinished() 
{
	
	//TODO replace timer to check that we are stopped at the angle
	if  (fabs(goToGyro - Robot::drivetrain->gyro->PIDGet()) < TURN_THRESHOLD)
	{
		return turnTimer.Get() > TURN_TIMEOUT;
	} 
	else 
	{
		turnTimer.Reset();
		return false;
	}
}
// Called once after isFinished returns true
void ChassisTurnAngle::End() 
{
   // disable the PID controller and the timer
   PIDcontroller.Disable();
   turnTimer.Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisTurnAngle::Interrupted() 
{
   End();
}
