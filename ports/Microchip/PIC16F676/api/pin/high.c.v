// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// File Name: high.c.v
// Author: Cesar Alejandro Roa Acosta and Fernando M. Santa
// Date: 2024
// License: MIT
//
// Description: Pin management functions
//              (PIC16F676 port)

module pin

#define pin__high(PIN_NAME)  PIN_NAME = 1
