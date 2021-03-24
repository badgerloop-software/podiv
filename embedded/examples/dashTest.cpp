#include <iox_morty.h>
#include <iox_rick.h>
#include <TelemetryLoop.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
extern "C" {
#include "can_devices.h"
#include "data.h"
#include "motor.h"
#include "proc_iox.h"
#include "state_machine.h"
}

iox_morty ioxMorty;
iox_rick ioxRick;

int init()
{
    initData();
    SetupTelemetry((char*)"127.0.0.1", 33333);
}
int main()
{
    init();
    while (1)
        ;
}
