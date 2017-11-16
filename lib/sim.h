#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Ports
int PORTA = 0;
int PORTB = 0;
int PORTC = 0;
int PORTD = 0;

//Registers
int DDRA = 0;
int DDRB = 0;
int DDRC = 0;
int DDRD = 0;

//ADC
int ADMUX = 0;
int ADSC = 0;
int ADC = 0;
int ADIF = 0;
int REFS0 = 0;
int ADCSRA = 0;
int ADEN = 0;
int ADPS0 = 0;
int ADPS1 = 0;
int ADPS2 = 0;

void _delay_ms(int amount)
{
    int num = amount * 1000;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not acheived
    while (clock() < start_time + num);
}

int read_pin_val(int max) {
    return rand() & max;
}
