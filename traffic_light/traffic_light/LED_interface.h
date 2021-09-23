/*******************************************************/
/* author  : Farouk                                    */
/* Version : v01                                       */
/* Date    : Sept 21 2021                              */
/********************** ********************************/

#ifndef LED_INTERFACE_H
#define LED_INTERFACE_H

#include "DIO_interface.h" // temporary solution

#define LED_0		GPIOA, PIN0
#define LED_1		GPIOA, PIN1
#define LED_2		GPIOA, PIN2

void LED_Init(uint8_t copy_u8Port , uint8_t copy_u8Pin);
void LED_TurnOn(uint8_t copy_u8Port , uint8_t copy_u8Pin);
void LED_TurnOff(uint8_t copy_u8Port , uint8_t copy_u8Pin);
#endif
