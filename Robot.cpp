// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Robot.h"
#include "Commands/AutonomousDoNothing.h"
#include "Commands/AutonomousShootFromCenter.h"
#include "Commands/AutonomousShootFromLeft.h"
#include "Commands/AutonomousShootFromRight.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
Drivetrain* Robot::drivetrain = 0;
ShooterWheel* Robot::shooterWheel = 0;
ShooterWheelVoltage* Robot::shooterWheelVoltage = 0;
ShooterPusher* Robot::shooterPusher = 0;
ShooterAngleAdjust* Robot::shooterAngleAdjust = 0;
ClimberTipper* Robot::climberTipper = 0;
Climber* Robot::climber = 0;
Pump* Robot::pump = 0;
OI* Robot::oi = 0;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
void Robot::RobotInit()
{
   // Must be called before constructing OI
   // PID values for the turn angle
   SmartDashboard::PutNumber("Chassis Turn P Term", 0.1);
   SmartDashboard::PutNumber("Chassis Turn I Term", 0.01);
   SmartDashboard::PutNumber("Chassis Turn D Term", 0.0);
   
   // PID values for the shooter speed
   SmartDashboard::PutNumber("Shooter Speed P Term", 0.01);
   SmartDashboard::PutNumber("Shooter Speed I Term", 0.001);
   SmartDashboard::PutNumber("Shooter Speed D Term", 0.0);
   
   // PID values for the shooter
   SmartDashboard::PutNumber("Shooter Angle P Term", 0.01);
   SmartDashboard::PutNumber("Shooter Angle I Term", 0.001);
   SmartDashboard::PutNumber("Shooter Angle D Term", 0.0);
   
   SmartDashboard::PutNumber("Shooter Voltage:", 0.0);
   SmartDashboard::PutNumber("Shooter Angle:", 0.0);
   RobotMap::init();
   
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	drivetrain = new Drivetrain();
	shooterWheel = new ShooterWheel();
	shooterWheelVoltage = new ShooterWheelVoltage();
	shooterPusher = new ShooterPusher();
	shooterAngleAdjust = new ShooterAngleAdjust();
	climberTipper = new ClimberTipper();
	climber = new Climber();
	pump = new Pump();
//	pickup = new Pickup();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
   // This MUST be here. If the OI creates Commands (which it very likely
   // will), constructing it during the construction of CommandBase (from
   // which commands extend), subsystems are not guaranteed to be
   // yet. Thus, their requires() statements may grab null pointers. Bad
   // news. Don't move it.
   oi = new OI();
   lw = LiveWindow::GetInstance();
   // instantiate the command used for the autonomous period
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand = new AutonomousCommand();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
   
	// These must be after subsystem construction.
   chooser = new SendableChooser();
   chooser->AddDefault("Do Nothing", new AutonomousDoNothing());
   chooser->AddObject("Shoot from Center", new AutonomousShootfromCenter());
   chooser->AddObject("Shoot from Left", new AutonomousShootfromLeft());
   chooser->AddObject("Shoot from Right", new AutonomousShootfromRight());
   SmartDashboard::PutData("Autonomous modes:", chooser);
   
}
void Robot::AutonomousInit()
{
   // get the autonomous command from the smartdashboard chooser
   autonomousCommand = (Command *) chooser->GetSelected();
   // ensure the autonomous command exists and run
   if (autonomousCommand != NULL)
      autonomousCommand->Start();
}
void Robot::AutonomousPeriodic()
{
   Scheduler::GetInstance()->Run();
}
void Robot::TeleopInit()
{
   // This makes sure that the autonomous stops running when
   // teleop starts running. If you want the autonomous to 
   // continue until interrupted by another command, remove
   // this line or comment it out.
   autonomousCommand->Cancel();
}
void Robot::TeleopPeriodic()
{
   if (autonomousCommand != NULL)
      Scheduler::GetInstance()->Run();
   
}
void Robot::TestPeriodic()
{
   lw->Run();
}
START_ROBOT_CLASS(Robot);
