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
#include "Commands/CypressGotoPositionTest.h"
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
#include "Commands/SetPickupVoltage.h"
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
	SmartDashboard::PutData("Frisbee Shoot", new FrisbeeShoot());
	SmartDashboard::PutData("UpdateShooterPID", new UpdateShooterPID());
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
	m_pickupUp->WhenPressed(new SetPickupVoltage(PICKUP_UP_VOLTAGE));
	m_pickupUp->WhenReleased(new SetPickupVoltage(0.0));
	m_pickupDown->WhenPressed(new SetPickupVoltage(PICKUP_DOWN_VOLTAGE));
	m_pickupDown->WhenReleased(new SetPickupVoltage(0.0));
	
	
	m_shooterAngleAdjustmentManual->WhileHeld(new SetShooterAngle());
	m_shooterSpeedAdjustmentManual->WhileHeld(new SetShooterSpeed());	
	m_frisbeeShoot->WhenPressed(new FrisbeeShoot());	
	m_pickupHome->WhenPressed(new SetPickupPosition(PICKUP_HOME_POSITION));
	m_pickup->WhenPressed(new FrisbeePickup());	
	m_shooterStop->WhenPressed(new SetShooterSpeed(0, false));
	m_shooterPosition_1->WhenPressed(new CypressGotoPositionTest(POSITION_1_ANGLE, POSITION_1_VELOCITY, POSITION_1_IS_RPM));	
	m_shooterPosition_2->WhenPressed(new CypressGotoPositionTest(POSITION_2_ANGLE, POSITION_2_VELOCITY, POSITION_2_IS_RPM));		
	m_shooterPosition_3->WhenPressed(new CypressGotoPositionTest(POSITION_3_ANGLE, POSITION_3_VELOCITY, POSITION_3_IS_RPM));	
	m_shooterPosition_4->WhenPressed(new CypressGotoPositionTest(POSITION_4_ANGLE, POSITION_4_VELOCITY, POSITION_4_IS_RPM));
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
