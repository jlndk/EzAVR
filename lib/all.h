//Load core runtime modules
#ifdef IS_DEBUG
    //Only load the AVR environment simulation if we're debugging
    #include "sim.h"
//Load the AVR modules if debug is disabled
#else
    #include <avr/io.h>
    #include <util/delay.h>
#endif

//Load modules that should be loaded everywhere
#include "display.h"
#include "utils.h" //Load our utility functions

//Load modules that should only be loaded in the AVR environment
#if !defined(IS_DEBUG)
    //#include "lib/readpin.h"
#endif
