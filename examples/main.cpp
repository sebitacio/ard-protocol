#include <Arduino.h>
#include "datalink.h"

Datalink datalink = Datalink(0x7E, 90);

void setup() {
    Serial.begin(115200);
}

void loop() {
    datalink.read(Serial);
}