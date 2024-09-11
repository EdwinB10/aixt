// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Cristian Garzón
// Date: 2023 - 2024
// Description: UART1 functions (WCH-CH573F)

module uart1

#define uart1.println(MSG)		uart1.print(MSG);  uart1.write('\n');  uart1.write('\r')