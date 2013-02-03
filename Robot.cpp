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
// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
Drivetrain* Robot::drivetrain = 0;
ShooterWheel* Robot::shooterWheel = 0;
ShooterPusher* Robot::shooterPusher = 0;
ShooterAngleAdjust* Robot::shooterAngleAdjust = 0;
FrisbeeTransport* Robot::frisbeeTransport = 0;
ClimberTipper* Robot::climberTipper = 0;
Climber* Robot::climber = 0;
Pump* Robot::pump = 0;
OI* Robot::oi = 0;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INITIALIZATION
void Robot::RobotInit()
{
	RobotMap::init();
	
	chooser = new SendableChooser();
	//chooser->AddDefault();
	//chooser->AddObject();
	SmartDashboard::PutData("Autonomous modes:", chooser);
	
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	drivetrain = new Drivetrain();
	shooterWheel = new ShooterWheel();
	shooterPusher = new ShooterPusher();
	shooterAngleAdjust = new ShooterAngleAdjust();
	frisbeeTransport = new FrisbeeTransport();
	climberTipper = new ClimberTipper();
	climber = new Climber();
	pump = new Pump();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	// This MUST be here. If the OI creates Commands (which it very likely
	// will), constructing it during the construction of CommandBase (from
	// which commands extend), subsystems are not guaranteed to be
	// yet. Thus, their requires() statements may grab null pointers. Bad
	// news. Don't move it.
	oi = new OI();
	lw = LiveWindow::GetInstance();
	lw->AddActuator("MySubsystem", "motor", new Talon(1));
	
	// instantiate the command used for the autonomous period
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
	autonomousCommand = new AutonomousCommand();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=AUTONOMOUS
  }
	
void Robot::AutonomousInit() 
{
	autonomousCommand = (Command *) chooser->GetSelected();
	autonomousCommand->Start();
	
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
