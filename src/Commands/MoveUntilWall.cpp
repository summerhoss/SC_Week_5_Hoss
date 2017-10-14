#include "MoveUntilWall.h"

MoveUntilWall::MoveUntilWall(int distance) : distanceToTravel(distance) {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(DriveTrain);
	//doesn't work?
}

// Called just before this Command runs the first time
void MoveUntilWall::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void MoveUntilWall::Execute() {
	DriveTrain::setSpeed(0.4);
	//doesn't work and I dont understand
}

// Make this return true when this Command no longer needs to run execute()
bool MoveUntilWall::IsFinished() {
	int distance = DriveTrain::getUltra();
	if(distance < distanceToTravel)
	{
		return false;
	}
	else
	{
		return true;
	}
}

// Called once after isFinished returns true
void MoveUntilWall::End() {
	DriveTrain::stop();
	//What do I put instead of DriveTrain:: ?
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MoveUntilWall::Interrupted() {

}
