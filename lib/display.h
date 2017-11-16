/**
 * The binary codes for the digits on the display.
 * Each code corresponds with it's position, such that 0 is at the zeroth position,
 * 1 is at the first position, and so on...
 */
 const int digits[] = {0b11000000, 0b11111001, 0b10100100, 0b10110000, 0b10011001, 0b10010010, 0b10000010, 0b11111000, 0b10000000, 0b10010000};

//The display that is currently modified
unsigned int currentDisplay = 0;

typedef struct DisplayDigits {
    int digits[DISPLAYS_COUNT];
    int comma_position;
} DisplayDigits;

/**
 * The state of the all displays.
 * Each index of the array corresponds with a digit, so the number 3456 would
 * become {3,4,5,6}.
 * Also -1 means that the digit should be empty, so the number 12 would be
 * represented as {-1, -1, 1, 2}
 */
struct DisplayDigits currentDigits;

/**
 * Calulates the amount of digits in a number
 * @param  num: The number we wish to calculate the amount of digits of.
 * @return: The amount of digits in the given number
 */
int get_digit_count(int num) {
    int digitCount = 1;

    //While the number can still be divided by 10 we increment the digit counter
    while(num /= 10) {
        digitCount++;
    }

    return digitCount;
}

DisplayDigits intToDigits(int num)
{
    //Initialize a new DisplayDigits struct
    struct DisplayDigits display;

    //Fill the digits array in the struct with -1.
    for(int i = 0; i < DISPLAYS_COUNT; i++) {
        display.digits[i] = -1;
    }

    //Get the amount of digits in the given number
    int length = get_digit_count(num);

    //Update the struct with the digits from the number
    for(int i = 0; i < length; i++){
        display.digits[DISPLAYS_COUNT-1-i] = num % 10;
        num /= 10;
    }

    return display;
}

/**
 * Update the digits that should be shown on screen, based on a given number.
 * @param num: The digit that should be outputted. Can be between 0 and DISPLAYS_MAX_NUM.
 */
void set_display(int num)
{
    //Throw error
    if(num > 9999) {
        //@TODO: Display error code
        return;
    }
    currentDigits = intToDigits(num);
    //@TODO: Implement comma
}

void display_handle()
{
    //Bitshift and perform bitwise inversion
    PORTC = 1<<currentDisplay;

    /*
    If the digit is is not -1 we output the corresponding digit otherwise we
    clear the current display
     */
    int formattedDigit = digits[currentDigits.digits[currentDisplay]];
    PORTD = currentDigits.digits[currentDisplay] != -1 ? formattedDigit : 255;

    /*
    We increment the currentDisplay and loop back to zero when we surpass the
    amount of connected displays
     */
    currentDisplay = currentDisplay + 1 >= DISPLAYS_COUNT ? 0 : currentDisplay + 1;
}
