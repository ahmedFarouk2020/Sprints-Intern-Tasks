/*********************************************************/
/* author  : Farouk                                      */
/* Version : v01                                         */
/* Date    : Sept 21 2021                              */
/*********************************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "LED_interface.h"
#include "LED_config.h"


void LED_Init(uint8_t copy_u8Port , uint8_t copy_u8Pin)
{
	DIO_setPinDirection(copy_u8Port ,copy_u8Pin, OUTPUT );	
}


void LED_TurnOn(uint8_t copy_u8Port , uint8_t copy_u8Pin)
{
	DIO_setPinValue( copy_u8Port , copy_u8Pin , HIGH );
}


void LED_TurnOff(uint8_t copy_u8Port , uint8_t copy_u8Pin)
{
     DIO_setPinValue(copy_u8Port , copy_u8Pin , LOW );
}
