#ifndef FB_LIGHT_SENSOR_H
#define FB_LIGHT_SENSOR_H

#define DEFAULT_FLOOR     0
#define DEFAULT_CEILING   1023

#include <Arduino.h>

namespace FB {
  class LightSensor {
    public:
      LightSensor(int pin);
      int getValue();
      void setFloor(int value);
      void setCeiling(int value);
      void resetFloor();
      void resetCeiling();

    private:
      int getRawValue();
      int _pin;
      int _floor    = DEFAULT_FLOOR;
      int _ceiling  = DEFAULT_CEILING;
  };
}

#endif
