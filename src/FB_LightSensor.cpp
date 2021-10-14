// #include <Arduino.h>
#include "FB_LightSensor.h"

namespace FB {
  LightSensor::LightSensor(int * pin) {
    _pin = pin;
    // pinMode(*_pin, INPUT);
  }
}
