// Project Name: Aixt, https://github.com/fermarsan/aixt.git
// Author: Fabián A. Rojas Acosta, Alberto Pinzón Valero and Fernando M. Santa
// Date: 2024
// License: MIT
module pin

// setup configures a pin's input/output mode
#define pin.setup(PIN_NAME, MODE)  pinMode(PIN_NAME, MODE)