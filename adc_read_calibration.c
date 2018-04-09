/* ADC1 Calibration
%Calibrated function of the ADC reading
%2017/12/07
%Benjamin
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/queue.h"
#include "driver/gpio.h"
#include "driver/adc.h"

#define ADC1_TEST_CHANNEL (ADC1_CHANNEL_6)

void adc1task(void* arg)
{	
	float adc_read=0.;
    // initialize ADC
    adc1_config_width(ADC_WIDTH_12Bit);
    adc1_config_channel_atten(ADC1_TEST_CHANNEL, ADC_ATTEN_11db);
    while(1){
		adc_read= ((adc1_get_voltage(ADC1_TEST_CHANNEL)*0.985)+217.2);
        printf("%f\n",adc_read);
        vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}

void app_main()
{
	printf("start calibration\n");
    xTaskCreate(adc1task, "adc1task", 1024*3, NULL, 10, NULL);
}
