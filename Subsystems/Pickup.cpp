// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Pickup.h"
#include "../Robotmap.h"
Pickup::Pickup() : Subsystem("Pickup")
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	suction = RobotMap::pickupSuction;
	release = RobotMap::pickupRelease;
	motor = RobotMap::pickupMotor;
	potentiometer = RobotMap::pickupPotentiometer;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	// Set PID Controller to null initially
	PIDcontroller = NULL;
}
void Pickup::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
PIDController* Pickup:: getPIDController()
{
	if (PIDcontroller == NULL)
	{
		// initialize the PID controller
		PIDcontroller = new PIDController(
				SmartDashboard::GetNumber("Pickup P Term"),
				SmartDashboard::GetNumber("Pickup I Term"),
				SmartDashboard::GetNumber("Pickup D Term"), potentiometer, motor);
	}
}
