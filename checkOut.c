/*************************************
            Checkout page
***************************************/

#include "checkOut.h"
#include "booking.h"
#include "pricing.h"

float pricing(int days, int cat);

void checkOut()
{
system("cls");


	Dfile=fopen("data.dat","r+");
	if(Dfile==0)
		exit(0);
	fflush(stdin);
	printf("Enter Room number: ");
	scanf("%d", &roomnumber);
	while(fread(&e,sizeof(e),1,Dfile)==1)
	{
		if(e.roomNumber==roomnumber){

			printf("Database Found");
			printf("\nRoom Number:\t%d",e.roomNumber);
			printf("\nName:\t%s %s",e.firstName,e.lastName);
			printf("\nTotal Stay:%d Days\n",e.stayPeriod);
			printf("\nCatagory:%d\n",e.category);

            days= e.stayPeriod;
            cat= e.category;
			pricing(days,cat);
		}
	}

    fclose(Dfile);

    printf("\ntotal price is Rs. %.2f/-\n\n", finalPrice);
    printf("Proceed Checkout?");
    in = getch();
    if (in=='y'||in=='Y'){

        deleteBooking();
    }else{
        system("cls");
        dashboard();
    }


}
