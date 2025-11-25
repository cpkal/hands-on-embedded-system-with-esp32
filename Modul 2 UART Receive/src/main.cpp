#include <Arduino.h>

void setup() {
  Serial.begin(9600);
  delay(1000);
}

void loop() {
  if(Serial.available()) {
    char data = Serial.read();
    ESP_LOGI("UART_RECEIVE", "Karakter yang dikirim: %c", data);

    if(data == '1') {
      ESP_LOGI("UART_ACTOIN", "Hello World 1!");
    }
    if(data == '2') {
      ESP_LOGI("UART_ACTION", "Hello World 2!");
    }
    if(data == '3') {
      ESP_LOGI("UART_ACTION", "Hello World 3!");
    }
    if(data == '4') {
      ESP_LOGI("UART_ACTION", "Hello World 4!");
    }
    if(data == '5') {
      ESP_LOGI("UART_ACTION", "Hello World 5!");
    }
  }
}

