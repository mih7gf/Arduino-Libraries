// Imaan Hameed
// mih7gf
// EventTimer.cpp
// 02/04/17

#include "EventTimer.h"
/* 
EventTimer::EventTimer(void) {
  isRunning = false;
  startTime = NULL;
  duration = NULL;
}*/
void EventTimer::start(unsigned long millisec) {
  isRunning = true;
  startTime = millis();
  duration = millisec;
}
bool EventTimer::checkExpired() {
  if(isRunning && (millis()-startTime)>=duration) {
    isRunning = false;
    return true;
  }
  return false;
}
void EventTimer::cancel() {
  isRunning = false;
}

