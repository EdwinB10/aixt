// This C code was automatically generated by Aixt Project
// Device = CH573F
// Board = device
// Backend = c


#include "CH57x_common.h"
#define true 1
#define a4  A, 4
#define a5  A, 5
#define a8  A, 8
#define a9  A, 9
#define a10 A, 10
#define a11 A, 11
#define a12 A, 12
#define a13 A, 13
#define a14 A, 14
#define a15 A, 15
#define b4  B, 4
#define b7  B, 7
#define b10 B, 10
#define b11 B, 11
#define b12 B, 12
#define b13 B, 13
#define b14 B, 14
#define b15 B, 15
#define b22 B, 22
#define b23 B, 23
#define output    		GPIO_ModeOut_PP_5mA
#define input     		GPIO_ModeIN_Floating
#define in_pullup		GPIO_ModeIN_PU
#define pin.in_pulldown	GPIO_ModeIN_PD
#define pin.setup_(port, pin, ...) GPIO##port##_ModeCfg(GPIO_Pin_##pin, ##__VA_ARGS__)
#define pin.setup(PIN_NAME, PIN_MODE)  pin.setup_(PIN_NAME, PIN_MODE)
#define pwm.off(channel, ...)	PWMX_ACTOUT(CH_PWM##channel, 0, High_Level, DISABLE)
#define pwm.write(channel, value, ...)	PWMX_ACTOUT(CH_PWM##channel, value, High_Level, ENABLE)
#define adc.setup(channel)  ADC_ChannelCfg(channel)


void adc.read(uint8_t valor);




void adc.read(uint8_t valor){
    value = ADC_ExcutSingleConver() + ADC_DataCalib_Rough();
}   


int main(void) {

pin.setup(a4, input);
adc.setup(0);
while(true) {
adc.read(value);
pwm.write(4, value);
}
return 0;
}