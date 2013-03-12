// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#ifndef FRISBEE_RAPID_SHOOT_H
#define FRISBEE_RAPID_SHOOT_H


#include "Commands/Subsystem.h"
#include "FrisbeeShoot.h"
#include "../Robot.h"

/**
 * It is being exececuted while button 2 is held. It shoots when PID controller is on target.
 */
class FrisbeeRapidShoot: public Command {
private:
	Timer voltageShootTimer;
	FrisbeeShoot shootCommand;
	int shotCount;
	int requiredShots;
public:
	FrisbeeRapidShoot();
	FrisbeeRapidShoot(int reqShots);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
