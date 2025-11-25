#include <Arduino.h>
#define LED_PIN_1 2
#define LED_PIN_2 4
#define LED_PIN_3 19
#define LED_PIN_4 18

void setup() {
  pinMode(LED_PIN_1, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  pinMode(LED_PIN_3, OUTPUT);
  pinMode(LED_PIN_4, OUTPUT);
  Serial.begin(9600);
  delay(1000);
}

void LED_ON(int LED_PIN) {
  digitalWrite(LED_PIN, HIGH);
  delay(2000);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    char data = Serial.read();
    //ESP_LOGI("UART RECEIVE", "Karakter yang dikirim: %c", data);
    if (data == '1') {
      ESP_LOGI("LED 1 Menyala", "Karakter Input = %c", data);
      LED_ON(LED_PIN_1);
    } else if (data == '2') {
      ESP_LOGI("LED 2 Menyala", "Karakter Input = %c", data);
      LED_ON(LED_PIN_2);
    } else if (data == '3') {
      ESP_LOGI("LED 3 Menyala", "Karakter Input = %c", data);
      LED_ON(LED_PIN_3);
    } else if (data == '4') {
      ESP_LOGI("LED 4 Menyala", "Karakter Input = %c", data);
      LED_ON(LED_PIN_4);
    }
  }
}