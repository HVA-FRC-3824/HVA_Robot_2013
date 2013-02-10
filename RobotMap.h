// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"
/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap 
{
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static SpeedController* drivetrainFrontRight;
	static SpeedController* drivetrainFrontLeft;
	static SpeedController* drivetrainRearRight;
	static SpeedController* drivetrainRearLeft;
	static RobotDrive* drivetrainHolonomic;
	static AnalogChannel* drivetrainUltrasonicFront;
	static AnalogChannel* drivetrainUltrasonicRear;
	static Gyro* drivetrainGyro;
	static SpeedController* shooterWheelMotorFront;
	static GearTooth* shooterWheelEncoder;
	static SpeedController* shooterWheelMotorBack;
	static Relay* shooterPusherMotor;
	static DigitalInput* shooterPusherStopSwitch;
	static SpeedController* shooterAngleAdjustMotor;
	static AnalogChannel* shooterAngleAdjustPotentiometer;
	static DigitalInput* shooterAngleAdjustLimitSwitchHigh;
	static DigitalInput* shooterAngleAdjustLimitSwitchLow;
	static Relay* frisbeeTransportMotor;
	static DoubleSolenoid* climberTipperSolenoid;
	static SpeedController* climberMotor;
	static DigitalInput* climberLimitUp;
	static DigitalInput* climberLimitDown;
	static Compressor* pumpCompressorPump;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static void init();
};
#endif
