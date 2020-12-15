/***********************************
        price calculation
************************************/
#include "pricing.h"
#include "booking.h"

int pricing(int days, int cat)
{
    printf("\n\n\t\t-----------------------------------------\n");
    printf("\t\tPrice Calculation:\n");
    printf("\t\t-----------------------------------------\n");

    switch(cat){
    case 1:
        {
        printf("\t\tRoom Category: Deluxe\n");
        printf("\t\tTotal Days: %d", days);
        finalPrice = 5000*days;
        break;
        }

    case 2:
        {
        printf("\t\tRoom Category: Premium\n");
        printf("\t\tTotal Days: %d", days);
        finalPrice = 3000*days;
        break;
        }
    case 3:
        {
        printf("\t\tRoom Category: Basic\n");
        printf("\t\tTotal Days: %d", days);
        finalPrice = 1500*days;
        break;
        }
    default:
        printf("\t\tInvalid Input");
        break;
    }
 return(finalPrice);
}
