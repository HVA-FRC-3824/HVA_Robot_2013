// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.

#ifndef SET_PICKUP_POSITION_H
#define SET_PICKUP_POSITION_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

/****** PICKUP POSITION ******/
#define PICKUP_MAX_VALUE 				         10000.0
#define PICKUP_MIN_VALUE 		 		             0.0
#define PICKUP_THRESHOLD 		                     5.0

#define PICKUP_POSITION						   	  1000.0
#define PICKUP_RELEASE_POSITION					   370.0
#define PICKUP_HOME_POSITION	                   210.0

/**
 *
 *
 * @author ExampleAuthor
 */
class SetPickupPosition: public Command
{
private:
	double m_position;
public:
	SetPickupPosition(double position_parameter);
	SetPickupPosition();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
