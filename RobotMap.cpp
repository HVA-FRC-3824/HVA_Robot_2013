// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::drivetrainFrontRight = NULL;
SpeedController* RobotMap::drivetrainFrontLeft = NULL;
SpeedController* RobotMap::drivetrainRearRight = NULL;
SpeedController* RobotMap::drivetrainRearLeft = NULL;
RobotDrive* RobotMap::drivetrainHolonomic = NULL;
AnalogChannel* RobotMap::drivetrainUltrasonicFront = NULL;
AnalogChannel* RobotMap::drivetrainUltrasonicRear = NULL;
Gyro* RobotMap::drivetrainGyro = NULL;
SpeedController* RobotMap::shooterWheelMotor = NULL;
GearTooth* RobotMap::shooterWheelEncoder = NULL;
Relay* RobotMap::shooterPusherMotor = NULL;
DigitalInput* RobotMap::shooterPusherStopSwitch = NULL;
AnalogChannel* RobotMap::shooterAngleAdjustPotentiometer = NULL;
SpeedController* RobotMap::shooterAngleAdjustMotor = NULL;
DoubleSolenoid* RobotMap::climberTipperSolenoid = NULL;
SpeedController* RobotMap::climberMotor = NULL;
DigitalInput* RobotMap::climberLimitUp = NULL;
DigitalInput* RobotMap::climberLimitDown = NULL;
Compressor* RobotMap::pumpCompressorPump = NULL;
Solenoid* RobotMap::pickupSuction = NULL;
SpeedController* RobotMap::pickupMotor = NULL;
AnalogChannel* RobotMap::pickupPotentiometer = NULL;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
void RobotMap::init() 
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();
	drivetrainFrontRight = new Talon(1, 1);
	lw->AddActuator("Drivetrain", "Front Right", (Talon*) drivetrainFrontRight);
	
	drivetrainFrontLeft = new Talon(1, 2);
	lw->AddActuator("Drivetrain", "Front Left", (Talon*) drivetrainFrontLeft);
	
	drivetrainRearRight = new Talon(1, 3);
	lw->AddActuator("Drivetrain", "Rear Right", (Talon*) drivetrainRearRight);
	
	drivetrainRearLeft = new Talon(1, 4);
	lw->AddActuator("Drivetrain", "Rear Left", (Talon*) drivetrainRearLeft);
	
	drivetrainHolonomic = new RobotDrive(drivetrainFrontLeft, drivetrainRearLeft,
              drivetrainFrontRight, drivetrainRearRight);
	
	drivetrainHolonomic->SetSafetyEnabled(false);
        drivetrainHolonomic->SetExpiration(0.1);
        drivetrainHolonomic->SetSensitivity(0.5);
        drivetrainHolonomic->SetMaxOutput(1.0);
        drivetrainHolonomic->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        drivetrainHolonomic->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	drivetrainUltrasonicFront = new AnalogChannel(1, 3);
	lw->AddSensor("Drivetrain", "Ultrasonic Front", drivetrainUltrasonicFront);
	
	drivetrainUltrasonicRear = new AnalogChannel(1, 4);
	lw->AddSensor("Drivetrain", "Ultrasonic Rear", drivetrainUltrasonicRear);
	
	drivetrainGyro = new Gyro(1, 1);
	lw->AddSensor("Drivetrain", "Gyro", drivetrainGyro);
	drivetrainGyro->SetSensitivity(0.0070);
	shooterWheelMotor = new Talon(1, 5);
	lw->AddActuator("Shooter Wheel", "Motor", (Talon*) shooterWheelMotor);
	
	shooterWheelEncoder = new GearTooth(1, 1, false);
	lw->AddSensor("Shooter Wheel", "Encoder", shooterWheelEncoder);
	
	shooterPusherMotor = new Relay(1, 2);
	lw->AddActuator("Shooter Pusher", "Motor", shooterPusherMotor);
	
	shooterPusherStopSwitch = new DigitalInput(1, 2);
	lw->AddSensor("Shooter Pusher", "Stop Switch", shooterPusherStopSwitch);
	
	shooterAngleAdjustPotentiometer = new AnalogChannel(1, 5);
	lw->AddSensor("Shooter Angle Adjust", "Potentiometer", shooterAngleAdjustPotentiometer);
	
	shooterAngleAdjustMotor = new Victor(1, 7);
	lw->AddActuator("Shooter Angle Adjust", "Motor", (Victor*) shooterAngleAdjustMotor);
	
	climberTipperSolenoid = new DoubleSolenoid(1, 1, 2);      
	
	
	climberMotor = new Talon(1, 6);
	lw->AddActuator("Climber", "Motor", (Talon*) climberMotor);
	
	climberLimitUp = new DigitalInput(1, 5);
	lw->AddSensor("Climber", "Limit Up", climberLimitUp);
	
	climberLimitDown = new DigitalInput(1, 6);
	lw->AddSensor("Climber", "Limit Down", climberLimitDown);
	
	pumpCompressorPump = new Compressor(1, 8, 1, 1);
	
	
	pickupSuction = new Solenoid(1, 7);
	lw->AddActuator("Pickup", "Suction", pickupSuction);
	
	pickupMotor = new Victor(1, 8);
	lw->AddActuator("Pickup", "Motor", (Victor*) pickupMotor);
	
	pickupPotentiometer = new AnalogChannel(1, 6);
	lw->AddSensor("Pickup", "Potentiometer", pickupPotentiometer);
	
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
