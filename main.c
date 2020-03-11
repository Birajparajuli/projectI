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





int main() {
    /*This code prints Welcome Message on the Screen*/
    time_t t;
    time(&t);
    printf("\t\t*************************************************\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*       -----------------------------           *\n");
    printf("\t\t*        WELCOME TO HOTEL HELLO WORLD           *\n");
    printf("\t\t*       -----------------------------           *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*                                               *\n");
    printf("\t\t*        Brought To You By The C Group          *\n");
    printf("\t\t*             KATHMANDU,NEPAL                   *\n");
    printf("\t\t*     CONTACT US:01-123456789, 123456789        *\n");
    printf("\t\t*************************************************\n\n\n");
    printf("\n");
    printf("\t\t* Date & Time: %s* \n",ctime(&t));


    /*User Authentic System*/
    login();

    /*Room Booking */
    roomBooking();



    return 0;
}
