#include "adc.h"

int button_is_pressed(int port)
{
    return bit_is_clear(PINB,port);
}

void digital_write(int pin, int activated)
{


}
