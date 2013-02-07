// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ShooterAngleAdjust.h"
#include "../Robotmap.h"
#include "SmartDashboard/SmartDashboard.h"
#include "LiveWindow/LiveWindow.h"
#include "../Commands/DisplayShooterAngle.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID
ShooterAngleAdjust::ShooterAngleAdjust() : PIDSubsystem("ShooterAngleAdjust", 1.0, 0.0, 0.0) {
	SetAbsoluteTolerance(0.2);
	GetPIDController()->SetContinuous(false);
	LiveWindow::GetInstance()->AddActuator("Shooter Angle Adjust", "PIDSubsystem Controller", GetPIDController());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PID
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	motor = RobotMap::shooterAngleAdjustMotor;
	potentiometer = RobotMap::shooterAngleAdjustPotentiometer;
	limitSwitchHigh = RobotMap::shooterAngleAdjustLimitSwitchHigh;
	limitSwitchLow = RobotMap::shooterAngleAdjustLimitSwitchLow;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	// Use these to get going:
	// SetSetpoint() -  Sets where the PID controller should move the system
	//    
	SetInputRange(0.0, 1.0);  // TODO
	SetSetpoint(.5);
   Enable();  // Enables the PID controller.
}
double ShooterAngleAdjust::ReturnPIDInput() 
{
	// Return your input value for the PID loop
	// e.g. a sensor, like a potentiometer:
	// yourPot->SetAverageVoltage() / kYourMaxVoltage;	
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
        return potentiometer->GetAverageVoltage();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=SOURCE
}
void ShooterAngleAdjust::UsePIDOutput(double output) 
{
	// Use output to drive your system, like a motor
	// e.g. yourMotor->Set(output);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
	motor->PIDWrite(output);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=OUTPUT
}
void ShooterAngleAdjust::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//setDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new DisplayShooterAngle());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
