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
#include "Subsystems/Hang.h"
#include "Subsystems/Pickup.h"
#include "Subsystems/Pump.h"
#include "Subsystems/ShooterAngleAdjust.h"
#include "Subsystems/ShooterPusher.h"
#include "Subsystems/ShooterWheel.h"
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"
/****** Shooter angle conversion (ADC to angle) ******/
/* angle = (SLOPE * ADC) + Y_INTERCEPT   */
/* ADC   = (angle - Y_INTERCEPT) / SLOPE */
#define SHOOTER_ANGLE_SLOPE                        0.0337
#define SHOOTER_ANGLE_Y_INTERCEPT                  17.203
/****** BACK/UNDER TOWER ******/
#define SHOOTER_ANGLE_BACK_OF_TOWER                31.0 // 25.1 // 340.0
#define SHOOTER_ANGLE_UNDER_TOWER                  (SHOOTER_ANGLE_BACK_OF_TOWER + 1.0) //26.0 // 378.0
//#define SHOOTER_ANGLE_UNDER_TOWER_SECOND           26.0  // 330.0
#define SHOOTER_ANGLE_FOR_PICKUP                   21.584  // 130.0
#define SHOOTER_SPEED_BACK_OF_TOWER              3200.0
/****** SHOOTER WAIT TIMES ******/
#define AUTONOMOUS_SHOOT_WAIT1                      0.0
#define AUTONOMOUS_SHOOT_WAIT2                      0.0
// Loadind define
#define POSITION_LOADING						   36.0
#define POSITION_INITIALIZE                        34.3 //28.0
/****** SHOOTER POSITION ******/
// Note: The shooter angle is greater than possible to ensure the new shooter 
//       can move the full range (after the slope and y-intercept have been 
//       recalibrated)
#define SHOOTER_ANGLE_MAX_VALUE                    50.0    // 850.0  - 45.848
#define SHOOTER_ANGLE_MIN_VALUE                    10.0    //   0.0  - 17.203
#define SHOOTER_ANGLE_THRESHOLD                     1.0    // Note: in ADC values
#define SHOOTER_ANGLE_MAX_PICKUP_VALUE             23.943  //  200.0
#define SHOOTER_ANGLE_PICKUP_VALUE                 21.584  //  130.0
/****** SHOOTER SPEED ******/
#define SHOOTER_SPEED_THRESHOLD                    50.0
#define SHOOTER_SPEED_MAX_VALUE                  4000.0
#define SHOOTER_SPEED_MIN_VALUE                  1000.0
/****** PICKUP VOLTAGE ******/
#define PICKUP_UP_VOLTAGE                          -0.5
#define PICKUP_DOWN_VOLTAGE                         0.4
/****** CYPRESS POSITION DEFINES ******/
// front of pyramid
#define POSITION_1_ANGLE                           40.793  // 700.0
#define POSITION_1_VELOCITY                      2200.0
#define POSITION_1_VOLTAGE                          0.6
#define POSITION_1_IS_RPM                          true
// back of pyramid
#define POSITION_2_ANGLE                           24.954  // 230.0 
#define POSITION_2_VELOCITY                      3000.0
#define POSITION_2_VOLTAGE                          0.62
#define POSITION_2_IS_RPM                           true
// under the tower and loading
#define POSITION_3_ANGLE                  SHOOTER_ANGLE_BACK_OF_TOWER 
#define POSITION_3_VELOCITY               SHOOTER_SPEED_BACK_OF_TOWER
#define POSITION_3_VOLTAGE                          0.6
#define POSITION_3_IS_RPM                          true
// Long Shoot
#define POSITION_4_ANGLE                           10.0 // 854.0 
#define POSITION_4_VELOCITY                      3000.0
#define POSITION_4_VOLTAGE                          0.6
#define POSITION_4_IS_RPM                          true
// loading position
#define POSITION_5_ANGLE                     POSITION_LOADING 
#define POSITION_5_VELOCITY             SHOOTER_SPEED_BACK_OF_TOWER
#define POSITION_5_VOLTAGE                          0.6
#define POSITION_5_IS_RPM                          true
// shooting when handing on the tower
#define HANGING_ON_TOWER_ANGLE                     24.5
#define HANGING_ON_TOWER_VELOCITY                3600.0
#define HANGING_ON_TOWER_IS_RPM                    true
/****** OLD CYPRESS POSITION DEFINES ******/
//#define POSITION_1_ANGLE                          25.0 // full court
//#define POSITION_1_VELOCITY                    3600.0
//#define POSITION_1_VOLTAGE                        1.0
//#define POSITION_1_IS_RPM                        true
//#define POSITION_2_ANGLE                         67.0 // mid court
//#define POSITION_2_VELOCITY                    3600.0
//#define POSITION_2_VOLTAGE                        0.62
//#define POSITION_2_IS_RPM                        true
//#define POSITION_3_ANGLE                         354.0 // under tower
//#define POSITION_3_VELOCITY                     2900.0
//#define POSITION_4_VOLTAGE                         0.6
//#define POSITION_3_IS_RPM                         true
//#define POSITION_4_ANGLE                         660.0 // close to goals
//#define POSITION_4_VELOCITY                     1930.0
//#define POSITION_4_VOLTAGE                         0.6
//#define POSITION_4_IS_RPM                         true
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
	static Hang* hang;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
    virtual void RobotInit();
    virtual void AutonomousInit();
    virtual void AutonomousPeriodic();
    virtual void TeleopInit();
    virtual void TeleopPeriodic();
    virtual void TestPeriodic();
    //static int MatchCount;
};
#endif
