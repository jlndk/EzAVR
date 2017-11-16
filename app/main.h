//The amount of delay for each loop (in ms)
#ifdef IS_DEBUG
    #define MAIN_DELAY 500
#else
    #define MAIN_DELAY 16
#endif

//The amount of displays conected
#define DISPLAY_UNITS_COUNT 1

//There is 4 displays on each unit
#define DISPLAYS_COUNT DISPLAY_UNITS_COUNT * 4

/*
Here we import of of the library functions.
If you only want to include parts of it, replace this line with seperate include
statements
 */
#include "../lib/all.h"

/*
Here you can import your own code
 */
//#include "my_own_awesome_file.h"

/**
 * Runs when the processor is turned on.
 * Everything that should only run once (in the beginning of the program)
 * should happen here
 */
void initialize() {
    //
}

/**
 * The main loop of the program.
 * Runs continously after the processor is initialized.
 * This is most likely where your code should be placed.
 */
void loop () {
    //
}
