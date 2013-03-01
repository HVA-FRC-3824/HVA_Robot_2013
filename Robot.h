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
#include "Subsystems/Drivetrain.h"
#include "Subsystems/Pickup.h"
#include "Subsystems/Pump.h"
#include "Subsystems/ShooterAngleAdjust.h"
#include "Subsystems/ShooterPusher.h"
#include "Subsystems/ShooterWheel.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
#define TIPPER_EXTEND_RETRACT_TIME      			3.0
#define AUTONOMOUS_SHOOT_WAIT1	 	   		 	    0.0
#define AUTONOMOUS_SHOOT_WAIT2   					0.0

/****** SHOOTER POSITION ******/
#define SHOOTER_ANGLE_MAX_VALUE	                  850.0
#define SHOOTER_ANGLE_MIN_VALUE 			        0.0
#define SHOOTER_ANGLE_THRESHOLD                     1.0
#define SHOOTER_ANGLE_MAX_PICKUP_VALUE			  200.0
#define SHOOTER_ANGLE_PICKUP_VALUE				  130.0

/****** SHOOTER SPEED ******/
#define SHOOTER_SPEED_THRESHOLD    				   50.0
#define SHOOTER_SPEED_MAX_VALUE  				 3600.0
#define SHOOTER_SPEED_MIN_VALUE   			     1000.0

/****** PICKUP POSITION ******/
#define PICKUP_MAX_VALUE 				           672.0
#define PICKUP_MIN_VALUE 		 		            90.0
#define PICKUP_THRESHOLD 		                    5.0
#define PICKUP_POSITION						   	    95.0
#define PICKUP_STAGE				               122.0
#define PICKUP_RELEASE_POSITION					   647.0
#define PICKUP_HOME_POSITION	                   500.0

/****** PICKUP VOLTAGE ******/
#define PICKUP_UP_VOLTAGE					        0.5
#define PICKUP_DOWN_VOLTAGE						   -0.5

/****** CYPRESS POSITION DEFINES ******/
#define POSITION_1_ANGLE		                  25.0 // full court
#define POSITION_1_VELOCITY                     3600.0
#define POSITION_1_VOLTAGE                         1.0
#define POSITION_1_IS_RPM						  true

#define POSITION_2_ANGLE						  67.0 // mid court
#define POSITION_2_VELOCITY                     3600.0
#define POSITION_2_VOLTAGE                        0.62
#define POSITION_2_IS_RPM						  true

#define POSITION_3_ANGLE                          354.0 // under tower
#define POSITION_3_VELOCITY                      2900.0
#define POSITION_4_VOLTAGE                          0.6
#define POSITION_3_IS_RPM                          true

#define POSITION_4_ANGLE                          660.0 // close to goals
#define POSITION_4_VELOCITY                      1930.0
#define POSITION_4_VOLTAGE                          0.6
#define POSITION_4_IS_RPM                          true

#define POSITION_5_ANGLE                          854.0 // tower goal
#define POSITION_5_VELOCITY                      1725.0
#define POSITION_5_VOLTAGE                          0.6
#define POSITION_5_IS_RPM                          true
class Robot : public IterativeRobot 
{
public:
	Command *autonomousCommand;
	Command *teleop;
	static OI *oi;
	LiveWindow *lw;
	SendableChooser *chooser;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static Drivetrain* drivetrain;
	static ShooterWheel* shooterWheel;
	static ShooterPusher* shooterPusher;
	static ShooterAngleAdjust* shooterAngleAdjust;
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
