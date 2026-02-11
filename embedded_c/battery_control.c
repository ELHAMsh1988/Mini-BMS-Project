#include "battery_control.h"
#include <stdio.h>

void checkBattery(SensorData data) {
    if (data.voltage < 3.6)
        printf("Warning: Voltage too low! %.2f V\n", data.voltage);
    else if (data.voltage > 4.2)
        printf("Warning: Voltage too high! %.2f V\n", data.voltage);

    if (data.temperature > 30)
        printf("Warning: Temperature high! %.2f C\n", data.temperature);
}
