/* This is Welcome screen of program where user can see details of hotel and user and admin login button.*/
#include <stdio.h>
#include <time.h>


int main(){
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
    printf("\t\t*        Brought To You By The C Group        *\n");
    printf("\t\t*             KATHMANDU,NEPAL                    *\n");
    printf("\t\t*     CONTACT US:01-454575552, 35455852       *\n");
    printf("\t\t*************************************************\n\n\n");


    printf("\n");
    printf("\t\t* Date & Time: %s* \n",ctime(&t));


    return 0;
}