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

	int roomnumber, days, cat;
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
			printf("\nCatagory:\t%s",e.catagory);

            days= e.stayPeriod;
            cat= e.catagory;
			pricing(days,cat);
		}
	}

    fclose(Dfile);

    printf("\ntotal price is %f", finalPrice);
	getch();
	dashboard();
}
