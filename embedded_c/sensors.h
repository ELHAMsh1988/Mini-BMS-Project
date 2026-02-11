#ifndef SENSORS_H
#define SENSORS_H

typedef struct {
    float voltage;
    float current;
    float temperature;
} SensorData;

SensorData readSensors();

#endif
