/*
 * UART_If.c
 *
 * Created: 9/22/2021 9:33:41 PM
 *  Author: Farouk
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "UART _interface.h"
#include "UARTif.h"

void UARTif_Init(uint8_t Uart_Id)
{
	switch (Uart_Id)
	{
		case 0:
			UART_Init(BR_9600,_1_stopbit,disabled,Asynchronous,_8_bits,polling);
			break;
	}
}

void UARTif_SendStr(uint8_t Uart_Id, uint8_t* str)
{
	switch (Uart_Id)
	{
		case 0:
			UART_SendString(str);
			break;
	}
}

void UARTif_ReceiveStr(uint8_t Uart_id, uint8_t* buffer)
{
	switch (Uart_id)
	{
		case 0:
		UART_ReceiveString(buffer);
		break;
	}
}