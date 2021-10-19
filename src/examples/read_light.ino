#include <FB_LightSensor.h>

#define LIGHT_INPUT_PIN A0

FB::LightSensor lightSensor(LIGHT_INPUT_PIN);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(lightSensor.getValue());
  delay(1000);
}
