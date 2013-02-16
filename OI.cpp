// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "OI.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/AutonomousDoNothing.h"
#include "Commands/AutonomousShootfromCenter.h"
#include "Commands/AutonomousShootfromLeft.h"
#include "Commands/AutonomousShootfromRight.h"
#include "Commands/ChassisDriveDistance.h"
#include "Commands/ChassisDrivetoWall.h"
#include "Commands/ChassisTurnAngle.h"
#include "Commands/Climb.h"
#include "Commands/ClimbAbort.h"
#include "Commands/ClimberExtend.h"
#include "Commands/ClimberRetract.h"
#include "Commands/DisplayPumpStatus.h"
#include "Commands/FrisbeeAimAndShoot.h"
#include "Commands/FrisbeeShoot.h"
#include "Commands/HookDowntoLimit.h"
#include "Commands/HookEngage.h"
#include "Commands/HookUptoEngage.h"
#include "Commands/HookUptoLimit.h"
#include "Commands/SetShooterAngle.h"
#include "Commands/SetShooterAngleJoystick.h"
#include "Commands/SetShooterSpeed.h"
#include "Commands/SetShooterSpeedJoystick.h"
#include "Commands/Teleoperated.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI() 
{
	// Process operator interface input here.
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	shootJoystick = new Joystick(2);
	
	shootDiskButton = new JoystickButton(shootJoystick, 1);
	shootDiskButton->WhenPressed(new FrisbeeShoot());
	driveJoystick = new Joystick(1);
	
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Shoot from Center", new AutonomousShootfromCenter());
	SmartDashboard::PutData("Autonomous Shoot from Right", new AutonomousShootfromRight());
	SmartDashboard::PutData("Autonomous Shoot from Left", new AutonomousShootfromLeft());
	SmartDashboard::PutData("Chassis Drive to Wall", new ChassisDrivetoWall());
	SmartDashboard::PutData("Climb", new Climb());
	SmartDashboard::PutData("Climb Abort", new ClimbAbort());
	SmartDashboard::PutData("Climber Extend", new ClimberExtend());
	SmartDashboard::PutData("Climber Retract", new ClimberRetract());
	SmartDashboard::PutData("Display Pump Status", new DisplayPumpStatus());
	SmartDashboard::PutData("Frisbee Aim And Shoot", new FrisbeeAimAndShoot());
	SmartDashboard::PutData("Frisbee Shoot", new FrisbeeShoot());
	SmartDashboard::PutData("Hook Down to Limit", new HookDowntoLimit());
	SmartDashboard::PutData("Hook Engage", new HookEngage());
	SmartDashboard::PutData("Hook Up to Engage", new HookUptoEngage());
	SmartDashboard::PutData("Hook Up to Limit", new HookUptoLimit());
	SmartDashboard::PutData("Set Shooter Angle Joystick", new SetShooterAngleJoystick());
	SmartDashboard::PutData("Set Shooter Speed Joystick", new SetShooterSpeedJoystick());
	SmartDashboard::PutData("Teleoperated", new Teleoperated());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getShootJoystick() {
	return shootJoystick;
}
Joystick* OI::getDriveJoystick() {
	return driveJoystick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
