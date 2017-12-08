//Load our app code
#include "app/main.h"

//Load the debug module if debug is enabled (after all other libraries)
#ifdef IS_DEBUG
    #include "lib/debug.h"
#endif

/**
 * Prepares the processor and bootstraps the program
 */
void lib_init () {
    //Set the initial value of the displays
    set_display(-1);

    //Call the user's initialization code
    initialize();

    //Enable interupts after the users initialization code
    enable_interupts();
}

/**
 * The entrypoint for this program
 */
int main(void)
{
    //Prepare the processor before running
    lib_init();

    //Start infinte loop
    while(1) {
        //Call the user's main loop each time
        loop();

        //If debug mode is enabled, then show the debug "ui"
        #if IS_DEBUG
            debug_handle();
        #endif

        // Wait for some time
        delay(MAIN_DELAY);
    }
}
