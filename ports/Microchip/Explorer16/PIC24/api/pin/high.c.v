// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fernando M. Santa
// Date: 2022-2024
// License: MIT
module pin

// high macro sets an output pin. This is expanded in this way:
//   pin.high(b2)
//     |
//	   +-->	pin.high(B, 2)
//	          |
//	          +-->	PORTBbits.PORTB2 = 1	// PIC16	
// 	          		LATBbits.LATB2 = 1		// (PIC18, PIC24, dsPIC33)
#define pin.high_(PORT_NAME, PIN)   LAT ## PORT_NAME ## bits.LAT ## PORT_NAME ## PIN = 1

#define pin.high(PIN_NAME)  pin.high_(PIN_NAME)

