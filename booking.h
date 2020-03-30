#ifndef PROJECTI_BOOKING_H
#define PROJECTI_BOOKING_H

/*-----------Customer Details Struct Variables Declaration------------------*/
#include <stdio.h>
#include <conio.h>
struct CustomerDetails {
    char roomnumber[10];
    char name[20];
    char nationality[25];
    char phonenumber[15];
    char email[20];
    char period[10];
    char arrivaldate[10];
} s;
//struct CustomerDetails s;
FILE *file;
void roomBooking();
#endif //PROJECTI_BOOKING_H
