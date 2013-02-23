// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
// defines Cypress IO

#define INPUT_PICKUP_UP								3	//Double Toggle
#define INPUT_PICKUP_DOWN							4	//Double Toggle
#define INPUT_SHOOTER_ANGLE_ADJUSTMENT_MANUAL		7	//Toggle Switch
#define INPUT_SHOOTER_SPEED_ADJUSTMENT_MANUAL		6	//Plot Switch
#define INPUT_SHOOTER_RPM_VOLTAGE					5	//Toggle Switch
#define INPUT_FRISBEE_SHOOT							8	//Button
#define INPUT_PICKUP_HOME							9	//Button
#define INPUT_PICKUP								10	//Button
#define INPUT_SHOOTER_STOP							12	//Button
#define INPUT_SHOOTER_POSITION_1					13	//Button
#define INPUT_SHOOTER_POSITION_2					14	//Button
#define INPUT_SHOOTER_POSITION_3					15	//Button
#define INPUT_SHOOTER_POSITION_4					16	//Button

#define ANALOG_SHOOTER_SPEED						1	//Pot
#define ANALOG_SHOOTER_ADJUST						2	//Pot

class OI 
{
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* shootJoystick;
	JoystickButton* shootDiskButton;
	Joystick* driveJoystick;
	JoystickButton* reverseDrive;
	DigitalIOButton* digitalButton1;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	DigitalIOButton* m_pickupUp;
	DigitalIOButton* m_pickupDown;
	DigitalIOButton* m_shooterAngleAdjustmentManual;
	DigitalIOButton* m_shooterSpeedAdjustmentManual;
	DigitalIOButton* m_shooterRpmVoltage;
	DigitalIOButton* m_frisbeeShoot;
	DigitalIOButton* m_pickupHome;
	DigitalIOButton* m_pickup;
	DigitalIOButton* m_shooterStop;
	DigitalIOButton* m_shooterPosition_1;
	DigitalIOButton* m_shooterPosition_2;
	DigitalIOButton* m_shooterPosition_3;
	DigitalIOButton* m_shooterPosition_4;
	

	
public:
	OI();
 
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	Joystick* getDriveJoystick();
	Joystick* getShootJoystick();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};
#endif
