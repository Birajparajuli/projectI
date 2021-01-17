#ifndef CHANGEPRICE_H_INCLUDED
#define CHANGEPRICE_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct price{
    float economyPrice;
    float standerdPrice;
    float deleuxePrice;
    float executivePrice;
}p;

FILE *Pfile;
FILE *RPfile;
float ecoPrice, standPrice, deluxePrice, exePrice;

#endif // CHANGEPRICE_H_INCLUDED
