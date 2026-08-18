#include "interrupt_handler.h"

#include "main.h"

#include <stdio.h>

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
    switch (GPIO_Pin)
    {
        case BUTTON_1_Pin:
            printf("Button 1 Pressed!\n\r");
            break;
        case BUTTON_2_Pin:
            printf("Button 2 Pressed!\n\r");
            break;
        default:
            break;
    }
}
