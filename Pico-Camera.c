#include "pico/stdlib.h"
#include "pico/sync.h"
#include "pico/multicore.h"
#include <malloc.h>
#define SYS_CLK_MHZ 200

void cameraHandler();
void siteHandler();

int main()
{
    stdio_init_all();
    
    multicore_launch_core1(cameraHandler);

    
}

void cameraHandler()
{

}

void siteHandler() 
{

}