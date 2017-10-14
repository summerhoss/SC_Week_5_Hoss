#ifndef OI_H
#define OI_H

class OI {

private:
	Joystick* control;
	bool pressed;
public:
	OI();
	~OI();
	bool pressButton();
};

#endif  // OI_H
