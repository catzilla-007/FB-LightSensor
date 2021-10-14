// Arduino Franky Bot Light Sensor Library v0.1.0 - Read and calibrate photoresistor.
// https://github.com/catzilla-007/
// Copyright (c) 2021 Jewayson Gonzalgo - Apache 2.0 License

#ifndef FB_LIGHT_SENSOR_H
#define FB_LIGHT_SENSOR_H

// #include <Arduino.h>

namespace FB {
  class LightSensor {
    public:
      LightSensor(int * pin);

    private:
      int * _pin;
      int _floor;
      int _ceiling;
  };
}

#endif
