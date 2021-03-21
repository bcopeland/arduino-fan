/*
 * Control a PC fan with arduino.
 * (c) 2021 Bob Copeland
 * GPLv2 or later.
 *
 * This sketch for Arduino NG assumes a pot is hooked between +5V and GND
 * with the wiper attached to Analog In 0.  The fan is connected to
 *
 *    PWM, [nothing], +9V, GND
 *
 * according to fan pinout, where PWM is any of 9, 10, 11.  All are
 * programmed with duty cycle according to the pot.
 */
#define ARRAY_SIZE(a) (sizeof(a)/sizeof(a[0]))

int pwm_pins[] = { 9, 10, 11 };
int pot_pin = A0;

void setup()
{
    unsigned int i;
    pinMode(pot_pin, INPUT);
    for (i=0; i < ARRAY_SIZE(pwm_pins); i++) {
        pinMode(pwm_pins[i], OUTPUT);
    }
}

void loop()
{
    unsigned int i;
    unsigned int val = analogRead(pot_pin);
    for (i=0; i < ARRAY_SIZE(pwm_pins); i++) {
        analogWrite(pwm_pins[i], val >> 2);
    }
}
