/*************************************
            WELCOME SCREEN
**************************************/

#include "welcomeScreen.h"

void welcome(){
    /*Change Color */
    system("color 4e");

    /***********************
    Get system date and time
    ***********************/
    SYSTEMTIME date;
    GetSystemTime(&date);

    /*******************
    Print Welcome Message
    ********************/

    printf("\n\n\n\n");
    printf("\t\t\t\t__________________________________________\n");
    printf("\t\t\t\t|              WELCOME TO                 |\n");
    printf("\t\t\t\t|        HOTEL SAGARMATHA SUITE           |\n");
    printf("\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t|        HOTEL RESERVATION SYSTEM         |\n");
    printf("\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t|              BUILT BY:                  |\n");
    printf("\t\t\t\t|                                         |\n");
    printf("\t\t\t\t|            BIRAJ PARAJULI               |\n");
    printf("\t\t\t\t|           SAURAV TANDUKAR               |\n");
    printf("\t\t\t\t|          AASHISH TIMALSINA              |\n");
    printf("\t\t\t\t|             BIRBAL KHADKA               |\n");
    printf("\t\t\t\t|                                         |\n");
    printf("\t\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t\t|                                         |\n");
    printf("\t\t\t\t|             KATHMANDU,NEPAL             |\n");
    printf("\t\t\t\t|    CONTACT US:01-123456789, 123456789   |\n");
    printf("\t\t\t\t|_________________________________________|\n");
    printf("\t\t\t\t|\t\t%d / %d / %d \t\t  |\n", date.wDay, date.wMonth, date.wYear,date.wHour, date.wMinute); //Print today's date
    printf("\t\t\t\t|_________________________________________|\n\n\n");


    printf("\t\t\tPress any button to continue");
    getch();
    system("cls");


}

