#include "Hbridge.h"


/**
 * @Constructor
 */
Hbridge::Hbridge(const int EN, const int driver1, const int driver2):
    _EN(EN), _driver1(driver1), _driver2(driver2) {}
/**
 * [PWMRobot::setup set motor pins to OUTPUT]
 */
void Hbridge::setup()
{

    pinMode(_EN, OUTPUT);
    pinMode(_driver1, OUTPUT);
    pinMode(_driver2, OUTPUT);

}

void Hbridge::turnLeft(){
  digitalWrite(_driver1, HIGH);
  digitalWrite(_driver2, LOW);
  analogWrite(_EN, _enableSpeed);

}

void Hbridge::turnRight(){
  digitalWrite(_driver1, LOW);
  digitalWrite(_driver2, HIGH);
  analogWrite(_EN, _enableSpeed);

}

void Hbridge::stop(){
  digitalWrite(_driver1, LOW);
  digitalWrite(_driver2, LOW);
  analogWrite(_EN, _enableSpeed);

}

void Hbridge::freeRunning(){
  digitalWrite(_driver1, LOW);
  digitalWrite(_driver2, LOW);
  analogWrite(_EN, 0);
}

void Hbridge::setSpeed(int speed){
  _enableSpeed = speed;
}
