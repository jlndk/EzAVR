#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Ports
int PORTA = 0;
int PORTB = 0;
int PORTC = 0;
int PORTD = 0;

//Pins
int PINA = 0;
int PINB = 0;
int PINC = 0;
int PIND = 0;

//Registers
int DDRA = 0;
int DDRB = 0;
int DDRC = 0;
int DDRD = 0;

//Ports
int PA0 = 0;
int PA1 = 0;
int PA2 = 0;
int PA3 = 0;
int PA4 = 0;
int PA5 = 0;
int PA6 = 0;
int PA7 = 0;

int PB0 = 0;
int PB1 = 0;
int PB2 = 0;
int PB3 = 0;
int PB4 = 0;
int PB5 = 0;
int PB6 = 0;
int PB7 = 0;

int PC0 = 0;
int PC1 = 0;
int PC2 = 0;
int PC3 = 0;
int PC4 = 0;
int PC5 = 0;
int PC6 = 0;
int PC7 = 0;

int PD0 = 0;
int PD1 = 0;
int PD2 = 0;
int PD3 = 0;
int PD4 = 0;
int PD5 = 0;
int PD6 = 0;
int PD7 = 0;

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

//Interupts
int TCCR1B = 0;
int WGM12 = 0;
int TIMSK = 0;
int OCIE1A = 0;
int CS10 = 0;
int OCR1A = 0;
int CS11 = 0;


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

int bit_is_clear(int pin, int port) {

}

void sei() {

}
