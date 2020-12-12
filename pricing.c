/***********************************
        price calculation
************************************/
#include "pricing.h"
#include "booking.h"

int pricing(int days, int cat)
{
    printf("\nPrice Calculation:\n");


    switch(cat){
    case 1:
        {
        printf("Room Category: Deluxe");
        finalPrice = 5000*days;
        break;
        }

    case 2:
        {
        printf("Room Category: Premium");
        finalPrice = 3000*days;
        break;
        }
    case 3:
        {
        printf("Room Category: Basic");
        finalPrice = 1500*days;
        break;
        }
    default:
        printf("Invalid Input");
        break;
    }
 return(finalPrice);
}
