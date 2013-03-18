// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ChassisDriveDistanceSidewaysStrainght.h"
#define CENTER_DURATION 2.0
ChassisDriveDistanceSidewaysStrainght::ChassisDriveDistanceSidewaysStrainght(float duration, float power) 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::drivetrain);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	PIDcontroller = new PIDController(0.0, 0.0, 0.0, this, this);
	
	// get the drive duration
	driveDuration = duration;
	drivePower = power;
	timer = new Timer();
}
// Called just before this Command runs the first time
void ChassisDriveDistanceSidewaysStrainght::Initialize() 
{
	PIDcontroller->SetPID(0.04, 0.004, 0.04);
	
	PIDcontroller->SetSetpoint(PIDGet());
	PIDcontroller->Enable();
	
	timer->Reset();
	timer->Start();
}
// Called repeatedly when this Command is scheduled to run
void ChassisDriveDistanceSidewaysStrainght::Execute() {
	
}
// Make this return true when this Command no longer needs to run execute()
bool ChassisDriveDistanceSidewaysStrainght::IsFinished() 
{
	   // determine when the drive time has expired
		if (timer->Get() >= driveDuration)
			if (timer->Get() >= driveDuration + CENTER_DURATION)
				return true;
		
		return false;
}
// Called once after isFinished returns true
void ChassisDriveDistanceSidewaysStrainght::End() 
{
	// Stop the PID
	PIDcontroller->Disable();
	
	// stop the motor and time
	Robot::drivetrain->holonomic->StopMotor();
	timer->Stop();
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ChassisDriveDistanceSidewaysStrainght::Interrupted() {
	End();
}
double ChassisDriveDistanceSidewaysStrainght::PIDGet()
{
	return Robot::drivetrain->gyro->PIDGet();
}
void ChassisDriveDistanceSidewaysStrainght::PIDWrite(float output)
{
	if (timer->Get() < driveDuration)
		Robot::drivetrain->HolonomicDrive(drivePower, 90.0, output);
	else
		Robot::drivetrain->HolonomicDrive(0.0, 90.0, output);
}
