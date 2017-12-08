void debug_handle() {

    //Run interupts manually
    interupt1();

    system("clear");

    printf("REGISTERS");

    printf("\n-------------------------------------\n");

    printf("DDR A: ");
    print_dec_as_bin(DDRA);
    printf(" = %d ", DDRA);

    printf("\n");

    printf("DDR B: ");
    print_dec_as_bin(DDRB);
    printf(" = %d ", DDRB);

    printf("\n");

    printf("DDR C: ");
    print_dec_as_bin(DDRC);
    printf(" = %d ", DDRC);

    printf("\n");

    printf("DDR D: ");
    print_dec_as_bin(DDRD);
    printf(" = %d ", DDRD);

    printf("\n-------------------------------------\n\n");


    printf("PORTS:");
    printf("\n-------------------------------------\n");
    printf("PORT A: ");
    print_dec_as_bin(PORTA);
    printf(" = %d ", PORTA);

    printf("\n");

    printf("PORT B: ");
    print_dec_as_bin(PORTB);
    printf(" = %d ", PORTB);

    printf("\n");

    printf("PORT C: ");
    print_dec_as_bin(PORTC);
    printf(" = %d ", PORTC);

    printf("\n");

    printf("PORT D: ");
    print_dec_as_bin(PORTD);
    printf(" = %d ", PORTD);

    printf("\n-------------------------------------\n\n");

    printf("PINS:");
    printf("\n-------------------------------------\n");
    printf("PIN A: ");
    print_dec_as_bin(PINA);
    printf(" = %d ", PINA);

    printf("\n");

    printf("PIN B: ");
    print_dec_as_bin(PINB);
    printf(" = %d ", PINB);

    printf("\n");

    printf("PIN C: ");
    print_dec_as_bin(PINC);
    printf(" = %d ", PINC);

    printf("\n");

    printf("PIN D: ");
    print_dec_as_bin(PIND);
    printf(" = %d ", PIND);

    printf("\n-------------------------------------\n\n");

    printf("DISPLAY DIGITS:");
    printf("\n-------------------------------------");

    for(int i = 0; i < DISPLAYS_COUNT; i++) {
        printf("\n%d: %d = ", i, currentDigits.digits[i]);
        print_dec_as_bin(digits[currentDigits.digits[i]]);
        printf(" = %d", digits[currentDigits.digits[i]]);
    }
    printf("\n-------------------------------------\n");
}
