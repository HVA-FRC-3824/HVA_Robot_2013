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
#include "Commands/ButtonTest.h"
#include "Commands/ChassisDriveDistance.h"
#include "Commands/ChassisDrivetoWall.h"
#include "Commands/ChassisTurnAngle.h"
#include "Commands/Climb.h"
#include "Commands/ClimbAbort.h"
#include "Commands/ClimberExtend.h"
#include "Commands/ClimberRetract.h"
#include "Commands/CypressGotoPosition.h"
#include "Commands/DisplayPumpStatus.h"
#include "Commands/DriveToFrisbee.h"
#include "Commands/DrivetrainNormalDrive.h"
#include "Commands/DrivetrainReverseDrive.h"
#include "Commands/FrisbeeAim.h"
#include "Commands/FrisbeeAimAndShoot.h"
#include "Commands/FrisbeePickup.h"
#include "Commands/FrisbeeShoot.h"
#include "Commands/HookDowntoLimit.h"
#include "Commands/HookEngage.h"
#include "Commands/HookUptoEngage.h"
#include "Commands/HookUptoLimit.h"
#include "Commands/SetPickupPosition.h"
#include "Commands/SetPickupSuction.h"
#include "Commands/SetShooterAngle.h"
#include "Commands/SetShooterAngleJoystick.h"
#include "Commands/SetShooterAngleforPickup.h"
#include "Commands/SetShooterSpeed.h"
#include "Commands/SetShooterSpeedJoystick.h"
#include "Commands/Teleoperated.h"
#include "Commands/TestAngleAdjust.h"
#include "Commands/UpdateShooterPID.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI()
{
	// Process operator interface input here.
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	shootJoystick = new Joystick(2);
	
	shootDiskButton = new JoystickButton(shootJoystick, 1);
	shootDiskButton->WhenPressed(new FrisbeeShoot());
	driveJoystick = new Joystick(1);
	
	reverseDrive = new JoystickButton(driveJoystick, 1);
	reverseDrive->WhileHeld(new DrivetrainReverseDrive());
	digitalButton1 = new DigitalIOButton(1);
	digitalButton1->WhileHeld(new AutonomousCommand());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Autonomous Shoot from Center", new AutonomousShootfromCenter());
	SmartDashboard::PutData("Autonomous Shoot from Right", new AutonomousShootfromRight());
	SmartDashboard::PutData("Autonomous Shoot from Left", new AutonomousShootfromLeft());
	SmartDashboard::PutData("Chassis Drive to Wall", new ChassisDrivetoWall());
	SmartDashboard::PutData("Chassis Turn Angle", new ChassisTurnAngle());
	SmartDashboard::PutData("Climb", new Climb());
	SmartDashboard::PutData("Climb Abort", new ClimbAbort());
	SmartDashboard::PutData("Climber Extend", new ClimberExtend());
	SmartDashboard::PutData("Climber Retract", new ClimberRetract());
	SmartDashboard::PutData("Display Pump Status", new DisplayPumpStatus());
	SmartDashboard::PutData("Frisbee Aim", new FrisbeeAim());
	SmartDashboard::PutData("Frisbee Aim And Shoot", new FrisbeeAimAndShoot());
	SmartDashboard::PutData("Frisbee Shoot", new FrisbeeShoot());
	SmartDashboard::PutData("Hook Down to Limit", new HookDowntoLimit());
	SmartDashboard::PutData("Hook Engage", new HookEngage());
	SmartDashboard::PutData("Hook Up to Engage", new HookUptoEngage());
	SmartDashboard::PutData("Hook Up to Limit", new HookUptoLimit());
	SmartDashboard::PutData("Set Shooter Angle", new SetShooterAngle());
	SmartDashboard::PutData("Set Shooter Angle Joystick", new SetShooterAngleJoystick());
	SmartDashboard::PutData("Set Shooter Speed", new SetShooterSpeed());
	SmartDashboard::PutData("Set Shooter Speed Joystick", new SetShooterSpeedJoystick());
	SmartDashboard::PutData("Teleoperated", new Teleoperated());
	SmartDashboard::PutData("UpdateShooterPID", new UpdateShooterPID());
	SmartDashboard::PutData("Test Angle Adjust", new TestAngleAdjust());
	SmartDashboard::PutData("Set Pickup Position", new SetPickupPosition());
	SmartDashboard::PutData("Set Pickup Suction", new SetPickupSuction());
	SmartDashboard::PutData("Drive To Frisbee", new DriveToFrisbee());
	SmartDashboard::PutData("Frisbee Pickup", new FrisbeePickup());
	SmartDashboard::PutData("Cypress Goto Position", new CypressGotoPosition());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	// Constructor for DriverStationButtons
	m_pickupUp = new DigitalIOButton(INPUT_PICKUP_UP);
	m_pickupDown = new DigitalIOButton(INPUT_PICKUP_DOWN);
	m_shooterAngleAdjustmentManual = new DigitalIOButton(INPUT_SHOOTER_ANGLE_ADJUSTMENT_MANUAL);
	m_shooterSpeedAdjustmentManual = new DigitalIOButton(INPUT_SHOOTER_SPEED_ADJUSTMENT_MANUAL);
	m_frisbeeShoot = new DigitalIOButton(INPUT_FRISBEE_SHOOT);
	m_pickupHome = new DigitalIOButton(INPUT_PICKUP_HOME);
	m_pickup = new DigitalIOButton(INPUT_PICKUP);
	m_shooterStop = new DigitalIOButton(INPUT_SHOOTER_STOP);
	m_shooterPosition_1 = new DigitalIOButton(INPUT_SHOOTER_POSITION_1);
	m_shooterPosition_2 = new DigitalIOButton(INPUT_SHOOTER_POSITION_2);
	m_shooterPosition_3 = new DigitalIOButton(INPUT_SHOOTER_POSITION_3);
	m_shooterPosition_4 = new DigitalIOButton(INPUT_SHOOTER_POSITION_4);
	m_pickupSuction = new DigitalIOButton(INPUT_PICKUP_SUCTION);
	
	// Command assignment for DriverStationButtons
	m_pickupUp->WhenPressed(new SetPickupPosition(PICKUP_MAX_VALUE));
	m_pickupDown->WhenPressed(new SetPickupPosition(PICKUP_MIN_VALUE));	
	m_shooterAngleAdjustmentManual->WhileHeld(new SetShooterAngle());
	m_shooterSpeedAdjustmentManual->WhileHeld(new SetShooterSpeed());	
	m_frisbeeShoot->WhenPressed(new FrisbeeShoot());	
	m_pickupHome->WhenPressed(new SetPickupPosition(PICKUP_HOME_POSITION));
	m_pickup->WhenPressed(new FrisbeePickup());	
	m_shooterStop->WhenPressed(new SetShooterSpeed(0, false));
	m_shooterPosition_1->WhenPressed(new CypressGotoPosition());	
	m_shooterPosition_2->WhenPressed(new CypressGotoPosition());		
	m_shooterPosition_3->WhenPressed(new CypressGotoPosition());	
	m_shooterPosition_4->WhenPressed(new CypressGotoPosition());
	m_pickupSuction->WhenPressed(new SetPickupSuction(true));
	m_pickupSuction->WhenReleased(new SetPickupSuction(false));
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getShootJoystick() {
	return shootJoystick;
}
Joystick* OI::getDriveJoystick() {
	return driveJoystick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
