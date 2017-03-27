// Imaan Hameed
// PinValidator.h
// 02/21/17


#ifndef PINVALIDATOR_H
#define PINVALIDATOR_H

#include <Arduino.h>

class PinValidator {
	public:
		PinValidator(int a, int b, int c, int d);
		void next(int a);
		bool unlocked();
		int pinState;
	private:
	
		int digit1;
		int digit2;
		int digit3;
		int digit4;	
};

#endif