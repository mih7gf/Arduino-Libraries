// Imaan Hameed
// PinValidator.cpp
// 02/21/17

#include <PinValidator.h>

/*
pinState -2 = incorrect pin entered, wating for for clear key *, (key 12)
pinState -1 = unlocked
pinState 0 = locked with no correct digit
pinState 1 = locked with first correct digit
pinState 2 = locked with second correct digit
pinState 3 = locked with third correct digit
pinState 4 = locked with fourth correct digit
*/

PinValidator::PinValidator(int a, int b, int c, int d){
	pinState = 0;
	digit1 = a;
	digit2 = b;
	digit3 = c;
	digit4 = d;
}

bool PinValidator::unlocked(){
	return pinState == -1; // if unlocked
}



void PinValidator::next(int x){
	if(x==0){}
	
	else if(x==11)  pinState = 0;
	
	else if(x==digit1 && pinState==0)  pinState = 1;
	
	else if(x==digit2 && pinState==1)  pinState = 2;	
	
	else if(x==digit3 && pinState==2)  pinState = 3;
	
	else if(x==digit4 && pinState==3)  pinState = 4;
	
	else if(x==12 && pinState==4)  pinState = -1; // unlocked
	
	else  pinState = -2; //incorrect input will require the clear key *, (key 11)
}
