#include <Wire.h>
#include <DHT.h>
#include <SPI.h>
#include <LoRa.h>

#define DHTPIN 4
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

int heartRate = 0;
int motion = 0;

void setup() {
  Serial.begin(115200);
  dht.begin();

  LoRa.begin(433E6); // Adjust frequency
}

void loop() {
  float temp = dht.readTemperature();
  float humidity = dht.readHumidity();

  // Dummy values (replace with sensors)
  heartRate = random(60, 120);
  motion = random(0, 1);

  String status = decisionLogic(heartRate, temp, motion);

  if (status == "EMERGENCY") {
    LoRa.beginPacket();
    LoRa.print("HR:" + String(heartRate));
    LoRa.print(",TEMP:" + String(temp));
    LoRa.print(",STATUS:" + status);
    LoRa.endPacket();
  }

  delay(5000);
}

String decisionLogic(int hr, float temp, int motion) {
  if (hr > 110 && temp > 37) return "WARNING";
  if (motion == 0 && hr > 110) return "EMERGENCY";
  return "NORMAL";
}