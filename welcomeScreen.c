//
// Created by Acer on 3/26/2020.
//

#include "welcomeScreen.h"


void welcome(){
    time(&t);
    printf("\t\t_________________________________________________\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|-----------------------------------------------|\n");
    printf("\t\t|        WELCOME TO HOTEL Suite           |\n");
    printf("\t\t|-----------------------------------------------|\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|-----------------------------------------------|\n");
    printf("\t\t|        Brought To You By The C Group          |\n");
    printf("\t\t|-----------------------------------------------|\n");
    printf("\t\t|                                               |\n");
    printf("\t\t|               KATHMANDU,NEPAL                 |\n");
    printf("\t\t|       CONTACT US:01-123456789, 123456789      |\n");
    printf("\t\t|_______________________________________________|\n\n\n");
    printf("\t\t|-----------------------------------------------|\n");
    printf("\t\t\tDate & Time: %s",ctime(&t));
    printf("\t\t|-----------------------------------------------|\n");
}