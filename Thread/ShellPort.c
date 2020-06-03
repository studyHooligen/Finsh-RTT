#include "main.h"
#include "dma.h"
#include "usart.h"
#include "gpio.h"
#include "app_rtthread.h"

void toggleLED1(void)
{
    HAL_GPIO_TogglePin(LED1_GPIO_Port,LED1_Pin);
}

MSH_CMD_EXPORT(toggleLED1,toggle The LED Light);
