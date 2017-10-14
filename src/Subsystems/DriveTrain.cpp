#include "DriveTrain.h"
#include "../RobotMap.h"
#include "Commands/MoveUntilWall.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain"), driveMotor(new Jaguar(MOTORPORT)), ultrasonicSensor(new Ultrasonic(ULTRASONIC_TRIGGER, ULTRASONIC_ECHO)) {
	ultrasonicSensor->SetAutomaticMode(true);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new MoveUntilWall());
}

double DriveTrain::getUltra() {
	return ultrasonicSensor->GetRangeInches();
}

void DriveTrain::setSpeed(double speed)
{
	driveMotor->SetSpeed(speed);
}

void DriveTrain::stop()
{
	driveMotor->StopMotor();
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
DriveTrain::~DriveTrain()
{
	delete driveMotor;
	delete ultrasonicSensor;
}
