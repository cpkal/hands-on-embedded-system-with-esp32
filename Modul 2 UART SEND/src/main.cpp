#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  ESP_LOGI("INFO", "INFO MICROCONTROLLER");
  delay(3000);
  ESP_LOGE("ERROR", "ERROR MICROCONTROLLER");
  delay(3000);
  ESP_LOGV("VERBOSE", "VERBOSE MICROCONTROLLER");
  delay(3000);
  ESP_LOGW("WARNING", "WARNING MICROCONTROLLER");
  delay(3000);
  ESP_LOGD("DEBUG", "DEBUG MICROCONTROLLER");
  delay(3000);
}