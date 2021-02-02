/*
 * File:   main.c
 * Author: samgu
 *
 * Created on February 1, 2021, 2:24 PM
 */


#include <avr/io.h>
#include <util/delay.h>

int main(void) {
    DDRB |= 0xFF;
    
    while(1) 
    {
        PORTB ^= 0xFF;
        _delay_ms(4000);
    }
}
