/*************************************
            Checkout page
***************************************/

#include "checkOut.h"
#include "booking.h"
#include "pricing.h"


float pricing(int days, int roomNum);
//int deleteBooking(int roomnumber);

void checkOut()
{
    system("cls");
    /*****************************************************
               Display already booked rooms
    ******************************************************/
    printf("\n\t\t|Booked Room Numbers:");
    RDfile= fopen("data.dat", "r");                      /*Open file in reading mode and read room number data from data.dat file*/
    while(fread(&e,sizeof(e),1,RDfile)==1)
	{
	    printf("%d | ", e.roomNumber);
	}


    printf("\n\n\t\tCHECK OUT\n");
    printf("\t\t\_________________\n\n");

    /*******************************
    opening data file in reading mode
    ********************************/

	Dfile = fopen("data.dat","r+");
	if(Dfile==0)
		exit(0);

    /*******************************************
    asking user to enter room number to checkout
    ********************************************/

	printf("\t\tEnter Room number: ");
	scanf("%d", &roomnumber);
	while(fread(&e,sizeof(e),1,Dfile)==1)
	{
		if(e.roomNumber==roomnumber){

			printf("\t\tDatabase Found");
			printf("\n\t\tRoom Number:\t%d",e.roomNumber);
			printf("\n\t\tName:\t%s %s",e.firstName,e.lastName);
            days= e.stayPeriod;
            roomNum = e.roomNumber;
			pricing(days,roomNum);
		}
	}

    fclose(Dfile);

    /**************************
    print total price on screen
    ***************************/

    printf("\n\t\tTotal Price: Rs. %.2f/-\n\n", finalPrice);

     /*************************************
    asking user to proceed checkout or not
    **************************************/

    printf("\t\tProceed Checkout?(Y/N)");
    in = getch();
    if (in=='y'||in=='Y'){
            system("cls");
            dashboard();
            /**deleting user's info will be added here***/

    }else{
        system("cls");
        dashboard();
    }


}
