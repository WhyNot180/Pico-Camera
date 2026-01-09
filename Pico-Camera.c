#include "pico/stdlib.h"
#include "pico/sync.h"
#include "pico/multicore.h"
#include "Camera.h"
#include "hardware/pio.h"
#include "hardware/dma.h"
#include <malloc.h>
#define SYS_CLK_MHZ 200

uint8_t capture_buffer[324*324];

void cameraHandler();
void siteHandler();

int main()
{
    stdio_init_all();
    
    multicore_launch_core1(cameraHandler);

    
}

void cameraHandler()
{
    CameraConfig cameraConfig = { pio0, pio_claim_unused_sm(pio0, true), dma_claim_unused_channel(true), capture_buffer };
    cameraInit(&cameraConfig);
}

void siteHandler() 
{
    
}