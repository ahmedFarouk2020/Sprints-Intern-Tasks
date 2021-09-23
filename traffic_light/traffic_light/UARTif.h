/*
 * UART_If.h
 *
 * Created: 9/22/2021 9:33:57 PM
 *  Author: Farouk
 */ 


#ifndef UART_IF_H_
#define UART_IF_H_

//-------- UART IDs ---------
#define UART0   0
#define UART1   1

void UARTif_Init(uint8_t Uart_Id);

void UARTif_SendStr(uint8_t Uart_Id, uint8_t* str);

void UARTif_ReceiveStr(uint8_t Uart_id, uint8_t* buffer);



#endif /* UART_IF_H_ */