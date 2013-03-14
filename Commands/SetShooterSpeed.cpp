// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "SetShooterSpeed.h"
#include <math.h>
SetShooterSpeed::SetShooterSpeed(double speed, bool isRPM) 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterWheel);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	// remember the desired shooter speed
	m_shooterSpeed = speed;
	
	// indicate that the speed was specified in the constructor
	m_SpeedSpecifiedInConstructor = true;
	
	// Indicate that the shooter speed is set in rpm mode.
	m_isRPM = isRPM;
}
SetShooterSpeed::SetShooterSpeed() 
{
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooterWheel);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	
	// indicate that the speed was not specified in the constructor
	m_SpeedSpecifiedInConstructor = false;
}
// Called just before this Command runs the first time
void SetShooterSpeed::Initialize() 
{
	// determine if the shooter speed should be read from the Pot
	if (m_SpeedSpecifiedInConstructor == true) // use speed specified
	{
		// Voltage or PID control
		if(m_isRPM == false)
		{
			// Voltage Mode
			Robot::shooterWheel->getPIDController()->Disable();
		}
		else // Velocity PID mode
		{
			// read the desired shooter RPM from the constructor
			Robot::shooterWheel->getPIDController()->SetSetpoint(m_shooterSpeed);
			
			// enable the PID controller
			Robot::shooterWheel->getPIDController()->Enable(); 
		}
	}
	else // values should be read from pot
	{
		// Read if the driverStation is voltage or pid control
		m_isRPM = !(DriverStation::GetInstance()->GetEnhancedIO().GetDigital(INPUT_SHOOTER_RPM_VOLTAGE));
		
		// Voltage or PID control
		if(m_isRPM == false)
		{
			// Voltage Mode
			Robot::shooterWheel->getPIDController()->Disable();
		}
		else
		{
		   // read the value from the pot
			m_shooterSpeed = DriverStation::GetInstance()->GetEnhancedIO().GetAnalogIn(ANALOG_SHOOTER_SPEED);
			// Convert the pot value to speed
			m_shooterSpeed = m_shooterSpeed * (SHOOTER_SPEED_MAX_VALUE - SHOOTER_SPEED_MIN_VALUE) / 3.3 + SHOOTER_SPEED_MIN_VALUE;
			
			
			if (m_shooterSpeed > SHOOTER_SPEED_MAX_VALUE)
			{
				m_shooterSpeed = SHOOTER_SPEED_MAX_VALUE;
			}
			if (m_shooterSpeed < SHOOTER_SPEED_MIN_VALUE)
			{
				m_shooterSpeed = SHOOTER_SPEED_MIN_VALUE;
			}
			
			// Set the setpoint
			Robot::shooterWheel->getPIDController()->SetSetpoint(m_shooterSpeed);
			// enable the PID controller
			Robot::shooterWheel->getPIDController()->Enable(); 
		}
	}
	// 
}
// Called repeatedly when this Command is scheduled to run
void SetShooterSpeed::Execute() 
{
   // determine if the shooter speed should be read from the Pot
	if (m_SpeedSpecifiedInConstructor == true) // use speed specified
	{
		if(m_isRPM == false)
		{
			// Set the shooter voltage
			Robot::shooterWheel->SetWheelSpeed(m_shooterSpeed);
		}
	}
	else // Use pot to control
	{
		if(m_isRPM == false) // Voltage Control
		{
			// read the value from the pot
			m_shooterSpeed = DriverStation::GetInstance()->GetEnhancedIO().GetAnalogIn(ANALOG_SHOOTER_SPEED);
			
			// Convert the pot value to a positive 0-1 moter value
			m_shooterSpeed = m_shooterSpeed / 3.3;
			
			// Set the shooter voltage
			Robot::shooterWheel->SetWheelSpeed(m_shooterSpeed);
		}
		else // RPM Control
		{
			// Read the value from the pot
			m_shooterSpeed = DriverStation::GetInstance()->GetEnhancedIO().GetAnalogIn(ANALOG_SHOOTER_SPEED);
			
			// Convert the pot value to RPM
			m_shooterSpeed = m_shooterSpeed * (SHOOTER_SPEED_MAX_VALUE - SHOOTER_SPEED_MIN_VALUE)/3.3 + SHOOTER_SPEED_MIN_VALUE;
			
			if (m_shooterSpeed > SHOOTER_SPEED_MAX_VALUE)
			{
				m_shooterSpeed = SHOOTER_SPEED_MAX_VALUE;
			}
			if (m_shooterSpeed < SHOOTER_SPEED_MIN_VALUE)
			{
				m_shooterSpeed = SHOOTER_SPEED_MIN_VALUE;
			}
			
			// Update the setpoint
			Robot::shooterWheel->getPIDController()->SetSetpoint(m_shooterSpeed);
		}
	}
	if(Robot::shooterWheel->pidEncoder->gearTooth->StatusIsFatal())
	{
		printf("Status is Fatal: True\n");
	}
	// <DEBUG>
//	SmartDashboard::PutNumber("Shooter Speed", m_shooterSpeed);
//	SmartDashboard::PutBoolean("isRPM", m_isRPM);
	// </DEBUG>
}
// Make this return true when this Command no longer needs to run execute()
bool SetShooterSpeed::IsFinished() 
{
	// There are two casses that we want the robot to finish
	
	// Case 1: Speed is meet
	// determine is the shooter speed is within the desired limit
	if (fabs(m_shooterSpeed - Robot::shooterWheel->pidEncoder->PIDGet()) < SHOOTER_SPEED_THRESHOLD)
		return true;
	
	// Case 2: The speed is controlled by pot and mode changes
	if ((m_SpeedSpecifiedInConstructor == false) && 
			(m_isRPM != !(DriverStation::GetInstance()->GetEnhancedIO().GetDigital(INPUT_SHOOTER_RPM_VOLTAGE))))
		return true;
	
	// Return true if the voltage is set
	if (m_isRPM == false)
		return true;
	
	return false;	
}
// Called once after isFinished returns true
void SetShooterSpeed::End() 
{
	// not disabling because we always want the shooter to keep running
	 SmartDashboard::PutNumber("Shooter Speed Period", (1.0/Robot::shooterWheel->encoder->GetPeriod())*60.0);
		 SmartDashboard::PutNumber("Shooter Speed GIT", Robot::shooterWheel->pidEncoder->PIDGet());
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetShooterSpeed::Interrupted()
{
	// not disabling because we always want the shooter to keep running
	// ideally when interrupting it should reset to previous value but is probably overkill
}
