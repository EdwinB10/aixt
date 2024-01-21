// Project Name: Aixt project, https://gitlab.com/fermarsan/aixt-project.git
// File Name: sleep_s.c
// Author: Luis Alfredo Pinto Medina Fernando Martínez Santa
// Date: 2024
// License: MIT
//
// Description: Microseconds delay function
//              (PIC16F84A port)
#include <xc.h>

#define sleep_s(TIME)    __delay_s(TIME)