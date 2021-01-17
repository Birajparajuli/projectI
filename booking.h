#ifndef BOOKING_H_INCLUDED
#define BOOKING_H_INCLUDED



#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>


struct customerInfo{
    int roomNumber;
    char firstName[15];
    char lastName[15];
    char phoneNumber[15];
    char country[10];
    char arrivalDate[10];
    int stayPeriod;
}e;

FILE *Dfile;
FILE *RDfile;



#endif

