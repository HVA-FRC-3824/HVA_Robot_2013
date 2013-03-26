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
#include "Commands/SetPickupPosition.h"
#include "Commands/AutonomousDoNothing.h"
#include "Commands/AutonomousDriveForwardShoot.h"
#include "Commands/AutonomousRPMDriveForwardShoot.h"
#include "Commands/AutonomousRPMShootforMegaPoints.h"
#include "Commands/AutonomousRPMShootfromCenter.h"
#include "Commands/AutonomousRPMShootfromCenterRapid.h"
#include "Commands/AutonomousRPMShootfromLeft.h"
#include "Commands/AutonomousRPMShootfromRight.h"
#include "Commands/AutonomousRPMShootMiddleGoalHard.h"
#include "Commands/AutonomousRPMShootMiddleGoalHardtoCenterline.h"
#include "Commands/AutonomousRPMShootMiddleGoalSoft.h"
#include "Commands/AutonomousRPMShootingwithPickup.h"
#include "Commands/AutonomousRPMShootingwithPickupFirst.h"
#include "Commands/Teleoperated.h"
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
Drivetrain* Robot::drivetrain = 0;
ShooterWheel* Robot::shooterWheel = 0;
ShooterPusher* Robot::shooterPusher = 0;
ShooterAngleAdjust* Robot::shooterAngleAdjust = 0;
Pump* Robot::pump = 0;
Pickup* Robot::pickup = 0;
Hang* Robot::hang = 0;
OI* Robot::oi = 0;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
void Robot::RobotInit()
{
   //MatchCount = 0;
   SmartDashboard::PutNumber("Chassis Turn Angle Degrees", 10);
   SmartDashboard::PutNumber("Shot Shooter Speed", 0);
   SmartDashboard::PutNumber("Shot Shooter Angle", 0);
   SmartDashboard::PutNumber("Shot Counter", 0);
   //SmartDashboard::PutNumber("Match Number", MatchCount);
   SmartDashboard::PutNumber("Pickup Home", PICKUP_HOME_POSITION);
   SmartDashboard::PutNumber("Pickup Release", PICKUP_RELEASE_POSITION);
   SmartDashboard::PutNumber("Pickup Frisbee", PICKUP_POSITION);
   
   // Must be called before constructing OI
   // PID values for the turn angle
//   SmartDashboard::PutNumber("Chassis Turn P Term", 0.04); //Tuned for Robot 1!
//   SmartDashboard::PutNumber("Chassis Turn I Term", 0.004);
//   SmartDashboard::PutNumber("Chassis Turn D Term", 0.04);
   
   // PID values for the shooter speed
//   SmartDashboard::PutNumber("Shooter Speed P Term", 1.0);
//   SmartDashboard::PutNumber("Shooter Speed I Term", 0.03);
//   SmartDashboard::PutNumber("Shooter Speed D Term", 0.0);
   
   // PID values for the shooter
//   SmartDashboard::PutNumber("Shooter Angle P Term", 0.03);
//   SmartDashboard::PutNumber("Shooter Angle I Term", 0.0);
//   SmartDashboard::PutNumber("Shooter Angle D Term", 0.005);
   
   // PID value for aimer
//   SmartDashboard::PutNumber("Shooter Aim P: ", 0.01);
//   SmartDashboard::PutNumber("Shooter Aim I: ", 0.0);
//   SmartDashboard::PutNumber("Shooter Aim D: ", 0.0);
   
   // PID value for pickup
//   SmartDashboard::PutNumber("Pickup P Term", 0.02);
//   SmartDashboard::PutNumber("Pickup I Term", 0.001);
//   SmartDashboard::PutNumber("Pickup D Term", 0.009); 
   
   // Defaults to Search for target
   //SmartDashboard::PutString("Target Type", "target");
   RobotMap::init();
   
   // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	drivetrain = new Drivetrain();
	shooterWheel = new ShooterWheel();
	shooterPusher = new ShooterPusher();
	shooterAngleAdjust = new ShooterAngleAdjust();
	pump = new Pump();
	pickup = new Pickup();
	hang = new Hang();
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
   chooser->AddDefault("1) Do Nothing", new AutonomousDoNothing());
   //chooser->AddObject("2) Shoot from Center and Pickup", new AutonomousRPMShootingwithPickup());
   //chooser->AddObject("3) Shoot from Center to Top Goal Rapid", new AutonomousRPMShootfromCenterRapid());
   //chooser->AddObject("4) Shoot from Center to Top Goal", new AutonomousRPMShootfromCenter());
   chooser->AddObject("2) Shoot from Side to Top Goal", new AutonomousRPMShootMiddleGoalHard());
   //chooser->AddObject("6) Shoot from Side to Middle Goal", new AutonomousRPMShootMiddleGoalSoft());
   //chooser->AddObject("7) Drive Forward and Shoot to Middle Goal", new AutonomousDriveForwardShoot());
   chooser->AddObject("3) Pickup and Shoot from Center", new AutonomousRPMShootingwithPickupFirst());
//   chooser->AddObject("Shoot Middle Goal Hard with RPM from Centerline", new AutonomousRPMShootMiddleGoalHardtoCenterline());
//   chooser->AddObject("Shoot from Left", new AutonomousRPMShootfromLeft());
//   chooser->AddObject("Shoot from Right", new AutonomousRPMShootfromRight());
//   chooser->AddObject("Drive forward and shoot", new AutonomousRPMDriveForwardShoot());
//   chooser->AddObject("Shoot from Center", new AutonomousShootfromCenter());
//   chooser->AddObject("Shoot from Left", new AutonomousShootfromLeft());
//   chooser->AddObject("Shoot from Right", new AutonomousShootfromRight());
//   chooser->AddObject("Shoot Middle Goal Hard", new AutonomousShootMiddleGoalHard());
//   chooser->AddObject("Shoot Middle Goal Hard to Centerline", new AutonomousShootMiddleGoalHardtoCenterline());
//   chooser->AddObject("Shoot Middle Goal Soft", new AutonomousShootMiddleGoalSoft());
   
   SmartDashboard::PutData("Autonomous modes:", chooser);
   
   // Instanciate the Teleop Command
   teleop = new Teleoperated();
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
   
   // Start the Teleop Command
   teleop->Start();
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
