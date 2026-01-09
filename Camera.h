#ifndef CAMERA_H
#include <stdlib.h>
#include "pico/stdlib.h"
#define CAMERA_H

typedef struct cameraConfig
{
    PIO pio;
    uint stateMachine;
    uint DMAChannel;
    uint8_t *capture_buffer;
} CameraConfig;

void cameraInit(CameraConfig* cameraConfig);

#endif