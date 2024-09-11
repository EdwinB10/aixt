// This C code was automatically generated by Aixt Project
// Device = CH573F
// Board = device
// Backend = c


#include "CH57x_common.h"
#define true 1
#define time__sleep_ms(TIME)    DelayMs(TIME)
#define uart.println(MSG)		uart.print(MSG);  uart.write('\n');  uart.write('\r')
#define uart.any()  R8_UART0_RFC
#define	uart.write(DATA)	R8_UART0_THR = DATA
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
#define pin.high_(port, ...) GPIO##port##_SetBits(GPIO_Pin_##__VA_ARGS__)
#define pin.high(PIN_NAME)  pin.high_(PIN_NAME)
#define pin.low_(port, ...) GPIO##port##_ResetBits(GPIO_Pin_##__VA_ARGS__)
#define pin.low(PIN_NAME)  pin.low_(PIN_NAME)
#define pin.read_(port, ...) GPIO##port##_ReadPortPin(GPIO_Pin_##__VA_ARGS__)
#define pin.read(PIN_NAME)  pin.read_(PIN_NAME)
#define pin.setup_(port, pin, ...) GPIO##port##_ModeCfg(GPIO_Pin_##pin, ##__VA_ARGS__)
#define pin.setup(PIN_NAME, PIN_MODE)  pin.setup_(PIN_NAME, PIN_MODE)
#define pin.toggle_(port, ...) GPIO##port##_InverseBits(GPIO_Pin_##__VA_ARGS__)
#define pin.toggle(PIN_NAME)  pin.toggle_(PIN_NAME)

void uart.print(char* msg);
uint8_t uart.read(void);
void uart.setup(uint32_t baud_rate);



void uart.print(char* msg){
    while(*msg != '\0'){
        uart.write(*msg);
        msg++;
    }
}


uint8_t uart.read(void){
    while(!(R8_UART0_RFC == 1)){}
    return R8_UART0_RBR; 
}


void uart.setup(uint32_t baud_rate){
    UART0_BaudRateCfg(baud_rate);
    R8_UART0_FCR = (2 << 6) | RB_FCR_TX_FIFO_CLR | RB_FCR_RX_FIFO_CLR | RB_FCR_FIFO_EN;
    R8_UART0_LCR = RB_LCR_WORD_SZ;
    R8_UART0_IER = RB_IER_TXD_EN;
    R8_UART0_DIV = 1;

    GPIOB_SetBits(GPIO_Pin_7);
    GPIOB_ModeCfg(GPIO_Pin_4, GPIO_ModeIN_PU);   //RX
    GPIOB_ModeCfg(GPIO_Pin_7, GPIO_ModeOut_PP_5mA);  //TX
}


int main(void) {

pin.high(b7);
pin.setup(b4, in_pullup);
pin.setup(b7, output);
uart.setup(115200);
while(true) {
TxBuff = uart.read();
uart.write(TxBuff);
time__sleep_ms(2000);

}
return 0;
}
