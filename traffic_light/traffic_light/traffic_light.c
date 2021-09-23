/*
 * traffic_light.c
 *
 * Created: 9/21/2021 11:32:31 PM
 *  Author: Farouk
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "App.h"


int main(void)
{
	App_Init();
    while(1)
    {
		sint8_t cmd[6] = {0};
		uint8_t cmd_id = App_ReceiveCommand(cmd);
		App_TakeAction(cmd_id);
    }
}