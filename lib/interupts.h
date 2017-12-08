/**
 * Interupts
 */
void interupt1() {
    display_handle();
}

#if !defined(IS_DEBUG)
//This interupt handles display refreshing
ISR(TIMER1_COMPA_vect) {
    interupt1();
}
#endif

void enable_interupts() {
    /**
     * Interupts
     */
    TCCR1B |= (1 << WGM12); // Configure timer 1 for CTC mode
    TIMSK |= (1 << OCIE1A); // Enable CTC interrupt
    OCR1A   = 0x99; // CTC Compare value
    TCCR1B |= ((1 << CS11) | (1 << CS10)); // Start timer at Fcpu/64
    sei(); //  Enable global interrupts
}
