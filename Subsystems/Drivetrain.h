// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef DRIVETRAIN_H
#define DRIVETRAIN_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "../Robot.h"
/**
 * This subsystem activates all driving capibilities and depth perseption.
 * The current implementation of the PIDOuput can only be used to rotate the robot.
 *
 * @author HVA Robotics Team 3824
 */
class Drivetrain: public Subsystem, public PIDSource, public PIDOutput
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public: 
//Dead code, but may want to try later when there is time
//   class TurnSource: public PIDSource
//   {
//      double PIDGet();
//   };
//   class DistanceSource: public PIDSource
//   {
//      double PIDGet();
//   };
//   class TurnOutput: public PIDOutput
//   {
//      void PIDWrite(float output);
//   };
//   class DistanceOutput: public PIDOutput
//   {
//      void PIDWrite(float output);
//      
//   };
//   TurnSource *turnSource;
//   DistanceSource *distanceSource;
//   TurnOutput *turnOutput;
//   DistanceOutput *distanceOutput;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* frontRight;
	SpeedController* frontLeft;
	SpeedController* rearRight;
	SpeedController* rearLeft;
	RobotDrive* holonomic;
	AnalogChannel* ultrasonicFront;
	AnalogChannel* ultrasonicRear;
	Gyro* gyro;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Drivetrain();
	void InitDefaultCommand();
	void HolonomicDrive(Joystick *joystick);
	void HolonomicDrive(float magnitude, float direction, float rotation);
	float GetFrontDistance();
	float GetRearDistance();
	void PIDWrite(float output);
	double PIDGet();
};
#endif
