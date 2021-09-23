/*
 * echo.c
 *
 * Created: 9/22/2021 1:02:53 PM
 *  Author: Farouk
 */ 

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "UART _interface.h"



int main(void)
{
	UART_Init(BR_9600,_1_stopbit,even_parity,Asynchronous,_8_bits,polling);
	while(1)
	{
		uint8_t character = UART_ReceiveCharSych();
		UART_SendChar(character);
	}
}