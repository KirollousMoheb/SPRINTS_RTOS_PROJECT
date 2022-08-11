/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *  File:  		  Led.c
 *  Module:  	  Led
 *  Description:  Source file for Led driver
 *  -------------------------------------------------------------------------------------------------------------------
 *	Author: 	  Kirollous Moheb
 *	Date:		  02/08/2022
 *********************************************************************************************************************/
 
 /**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Led.h"
#include "Port.h"
/**********************************************************************************************************************
 *  STATIC GLOBAL DATA
 *********************************************************************************************************************/
static Device_Channel deviceChannel;


/**********************************************************************************************************************
 *  GLOBAL FUNCTIONS
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
void initLED(void)
{
	Port_Init(&Port_ConfigType);
}
 
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
void LedOn(Led_LedChannelType LedChannel)
{
	Dio_WriteChannel(LedChannel, LEVEL_HIGH);
}
 
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
void LedOff(Led_LedChannelType LedChannel)
{
	Dio_WriteChannel(LedChannel, LEVEL_LOW);
}

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
void toggleLed(Led_LedChannelType LedChannel)
{
	Dio_FlipChannel(LedChannel);
}


 /**********************************************************************************************************************
 *  END OF FILE: Led.c
 *********************************************************************************************************************/