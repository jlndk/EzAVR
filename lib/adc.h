/**
 * Sets the adc frequency
 */
void set_adc_freq() {
    ADCSRA=(1<<ADEN)|(1<<ADPS2)|(ADPS1)|(ADPS0);
}

/**
 * Reads the voltage from a given pin, using ADC, and returns a value.
 * @param  ch: The pin we should read from
 * @return: the value read from the pin.
 */
int read_analog_pin(int ch) {
    //Select ADC Channel ch must be 0-7
    ch=ch&0b00000111;
    ADMUX|=ch;

    //Start Single conversion
    ADCSRA|=(1<<ADSC);

    //Wait for conversion to complete
    while(!(ADCSRA & (1<<ADIF)));

    //Clear ADIF by writing one to it
    //Note you may be wondering why we have write one to clear it
    //This is standard way of clearing bits in io as said in datasheets.
    //The code writes '1' but it result in setting bit to '0' !!!

    ADCSRA|=(1<<ADIF);

    return(ADC);
}
