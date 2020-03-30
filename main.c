/*PROJECT I*/
/*This is main file of the project */
/* HOTEL RESERVATION SYSTEM*/

/*Global Libraries*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>

/*Local Libraries*/
#include "login.h"
#include "booking.h"
#include "welcomeScreen.h"
#include "printBooking.h"





int main() {
    /*welcome screen*/
    welcome();

    /*User Authentic System*/
    login();

    /*Room Booking */
    roomBooking();

    /*Print Booking*/
    printBooking();


return 0;
}
