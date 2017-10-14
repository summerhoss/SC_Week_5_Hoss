#ifndef MoveUntilWall_H
#define MoveUntilWall_H

#include "../CommandBase.h"
#include "Subsystems/DriveTrain.h"
#include <WPILib.h>

class MoveUntilWall : public CommandBase {
private:
	int distanceToTravel;
public:
	MoveUntilWall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MoveUntilWall_H
