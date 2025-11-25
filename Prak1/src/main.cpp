#include <Arduino.h>

#define LED_PIN   2      // Pin LED
#define PWM_FREQ  1000   // Frekuensi PWM (Hz)
#define PWM_RES   8      // Resolusi bit (0–255)
#define PWM_CH    0      // Channel PWM (0–15 untuk ESP32)

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
