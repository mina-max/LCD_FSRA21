/*
 * can_id.h
 *
 *  Created on: Apr 19, 2021
 *      Author: rm170154d
 */

#ifndef APPLICATION_USER_CAN_ID_H_
#define APPLICATION_USER_CAN_ID_H_

/*
 * 	BMS HV
 * 	BMS*L_HV_V_ID -> ID for voltages from CELL0 to CELL7  [0-5V] (from slave no.*)
 * 	BMS*H_HV_V_ID -> ID for voltages from CELL8 to CELL14 [0-5V] (from slave no.*)
 *
 */
#define 	BMS0L_HV_V_ID 		0x012C
#define 	BMS0H_HV_V_ID 		0x012D
#define 	BMS1L_HV_V_ID 		0x012E
#define 	BMS1H_HV_V_ID 		0x012F
#define 	BMS2L_HV_V_ID 		0x0130
#define 	BMS2H_HV_V_ID 		0x0131
#define		BMS3L_HV_V_ID 		0x0132
#define 	BMS3H_HV_V_ID 		0x0133
#define 	BMS4L_HV_V_ID 		0x0134
#define 	BMS4H_HV_V_ID 		0x0135
#define 	BMS5L_HV_V_ID 		0x0136
#define 	BMS5H_HV_V_ID 		0x0137
#define 	BMS6L_HV_V_ID		0x0138
#define 	BMS6H_HV_V_ID		0x0139
#define 	BMS7L_HV_V_ID		0x013A
#define 	BMS7H_HV_V_ID		0x013B
#define 	BMS8L_HV_V_ID 		0x013C
#define 	BMS8H_HV_V_ID 		0x013D
#define 	BMS9L_HV_V_ID 		0x013E
#define 	BMS9H_HV_V_ID		0x013F
/*
 * BMS HV
 * BMS*_HV_TEMP_ID -> ID for 7 temperatures (per one slave) [0-80C] (from slave no.*)
 *
 */
#define 	BMS0_HV_TEMP_ID 	0x015E
#define 	BMS1_HV_TEMP_ID 	0x015F
#define 	BMS2_HV_TEMP_ID 	0x0160
#define 	BMS3_HV_TEMP_ID 	0x0161
#define 	BMS4_HV_TEMP_ID 	0x0162
#define 	BMS5_HV_TEMP_ID 	0x0163
#define 	BMS6_HV_TEMP_ID 	0x0164
#define 	BMS7_HV_TEMP_ID 	0x0165
#define 	BMS8_HV_TEMP_ID 	0x0166
#define 	BMS9_HV_TEMP_ID 	0x0167
/*
 *
 * BMS_HV_VCELL* -> Position of CELL* voltage value in CAN message (1 slave -> 15 CELL voltages)
 *
 */
#define 	BMS_HV_VCELL0		0x00
#define 	BMS_HV_VCELL1		0x01
#define 	BMS_HV_VCELL2		0x02
#define 	BMS_HV_VCELL3		0x03
#define 	BMS_HV_VCELL4		0x04
#define 	BMS_HV_VCELL5		0x05
#define 	BMS_HV_VCELL6		0x06
#define 	BMS_HV_VCELL7		0x07
#define 	BMS_HV_VCELL8		0x00
#define 	BMS_HV_VCELL9		0x01
#define 	BMS_HV_VCELL10		0x02
#define 	BMS_HV_VCELL11		0x03
#define 	BMS_HV_VCELL12		0x04
#define 	BMS_HV_VCELL13		0x05
#define 	BMS_HV_VCELL14		0x06
/*
 *
 * BMS_HV_TEMP* -> Position of temperature value in CAN message (7 temperatures in one CAN message,
 * 																 1 slave measures 7 temperatures)
 */
#define 	BMS_HV_TEMP0		0x00
#define 	BMS_HV_TEMP1		0x01
#define 	BMS_HV_TEMP2		0x02
#define 	BMS_HV_TEMP3		0x03
#define 	BMS_HV_TEMP4		0x04
#define 	BMS_HV_TEMP5		0x05
#define 	BMS_HV_TEMP6		0x06

/*
 * BMS_LV_V_TEMP_ID -> ID for voltages and temperatures from CELL0 to CELL3
 */
#define 	BMS_LV_V_TEMP_ID  	0x0190
/*
 * BMS_LV_CELL* -> Position of voltage value in CAN message
 * BMS_LV_TEMP* -> Position of temperature value in CAN message
 */
#define 	BMS_LV_VCELL0 		0x00
#define 	BMS_LV_VCELL1 		0x01
#define 	BMS_LV_VCELL2 		0x02
#define 	BMS_LV_VCELL3 		0x03
#define 	BMS_LV_TEMP0 		0x04
#define 	BMS_LV_TEMP1 		0x05
#define 	BMS_LV_TEMP2 		0x06
#define 	BMS_LV_TEMP3 		0x07

#endif /* APPLICATION_USER_CAN_ID_H_ */
