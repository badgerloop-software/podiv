// Includes
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "LVTelemetry_Loop.h"
#include "LVTCPSocket.h"
/* ADD SENSOR INCLUDES HERE */
extern "C" 
{
    #include "lv_iox.h"
    #include "proc_iox.h"
	#include "imu.h"
	#include "braking.h"
}

int init() {
	// Init all peripherals
	SetupIMU();
    initLVIox();
    initProcIox();
	initPressureMonitor();
    // Start telemetry services
	//SetupLVTelemetry((char *) "192.168.1.112", 33333);
	//SetupLVTCPServer();
	
    return 0;	
}

int main() {
	/* Create the big data structures to house pod data */
	
	if (init() == 1) {
		printf("Error in initialization! Exiting...\r\n");
		exit(1);
	}
	uint8_t data[5] = {0};
	while(1) {
		printf("READING: %d\n", data[0]);
		usleep(100000);
		// Control loop
	}
    return 0;
}
