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
#include "../Commands/SetShooterAngle.h"
#define DEFAULT_P_TERM              -0.01
#define DEFAULT_I_TERM              -0.000
#define DEFAULT_D_TERM              -0.0
ShooterAngleAdjust::ShooterAngleAdjust() : Subsystem("ShooterAngleAdjust") 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	potentiometer = RobotMap::shooterAngleAdjustPotentiometer;
	motor = RobotMap::shooterAngleAdjustMotor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	// set the PID controller to null to allow checking if it has been 
	// initialized in the command
	PIDcontroller = NULL;
}
    
void ShooterAngleAdjust::InitDefaultCommand() 
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
PIDController* ShooterAngleAdjust::getPIDController() {
   if (PIDcontroller == NULL)
   {
	  // initialize the PID controller
	  PIDcontroller = new PIDController(
			DEFAULT_P_TERM, DEFAULT_I_TERM, DEFAULT_D_TERM,
			potentiometer, motor);
   
	  PIDcontroller->Enable();
   }
   return PIDcontroller;
}
