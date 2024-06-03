/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "FreeRTOS.h"
#include "task.h"
#include "FreeRTOSConfig.h"
#include "uart.h"


#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
/*
void vLEDAperiodicTask(void *pvParam)
{
	//	led_toggle();
		led_on();
		vTaskDelay(1000);

		led_off();

    	vTaskDelete(NULL);
}

int main(void)
{
	led_init();

	xTaskCreate(vLEDAperiodicTask, "LED Toggle", configMINIMAL_STACK_SIZE,NULL,2,NULL);
	vTaskStartScheduler();
	while(1);
	return 0;


}
*/
void vLEDAperiodicTask(void *pvParam)
{
	while(1)
	{
		UartPuts("Navnita Barhate \n");
		vTaskDelay(1000);
	}
	vTaskDelete(NULL);
}



int main(void)
{
	UartInit(BAUD_9600);
	xTaskCreate(vLEDAperiodicTask, "LED Toggle", configMINIMAL_STACK_SIZE, NULL, 2, NULL);

	vTaskStartScheduler();
	while(1);
	return 0;
}


