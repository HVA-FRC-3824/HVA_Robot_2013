// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef SHOOTER_WHEEL_H
#define SHOOTER_WHEEL_H
#include "Commands/Subsystem.h"
#include "PIDSource.h"
#include "WPILib.h"
/**
 *
 *
 * @author HVA Robotics Team 3824
 */
//Makes a GearTooth a PIDSource
//would be nicer to subclass but would require changes to auto-generated code
class PIDGearTooth : public PIDSource
{
public:
	GearTooth* gearTooth;

	PIDGearTooth(GearTooth* sensor) { gearTooth = sensor; } 
	
	// Return RPM for the PID controller
	double PIDGet() { double period = gearTooth->GetPeriod();
	if((1.0/period)*60.0 > 5000.0)
		printf("period: %lf", period);
	return (1.0/gearTooth->GetPeriod())*60.0 ; }
};
class ShooterWheel: public Subsystem 
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	
public:
	PIDGearTooth* pidEncoder;
	PIDController *PIDcontroller;
	
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* motor;
	GearTooth* encoder;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	ShooterWheel();
	~ShooterWheel() {delete pidEncoder;}
	
	void InitDefaultCommand();
	
   PIDController *getPIDController();
	void SetWheelSpeed(float voltage);
};
#endif
