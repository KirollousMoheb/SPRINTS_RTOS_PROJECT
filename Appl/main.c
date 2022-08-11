#include "FreeRTOS.h"
#include "Led.h"
#include "task.h"
#define 	LED_1	LED1_CHANNEL_ID
void LED_Task(void *pv){
	TickType_t xLastWakeTime;
	const TickType_t xFrequency = 1000;//1 second periodicity
	xLastWakeTime = xTaskGetTickCount ();

  	while(1)
		{	
			toggleLed(LED_1);
		  xTaskDelayUntil( &xLastWakeTime, xFrequency );
		}
}

int main(void){
	TaskHandle_t Task1_handler;

	initLED();
	xTaskCreate(LED_Task,"LED_Task",configMINIMAL_STACK_SIZE,NULL,1,&Task1_handler);
	vTaskStartScheduler();
	
	while(1);
	
}
