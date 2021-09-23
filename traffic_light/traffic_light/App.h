/*
 * App.h
 *
 * Created: 9/21/2021 11:38:17 PM
 *  Author: Farouk
 */ 


#ifndef APP_H_
#define APP_H_


//----- Command IDs -----------
#define STOP  0
#define START 1
#define WAIT  2
#define AT    3

void App_Init(void);
/* retun command ID */
uint8_t App_SendCommand(uint8_t *cmd);



uint8_t App_ReceiveCommand(uint8_t *cmd);

void App_TakeAction(uint8_t cmd_Id);

#endif /* APP_H_ */