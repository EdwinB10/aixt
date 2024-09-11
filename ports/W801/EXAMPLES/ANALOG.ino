// This Arduino code was automatically generated by Aixt Project
// Device = W801
// Board = W801
// Backend = arduino


#define output		OUTPUT
#define input		INPUT
#define in_pullup	INPUT_PULLUP
#define pin.high(PIN_NAME)   digitalWrite(PIN_NAME, HIGH)
#define pin.low(PIN_NAME)   digitalWrite(PIN_NAME, LOW)
#define pin.read(PIN_NAME)   digitalRead(PIN_NAME)
#define pin.setup(PIN_NAME, MODE)    pinMode(PIN_NAME, MODE)
#define pin.write(PIN_NAME, VALUE)   digitalWrite(PIN_NAME, VALUE)

void main__init();

void pin.init();


enum main____pin_names {
led1 = main__LED_BUILTIN_1,
led2 = main__LED_BUILTIN_2,
led3 = main__LED_BUILTIN_3,
led4 = main__LED_BUILTIN_4,
led5 = main__LED_BUILTIN_5,
led6 = main__LED_BUILTIN_6,
led7 = main__LED_BUILTIN_7,
a1 = main__PB21,
a2 = main__PB22,
a3 = main__PB23,
a4 = main__PB24,
a5 = main__PB0,
a6 = main__PB1,
pin1 = main__PB21,
pin2 = main__PB22,
i = 0,
};


void main__init() {
}


void pin.init() {
}


void setup() {
main__init();
pin.init();
pin.setup(main__a1, input);
pin.setup(main__a5, output);
pin.setup(main__a6, output);
pin.low(main__a5);
pin.low(main__a6);
while(true) {if(250 >= main__adc.read(main__a1)) {pin.high(main__a5);pin.low(main__a6);}else {pin.low(main__a5);pin.high(main__a6);};}
}