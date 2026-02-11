#include "sensors.h"
#include <stdlib.h>  // برای شبیه‌سازی مقادیر

SensorData readSensors() {
    SensorData data;
    // شبیه‌سازی مقادیر باتری
    data.voltage = 3.5 + ((float)rand()/RAND_MAX)*1.5;  // 3.5V تا 5V
    data.current = ((float)rand()/RAND_MAX)*2.0;        // 0 تا 2A
    data.temperature = 20 + ((float)rand()/RAND_MAX)*15; // 20 تا 35C
    return data;
}
