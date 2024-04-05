// This C code was automatically generated by Aixt Project
// Device = PIC24FJ128GA010
// Board = Explorer 16
// Backend = c

#include <xc.h>
#include <stdint.h>
#include <stdbool.h>
#define FCY 8000000UL
#pragma config POSCMOD = HS
#pragma config OSCIOFNC = OFF
#pragma config FCKSM = CSDCMD
#pragma config FNOSC = PRIPLL
#pragma config IESO = OFF
#pragma config WDTPS = PS32768
#pragma config FWPSA = PR128
#pragma config WINDIS = ON
#pragma config FWDTEN = OFF
#pragma config ICS = PGx2
#pragma config GWRP = OFF
#pragma config GCP = OFF
#pragma config JTAGEN = OFF
#define led3    A, 0	// Onboard LEDs
#define led4    A, 1
#define led5    A, 2
#define led6    A, 3
#define led7    A, 4
#define led8    A, 5
#define led9    A, 6
#define led10   A, 7
#define sw3     D, 6	// Onboard switchs
#define sw4     D, 13
#define sw5     A, 7
#define sw6     D, 7
#define pot     B, 5	// Onboard potentiometer
#define TRISa	TRISA	// port setup name equivalents
#define TRISb	TRISB
#define TRISc	TRISC
#define TRISd	TRISD
#define TRISe	TRISE
#define TRISf	TRISF
#define TRISg	TRISG
#define PORTa	PORTA	// port in name equivalents
#define PORTb	PORTB
#define PORTc	PORTC
#define PORTd	PORTD
#define PORTe	PORTE
#define PORTf	PORTF
#define PORTg	PORTG
#define LATa	LATA	// port out name equivalents
#define LATb	LATB
#define LATc	LATC
#define LATd	LATD
#define LATe	LATE
#define LATf	LATF
#define LATg	LATG
#define port__write(PORT_NAME, VALUE)	LAT ## PORT_NAME = VALUE
#define port__setup(PORT_NAME, VALUE)   TRIS ## PORT_NAME = VALUE
#define port__read(PORT_NAME)  PORT ## PORT_NAME
#include <libpic30.h>
#define time__sleep_ms(TIME)    __delay_ms(TIME)

void main__init();

void port__init();

void time__init();

void main__init() {
	AD1PCFG = 0xFFDF
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	AD1CSSL = 0
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	AD1CON2 = 0
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	AD1CON3 = 0x1F02
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	.ADON = 1
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	TRISA = 0xff00
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	.TRISD6 = 1
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	.TRISD13 = 1
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	.TRISD7 = 1
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	.TRISB5 = 1
	[unhandled stmt str type: v.ast.SemicolonStmt ]
	port__init();
	time__init();
	
}

void port__init() {
}

void time__init() {
}

int main(void ) {
	main__init();
	while(true) {
		port__write(a, 0b11111111);
		time__sleep_ms(200);
		port__write(a, 0b00000000);
		time__sleep_ms(200);
	}
	return 0;
}
