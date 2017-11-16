long map(long x, long in_min, long in_max, long out_min, long out_max)
{
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

#ifdef IS_DEBUG
    void delay(int amount)
    {
        // Storing start time
        clock_t start_time = clock();

        int num = amount * 1000;

        // looping while required time is not acheived
        while (clock() < start_time + num);
    }

    void print_dec_as_bin(int n) {
        int k, l;

        l = n <= 255 ? 7 : 21;

        printf("0x");

        for (int c = l; c >= 0; c--) {
            k = n >> c;

            if (k & 1) {
                printf("1");
            }
            else {
                printf("0");
            }
        }
    }
#else
    void delay(int amount) {
        _delay_ms(MAIN_DELAY);
    }
#endif
