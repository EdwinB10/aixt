// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fabián A. Rojas Acosta, Alberto Pinzón Valero and Fernando M. Santa
// Date: 2024
// License: MIT
module pwm

//Writes an analog value (PWM wave) to a pin
#define pwm.write(PIN_NAME, VALUE)  analogWrite(PIN_NAME, VALUE)