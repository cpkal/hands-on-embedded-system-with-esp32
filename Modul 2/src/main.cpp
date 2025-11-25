#include <Arduino.h>

void setup() {
  Serial.begin(9600);

  delay(1000);
}

void loop() {
  ESP_LOGI("TEST", "HADIR");
  delay(3000);
  ESP_LOGE("ERR", "ERROR");
  delay(3000);
}
