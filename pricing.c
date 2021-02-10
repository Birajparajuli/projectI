/***********************************
        price calculation
************************************/

#include "pricing.h"


#include "changePrice.h"

int pricing(int days, int roomNum)
{

    Pfile = fopen("Pdata.dat", "r");
    while (fread(&p, sizeof(p),1, Pfile)==1){
        ecoPrice = p.economyPrice;
        standPrice = p.standerdPrice;
        deluxePrice = p.deleuxePrice;
        exePrice = p.executivePrice;
    }

    printf("\n\n\t\t-----------------------------------------\n");
    printf("\t\tPrice Calculation:\n");
    printf("\t\t-----------------------------------------\n");



    if(roomNum>100 && roomNum<110){
        printf("\t\tRoom Type: Economy");
        finalPrice = days*ecoPrice;

    }else if(roomNum>200 && roomNum<210){
        printf("\t\tRoom Type: Standard");
        finalPrice = days*standPrice;

    }else if(roomNum>300 && roomNum<310){
        printf("\t\tRoom Type: Deluxe");
        finalPrice = days*deluxePrice;

    }else if(roomNum>400 && roomNum<410){
        printf("\t\tRoom Type: Executive");
        finalPrice = days*exePrice;
    }else{
        printf("\t\tError!");
    }


    //Previous category price calculation || using switch statement
    /*switch(cat){
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
    */
 return(finalPrice);
}
