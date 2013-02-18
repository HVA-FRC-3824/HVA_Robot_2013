// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ShooterWheel.h"
#include "../Robotmap.h"
ShooterWheel::ShooterWheel() : Subsystem("ShooterWheel")
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	motor = RobotMap::shooterWheelMotor;
	encoder = RobotMap::shooterWheelEncoder;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	
	pidEncoder = new PIDGearTooth(encoder);
	
   // set the PID controller to NULL to ensure the PID variable is "set" to
   // allow newing the controller in the first command that uses the shooter
   // wheel to ensure the PID runs
	PIDcontroller = NULL;
	
	// Set up the encoder for use.
	encoder->Start();
	encoder->SetMaxPeriod(0.2);
}
 
PIDController *ShooterWheel::getPIDController() 
{
	if (PIDcontroller==NULL) 
	{
		printf("PID Constructed %f, %f, %f\n", 
		       SmartDashboard::GetNumber("Shooter Speed P Term"),
			    SmartDashboard::GetNumber("Shooter Speed I Term"), 
				 SmartDashboard::GetNumber("Shooter Speed D Term"));
		PIDcontroller = new PIDController(
			  SmartDashboard::GetNumber("Shooter Speed P Term"),
			  SmartDashboard::GetNumber("Shooter Speed I Term"), 
			  SmartDashboard::GetNumber("Shooter Speed D Term"),
			  pidEncoder, motor);
		PIDcontroller->SetOutputRange(0.0, 1.0);
		// BAD WOLF DO NOT USE ABSOLUTETOLORANCE LOCKS UP NETWORK TABLES
		//PIDcontroller->SetAbsoluteTolerance(100);
		//PIDcontroller->SetSetpoint(0);
		//PIDcontroller->Enable();
	}
	return PIDcontroller;
}
void ShooterWheel::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void ShooterWheel::SetWheelSpeed(float voltage)
{
   // set the shooter wheel speed by voltage
   motor->Set(voltage);
}
