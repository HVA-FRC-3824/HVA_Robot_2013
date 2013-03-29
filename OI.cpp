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
#include "Commands/AutonomousDriveForwardShoot.h"
#include "Commands/AutonomousRPMDriveForwardShoot.h"
#include "Commands/AutonomousRPMShootMiddleGoalHard.h"
#include "Commands/AutonomousRPMShootMiddleGoalHardtoCenterline.h"
#include "Commands/AutonomousRPMShootMiddleGoalSoft.h"
#include "Commands/AutonomousRPMShootforMegaPoints.h"
#include "Commands/AutonomousRPMShootfromCenter.h"
#include "Commands/AutonomousRPMShootfromCenterRapid.h"
#include "Commands/AutonomousRPMShootfromLeft.h"
#include "Commands/AutonomousRPMShootfromRight.h"
#include "Commands/AutonomousRPMShootingwithPickup.h"
#include "Commands/AutonomousRPMShootingwithPickupFirst.h"
#include "Commands/ChassisDriveDistance.h"
#include "Commands/ChassisDriveDistanceSideways.h"
#include "Commands/ChassisDriveDistanceSidewaysStrainght.h"
#include "Commands/ChassisDriveDistanceStraight.h"
#include "Commands/ChassisDrivetoWall.h"
#include "Commands/ChassisDrivetoWallStraight.h"
#include "Commands/ChassisSafeMoveForward.h"
#include "Commands/ChassisTurnAngle.h"
#include "Commands/CypressGotoPosition.h"
#include "Commands/DriveForwared10inches.h"
#include "Commands/DriveToFrisbee.h"
#include "Commands/DriveToFrisbeeNoTurn.h"
#include "Commands/DrivetrainNormalDrive.h"
#include "Commands/FrisbeeAim.h"
#include "Commands/FrisbeeAimAndShoot.h"
#include "Commands/FrisbeePickup.h"
#include "Commands/FrisbeeRapidShoot.h"
#include "Commands/FrisbeeShoot.h"
#include "Commands/GetLastShotData.h"
#include "Commands/GetLastShotNumber.h"
#include "Commands/GetShooterAngle.h"
#include "Commands/GetShooterSpeedRPM.h"
#include "Commands/HangFromShootPosition.h"
#include "Commands/HangToggle.h"
#include "Commands/HangerPullDown.h"
#include "Commands/HangerUp.h"
#include "Commands/InitializeRobotforMatch.h"
#include "Commands/LongShotfromLeftLoadingStation.h"
#include "Commands/LongShotfromRightLoadingStation.h"
#include "Commands/SetPickupPosition.h"
#include "Commands/SetPickupSuction.h"
#include "Commands/SetPickupVoltage.h"
#include "Commands/SetShooterAngle.h"
#include "Commands/SetShooterAngleforPickup.h"
#include "Commands/SetShooterSpeed.h"
#include "Commands/ShootHangingonTower.h"
#include "Commands/Teleoperated.h"
#include "Commands/TestDriveStraight.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
OI::OI()
{
   // Process operator interface input here.
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	driveJoystick = new Joystick(1);
	
	joystickSingleShoot = new JoystickButton(driveJoystick, 12);
	joystickSingleShoot->WhenPressed(new FrisbeeShoot());
	joystickRapidShoot = new JoystickButton(driveJoystick, 11);
	joystickRapidShoot->WhileHeld(new FrisbeeRapidShoot());
	shootwhenHangingonTower = new JoystickButton(driveJoystick, 9);
	shootwhenHangingonTower->WhileHeld(new ShootHangingonTower());
	setupforMatch = new JoystickButton(driveJoystick, 7);
	setupforMatch->WhenPressed(new InitializeRobotforMatch());
	joystickShoot = new JoystickButton(driveJoystick, 1);
	joystickShoot->WhileHeld(new FrisbeeRapidShoot());
     
        // SmartDashboard Buttons
	SmartDashboard::PutData("Initialize Robot for Match", new InitializeRobotforMatch());
	SmartDashboard::PutData("Chassis Turn Angle", new ChassisTurnAngle());
	SmartDashboard::PutData("Drive To Frisbee", new DriveToFrisbee());
	SmartDashboard::PutData("Drive To Frisbee No Turn", new DriveToFrisbeeNoTurn());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	// Constructor for DriverStationButtons
	m_shooterSpeedAdjustmentManual = new DigitalIOButton(INPUT_SHOOTER_SPEED_ADJUSTMENT_MANUAL);
	m_shooterSpeedAdjustmentManual->WhileHeld(new SetShooterSpeed());	
	
	m_shooterAngleAdjustmentManual = new DigitalIOButton(INPUT_SHOOTER_ANGLE_ADJUSTMENT_MANUAL);
	m_shooterAngleAdjustmentManual->WhileHeld(new SetShooterAngle());
	
	m_pickupUp = new DigitalIOButton(INPUT_PICKUP_UP);
	m_pickupUp->WhenPressed(new SetPickupPosition(PICKUP_HOME_POSITION));
	
	m_pickupDown = new DigitalIOButton(INPUT_PICKUP_DOWN);
	m_pickupDown->WhenPressed(new SetPickupPosition(PICKUP_POSITION));
	
	m_pickupSuction = new DigitalIOButton(INPUT_PICKUP_SUCTION);
    m_pickupSuction->WhenPressed(new SetPickupSuction(true));
	m_pickupSuction->WhenReleased(new SetPickupSuction(false));	
	
	m_pickupPickup = new DigitalIOButton(INPUT_PICKUP_PICKUP);
	m_pickupPickup->WhenPressed(new FrisbeePickup());
	
	m_hang = new DigitalIOButton(INPUT_HANG);
	m_hang->WhenPressed(new HangToggle());		
	
	m_shooterPosition_1 = new DigitalIOButton(INPUT_SHOOTER_POSITION_1);
	m_shooterPosition_2 = new DigitalIOButton(INPUT_SHOOTER_POSITION_2);
	m_shooterPosition_3 = new DigitalIOButton(INPUT_SHOOTER_POSITION_3);
    m_shooterPosition_4 = new DigitalIOButton(INPUT_SHOOTER_POSITION_4);
    m_shooterPosition_5 = new DigitalIOButton(INPUT_SHOOTER_POSITION_5);
    m_shooterPosition_1->WhenPressed(new CypressGotoPosition(POSITION_1_ANGLE, POSITION_1_VELOCITY, POSITION_1_IS_RPM));	
	m_shooterPosition_2->WhenPressed(new CypressGotoPosition(POSITION_2_ANGLE, POSITION_2_VELOCITY, POSITION_2_IS_RPM));		
	m_shooterPosition_3->WhenPressed(new CypressGotoPosition(POSITION_3_ANGLE, POSITION_3_VELOCITY, POSITION_3_IS_RPM));	
    m_shooterPosition_4->WhenPressed(new CypressGotoPosition(POSITION_4_ANGLE, POSITION_4_VELOCITY, POSITION_4_IS_RPM));
    m_shooterPosition_5->WhenPressed(new CypressGotoPosition(POSITION_5_ANGLE, POSITION_5_VELOCITY, POSITION_5_IS_RPM));
		
	m_shooterStop = new DigitalIOButton(INPUT_SHOOTER_STOP);
	// set the angle to -1 to not set the angle, just stop the shooter
	m_shooterStop->WhenPressed(new CypressGotoPosition(-1, 0, false));
	m_frisbeeShoot = new DigitalIOButton(INPUT_FRISBEE_SHOOT);
	m_frisbeeShoot->WhileHeld(new FrisbeeRapidShoot());	
}
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
Joystick* OI::getDriveJoystick() {
	return driveJoystick;
}
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
