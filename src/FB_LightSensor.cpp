#include <FB_LightSensor.h>

namespace FB {
  LightSensor::LightSensor(int pin) {
    _pin = pin;
    pinMode(_pin, INPUT);
  }

  int LightSensor::getValue() {
    return map(getRawValue(), _floor, _ceiling, DEFAULT_FLOOR, DEFAULT_CEILING);
  }

  void LightSensor::setFloor(int value) {
    _floor = value;
  }

  void LightSensor::setCeiling(int value) {
    _ceiling = value;
  }

  void LightSensor::resetFloor() {
    setFloor(DEFAULT_FLOOR);
  }

  void LightSensor::resetCeiling() {
    setCeiling(DEFAULT_CEILING);
  }

  int LightSensor::getRawValue() {
    return analogRead(_pin);
  }
}
