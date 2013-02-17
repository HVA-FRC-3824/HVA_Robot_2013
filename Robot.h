// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef _ROBOT_H
#define _ROBOT_H
#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/AutonomousCommand.h"
#include "Subsystems/Climber.h"
#include "Subsystems/ClimberTipper.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/Pickup.h"
#include "Subsystems/Pump.h"
#include "Subsystems/ShooterAngleAdjust.h"
#include "Subsystems/ShooterPusher.h"
#include "Subsystems/ShooterWheel.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
#define TIPPER_EXTEND_RETRACT_TIME     3.0
#define AUTONOMOUS_SHOOT_WAIT1	 	   1.0
#define AUTONOMOUS_SHOOT_WAIT2   		1.0
class Robot : public IterativeRobot 
{
public:
	Command *autonomousCommand;
	static OI *oi;
	LiveWindow *lw;
	SendableChooser *chooser;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Drivetrain* drivetrain;
	static ShooterWheel* shooterWheel;
	static ShooterPusher* shooterPusher;
	static ShooterAngleAdjust* shooterAngleAdjust;
	static ClimberTipper* climberTipper;
	static Climber* climber;
	static Pump* pump;
	static Pickup* pickup;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	virtual void RobotInit();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};
#endif
