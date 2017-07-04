/*
  PWMRobot.h - Library for PWMRobot extends BaseRobot with pwm functionalities.
  Created by João Campos.
  Released into the public domain.
  works only with the control pins
  - advantage -  uses less pins
  - disadvantage - needs to work with pwm pins
*/

#ifndef Hbridge_h
#define Hbridge_h

#include "Arduino.h"
#include <math.h>

class Hbridge
{
  public:
    Hbridge(const int EN, const int driver1, const int driver2);
    void setup();
    void stop();
    void freeRunning();
    void turnLeft();
    void turnRight();
    void setSpeed(int);

  private:
   const  int _EN;
   const  int _driver1;
   const  int _driver2;
   const int _enableSpeed = 1023;


};


#endif
