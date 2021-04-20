/*
 * can.c
 *
 *  Created on: Mar 28, 2021
 *      Author: rm170154d
 */

#include "can.h"
#include "can_id.h"
extern uint8_t rxData[8];
uint32_t TxMailbox;
extern int screen;

void sendMessage(uint8_t data[]) {
	CAN_TxHeaderTypeDef pHeader;
	pHeader.DLC = 8;
	pHeader.RTR = CAN_RTR_DATA;
	pHeader.IDE = CAN_ID_STD;
	pHeader.StdId = 0x48;
	HAL_CAN_AddTxMessage(&hcan2, &pHeader, data, &TxMailbox);
	while (HAL_CAN_IsTxMessagePending(&hcan2, TxMailbox))
		;
}

uint8_t bms_hv_voltage[10][15];
uint8_t bms_hv_temperature[10][7];
uint8_t bms_lv_voltage[4];
uint8_t bms_lv_temperature[4];

uint8_t getSlave(uint32_t id) {
	switch (id) {
	case BMS0L_HV_V_ID || BMS0H_HV_V_ID || BMS0_HV_TEMP_ID:
		return 0;
	case BMS1L_HV_V_ID || BMS1H_HV_V_ID || BMS1_HV_TEMP_ID:
		return 1;
	case BMS2L_HV_V_ID || BMS2H_HV_V_ID || BMS2_HV_TEMP_ID:
		return 2;
	case BMS3L_HV_V_ID || BMS3H_HV_V_ID || BMS3_HV_TEMP_ID:
		return 3;
	case BMS4L_HV_V_ID || BMS4H_HV_V_ID || BMS4_HV_TEMP_ID:
		return 4;
	case BMS5L_HV_V_ID || BMS5H_HV_V_ID || BMS5_HV_TEMP_ID:
		return 5;
	case BMS6L_HV_V_ID || BMS6H_HV_V_ID || BMS6_HV_TEMP_ID:
		return 6;
	case BMS7L_HV_V_ID || BMS7H_HV_V_ID || BMS7_HV_TEMP_ID:
		return 7;
	case BMS8L_HV_V_ID || BMS8H_HV_V_ID || BMS8_HV_TEMP_ID:
		return 8;
	case BMS9L_HV_V_ID || BMS9H_HV_V_ID || BMS9_HV_TEMP_ID:
		return 9;
	}
}

void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan) {
	CAN_RxHeaderTypeDef pHeader;
	HAL_CAN_GetRxMessage(hcan, CAN_RX_FIFO0, &pHeader, rxData);
	sendMessage(rxData);
	uint32_t messageID = pHeader.StdId;
	switch (messageID) {

	//BMS HV VOLTAGES
	case (messageID >= BMS0L_HV_V_ID && messageID <= BMS9H_HV_V_ID):
		uint8_t slave = getSlave(messageID); //BMS SLAVE NO
		if (messageID % 2 == 0)
			for (int i = 0; i < 8; i++)  //CELL0 - CELL7
				bms_hv_voltage[slave][i] = rxData[i];
		else
			for (int i = 0; i < 7; i++) //CELL8 - CELL15
				bms_hv_voltage[slave][i + 8] = rxData[i];
		break;

		//BMS HV TEMPERATURES
	case (messageID >= BMS0_HV_TEMP_ID && messageID <= BMS9_HV_TEMP_ID):
		uint8_t slave = getSlave(messageID); //BMS SLAVE NO
		for (int i = 0; i < 7; i++)  //7 temperatures for one slave
			bms_hv_temperature[slave][i] = rxData[i];
		break;

		//BMS LV VOLTAGES + TEMPERATURES
	case (BMS_LV_V_TEMP_ID):
		for (int i = 0; i < 4; i++)
			bms_lv_voltage[i] = rxData[i];
			bms_lv_temperature[i] = rxData[i+4];
		break;

	}

}

void HAL_CAN_RxFifo1MsgPendingCallback(CAN_HandleTypeDef *hcan) {
	CAN_RxHeaderTypeDef pHeader;
	HAL_CAN_GetRxMessage(hcan, CAN_RX_FIFO1, &pHeader, rxData);
	sendMessage(rxData);
}

void canInit() {
	HAL_CAN_ActivateNotification(&hcan2, CAN_IT_TX_MAILBOX_EMPTY);
	HAL_CAN_ActivateNotification(&hcan2, CAN_IT_RX_FIFO0_MSG_PENDING);
	HAL_CAN_ActivateNotification(&hcan2, CAN_IT_RX_FIFO1_MSG_PENDING);

	CAN_FilterTypeDef CanFilter;
	CanFilter.FilterIdHigh = 0x100 << 5;
	CanFilter.FilterIdLow = 0;
	CanFilter.FilterMaskIdHigh = 0x700 << 5;
	CanFilter.FilterMaskIdLow = 0;
	CanFilter.FilterFIFOAssignment = CAN_FILTER_FIFO0;
	CanFilter.FilterBank = 15;
	CanFilter.FilterMode = CAN_FILTERMODE_IDMASK;
	CanFilter.FilterScale = CAN_FILTERSCALE_32BIT;
	CanFilter.FilterActivation = CAN_FILTER_ENABLE;
	HAL_CAN_ConfigFilter(&hcan2, &CanFilter);
	HAL_CAN_Start(&hcan2);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin) {
	if (GPIO_Pin == GPIO_PIN_0) {
		if (screen == 1)
			screen = 2;
		else
			screen = 1;
	}
}

