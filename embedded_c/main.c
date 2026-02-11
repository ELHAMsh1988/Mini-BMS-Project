#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sensors.h"
#include "battery_control.h"

int main() {
    srand(time(NULL));
    for(int i=0; i<10; i++) {
        SensorData data = readSensors();
        checkBattery(data);
    }
    return 0;
}
