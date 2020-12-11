/*************************************
            VIEW BOOKING LIST
**************************************/

#include "viewBooking.h"
#include "booking.h"

void viewBooking(){

    Dfile=fopen("data.dat","r");


    printf("Room No");
    printf("\t\tName");
    printf("\t\tCountry ");
    printf("\tPhone No ");
    printf("\tArrival Date ");
    printf("\tStay Period");
    printf("\tR.Catagory\n");


    printf("____________________________________________________________________________________________________________\n");

    while(fread(&e,sizeof(e),1,Dfile)==1)  /*REF FROM  _CRTIMP size_t __cdecl __MINGW_NOTHROW	fread (void*, size_t, size_t, FILE*);*/
    {
        printf("%d\t%s %s\t\t%s\t\t%s\t%s\t\t%d\t\t%d\t\n",e.roomNumber, e.firstName ,e.lastName, e.country , e.phoneNumber,e.arrivalDate, e.stayPeriod, e.catagory);
    }
    printf("\n");
    printf("______________________________________________________________________________________________________________");
    fclose(Dfile);
    getch();
    dashboard();
}
