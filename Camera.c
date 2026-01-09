#include "Camera.h"
#include "pico/stdlib.h"
#include "hardware/dma.h"
#include "hardware/pio.h"

void configureCameraSettings();

void configurePIO(PIO pio, uint sm)
{

}

void configureDMA(uint dmaChannel)
{
    dma_channel_config config = dma_channel_get_default_config(dmaChannel);
}

void cameraInit(CameraConfig* cameraConfig)
{
    
}