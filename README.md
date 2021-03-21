# Introduction

This is a simple sketch for controlling a CPU fan with Arduino.
It has been tested on Arduino NG with an external power supply.

The speed is controlled by a potentiometer with wiper connected
to A0.

Connect +9V and GND pins to the power and ground of the fan, and
either pin 9, 10, 11 to the PWM pin.  The signal is just duplicated
to ease controlling multiple fans or for monitoring the speed.

## Building

```
    $ make && make upload
```

For writeup, see:
See: https://bobcopeland.com/blog/2021/03/house-of-zephyrus/
