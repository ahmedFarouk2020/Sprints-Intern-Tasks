/*
 * App.c
 *
 * Created: 9/21/2021 11:38:03 PM
 *  Author: Farouk
 */ 

#include <string.h>
#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "LED_interface.h"
#include "UARTif.h"
#include "App.h"

void App_Init(void)
{
	UARTif_Init(UART0);
	LED_Init(LED_0); // RED
	LED_Init(LED_1); // GREEN
	LED_Init(LED_2); // BLUE
}

uint8_t App_SendCommand(uint8_t *cmd)
{
	// uart send cmd
	UARTif_SendStr(UART0,cmd);
	return 0;
}

uint8_t App_ReceiveCommand(uint8_t *cmd)
{
	// uart receive cmd
	UARTif_ReceiveStr(UART0,cmd);
	// process data
	if (strncmp(cmd,"START",5) == 0)
	{
		return START;
	}
	else if (strncmp(cmd,"WAIT",4) == 0)
	{
		return WAIT;
	}
	else if (strncmp(cmd,"STOP",4) == 0)
	{
		return STOP;
	}
	else if (strncmp(cmd,"AT",2) == 0)
	{
		return AT;
	}
	else
	{
		return 255;
	}
	// return the Id of cmd
	
}

void App_TakeAction(uint8_t cmd_id)
{
	switch (cmd_id)
	{
		case STOP:
			LED_TurnOn(LED_0);
			LED_TurnOff(LED_1);
			LED_TurnOff(LED_2);
			break;
			
		case START:
			LED_TurnOn(LED_1);
			LED_TurnOff(LED_0);
			LED_TurnOff(LED_2);
			break;
			
		case WAIT:
			LED_TurnOn(LED_2);
			LED_TurnOff(LED_1);
			LED_TurnOff(LED_0);
			break;
			
		case AT:
			App_SendCommand("\rOK\r");
			break;
			
		default:
			App_SendCommand("\rERROR!\r");
			break;
	}
	
}