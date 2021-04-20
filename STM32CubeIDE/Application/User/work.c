#include "work.h"

#include "FreeRTOS.h"
#include "task.h"

#include "can.h"


static void workTask(void *parameters)
{
	screen = 1;
	while(1){
	 //uint8_t data1[4] = {0x11, 0x11, 0x22, 0x22};
	 //sendMessage(data1);
	}

}

void workInit()
{
	xTaskCreate(workTask, "workTask", 128, NULL, 5, NULL);
}


