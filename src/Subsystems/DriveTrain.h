#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>

#include "WPILib.h"

class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Ultrasonic* ultrasonicSensor;
	Jaguar* driveMotor;

public:
	DriveTrain();
	~DriveTrain();
	void InitDefaultCommand();
	double getUltra();
	void setSpeed(double speed);
	void stop();
};

#endif  // DriveTrain_H
