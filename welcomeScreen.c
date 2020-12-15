/*************************************
            WELCOME SCREEN
**************************************/

#include "welcomeScreen.h"

void welcome(){

    system("color 4e");
    printf("\n\n\n\n");


    printf("\t\t\t__________________________________________\n");
    printf("\t\t\t|              WELCOME TO                 |\n");
    printf("\t\t\t|          HOTEL EMPATHY SUITE            |\n");
    printf("\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t|                                         |\n");
    printf("\t\t\t|                                         |\n");
    printf("\t\t\t|                                         |\n");
    printf("\t\t\t|-----------------------------------------|\n");
    printf("\t\t\t|                                         |\n");
    printf("\t\t\t|             KATHMANDU,NEPAL             |\n");
    printf("\t\t\t|    CONTACT US:01-123456789, 123456789   |\n");
    printf("\t\t\t|_________________________________________|\n\n\n");


    printf("\t\t\tPress any button to continue");
    getch();
    system("cls");

    return 0;
}

