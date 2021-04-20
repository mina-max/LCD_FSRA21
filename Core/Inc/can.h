/*
 * can.h
 *
 *  Created on: Mar 28, 2021
 *      Author: rm170154d
 */

#ifndef APPLICATION_USER_CAN_H_
#define APPLICATION_USER_CAN_H_

#include "main.h"




extern CAN_HandleTypeDef hcan2;
uint8_t rxData[8];
int screen;

void sendMessage(uint8_t data[]);
void canInit();


#endif /* APPLICATION_USER_CAN_H_ */
