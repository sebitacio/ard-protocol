#include <Arduino.h>
#include"package.h"
#include "datalink.h"

Datalink datalink = Datalink(0x7E, 90, true);

void setup() {
    Serial.begin(115200);
    Serial.println("Cargo");
}

void loop() {
    Package b = Package(8);
    Serial.println("Cargo");
    uint8_t* payload = new uint8_t[1];
    payload[0] = 2;
    datalink.send(payload,2,Serial);
}