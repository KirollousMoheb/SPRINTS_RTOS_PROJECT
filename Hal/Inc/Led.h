/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Led.h
 *  Module:  	  Led
 *  Description:  Header file for Led driver
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Kirollous Moheb
 *	Date:		  02/08/2022
 *********************************************************************************************************************/
#ifndef LED_H_
#define LED_H_

/**********************************************************************************************************************
* INCLUDES
*********************************************************************************************************************/
#include "Std_Types.h"
#include "Dio.h"
#include "Led.h"
#include "Dio.h"
#include "Macros.h"

/**********************************************************************************************************************
*  GLOBAL DATA PROTOTYPES
*********************************************************************************************************************/
typedef Dio_ChannelType Led_LedChannelType;

typedef Led_LedChannelType Device_Channel; 



 /**********************************************************************************************************************
 *  GLOBAL FUNCTIONS PROTOTYPES
 *********************************************************************************************************************/
/*******************************************************************************
* Service Name: initLED
* Service ID[hex]: 0x00
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): None
* Parameters (inout): None
* Parameters (out): None
* Return value: void
* Description: Function to initialize the connected channel using Port MCAL
*******************************************************************************/
 void initLED(void);
 
 /*******************************************************************************
* Service Name: LedOn
* Service ID[hex]: 0x01
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): LedChannel - An identifier for the dedicated led
* Parameters (inout): None
* Parameters (out): None
* Return value: void
* Description: Function to turn on the Led using Dio MCAL
*******************************************************************************/
 void LedOn(Led_LedChannelType LedChannel);
 
 /*******************************************************************************
* Service Name: LedOff
* Service ID[hex]: 0x02
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): LedChannel - An identifier for the dedicated led
* Parameters (inout): None
* Parameters (out): None
* Return value: void
* Description: Function to turn off the Led using Dio MCAL
*******************************************************************************/
 void LedOff(Led_LedChannelType LedChannel);
 
  /*******************************************************************************
* Service Name: toggleLed
* Service ID[hex]: 0x03
* Sync/Async: Synchronous
* Reentrancy: Reentrant
* Parameters (in): LedChannel - An identifier for the dedicated led
* Parameters (inout): None
* Parameters (out): None
* Return value: void
* Description: Function to toggle the Led using Dio MCAL
*******************************************************************************/
void toggleLed(Led_LedChannelType LedChannel);


 #endif /* LED_H_ */
 /**********************************************************************************************************************
 *  END OF FILE: Led.h
 *********************************************************************************************************************/