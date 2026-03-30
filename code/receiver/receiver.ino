#include <SPI.h>
#include <LoRa.h>

void setup() {
  Serial.begin(115200);
  LoRa.begin(433E6);
}

void loop() {
  int packetSize = LoRa.parsePacket();
  if (packetSize) {
    String data = "";
    while (LoRa.available()) {
      data += (char)LoRa.read();
    }
    Serial.println("Received: " + data);
  }
}