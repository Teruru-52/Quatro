#ifndef _IR_SENSOR_H_
#define _IR_SENSOR_H_
#include "main.h"

#define SAMPLING_COUNT 16

void IR_PWM_Start();
void ReadFrontIRSensor();
void ReadBackIRSensor();
void UpdateIRSensorData();

#endif // _IR_SENSOR_H_
