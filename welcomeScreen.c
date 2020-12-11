/*************************************
            WELCOME SCREEN
**************************************/

#include "welcomeScreen.h"

void welcome(){
    printf("\n");
    printf("\t\t\t                  |\\/|                     \n");
    printf("\t\t\t                  |__|                     \n");
    printf("\t\t\t__________________________________________\n\n");
    printf("\t\t\t              WELCOME TO                  \n");
    printf("\t\t\t          HOTEL EMPATHY SUITE               \n\n");
    printf("\t\t\t------------------------------------------\n");
    printf("\t\t\t                                          \n");
    printf("\t\t\t             KATHMANDU,NEPAL                \n");
    printf("\t\t\t    CONTACT US:01-123456789, 123456789     \n");
    printf("\t\t\t__________________________________________\n\n\n");


    printf("Press any button to continue");
    getch();
    system("cls");

    return 0;
}

