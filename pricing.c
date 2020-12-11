/***********************************
        price calculation
************************************/
#include "pricing.h"
#include "booking.h"

int pricing(int days, int cat)
{
    printf("Pricing Calculation");


    switch(cat){
    case 1:
        {
        printf("delux");
        finalPrice = 5000*days;
        break;
        }

    case 2:
        {
        printf("premiun");
        finalPrice = 3000*days;
        break;
        }
    case 3:
        {
        printf("basic");
        finalPrice = 1500*days;
        break;
        }
    default:
        printf("Invalid Input");
        break;
    }
 return(finalPrice);
}
