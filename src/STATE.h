#ifndef STATE_h
#define STATE_h

#include <Arduino.h>

class STATE
{

  public:
	STATE();

    volatile int16_t DriveRightSpeed = 0;
    volatile int16_t DriveLeftSpeed = 0;
    volatile int16_t BallLiftMotorSpeed = 0;
    volatile int16_t CatapultMotorSpeed = 0;
    
  volatile bool AutonLightSensorActive = false;

  private:

};

#endif