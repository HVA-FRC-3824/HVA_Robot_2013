// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetPickupVoltage.h"
SetPickupVoltage::SetPickupVoltage() 
{
	SetPickupVoltage(0.0);
}
SetPickupVoltage::SetPickupVoltage(double voltage) 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::pickup);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	m_voltage = voltage;
}
// Called just before this Command runs the first time
void SetPickupVoltage::Initialize() 
{
	Robot::pickup->motor->Set(m_voltage);
}
// Called repeatedly when this Command is scheduled to run
void SetPickupVoltage::Execute() 
{	
}
// Make this return true when this Command no longer needs to run execute()
bool SetPickupVoltage::IsFinished() 
{
	return true;
}
// Called once after isFinished returns true
void SetPickupVoltage::End() 
{
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetPickupVoltage::Interrupted() 
{
}
