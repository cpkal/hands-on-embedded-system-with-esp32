#include <Arduino.h>
#include <BH1750.h>
#include <Wire.h>

#define LED_PIN 2
#define PWM_CHANNEL 0
#define PWM_FREQ 5000
#define PWM_RESOLUTION 8

BH1750 lightMeter;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  lightMeter.begin();
  ledcSetup(PWM_CHANNEL, PWM_FREQ, PWM_RESOLUTION);
  ledcAttachPin(LED_PIN, PWM_CHANNEL);
  Serial.println(F("BH1750 Test begin"));
}

void loop() {
  float lux = lightMeter.readLightLevel();
  int dutyCycle;

  if (lux > 2500) {
    dutyCycle = 0;
  } else if (lux <= 0) {
    dutyCycle = 255;
  } else {
    dutyCycle = 255 - (lux / 10);
    dutyCycle = constrain(dutyCycle, 0, 255);
  }

  ledcWrite(PWM_CHANNEL, dutyCycle);

  Serial.print("Light: ");
  Serial.print(lux);
  Serial.print(" lx, Duty Cycle: ");
  Serial.println(dutyCycle);

  delay(1000);
}