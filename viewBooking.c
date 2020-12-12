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
    printf("\tR.Category\n");


    printf("____________________________________________________________________________________________________________\n");

    while(fread(&e,sizeof(e),1,Dfile)==1)  /*REF FROM  _CRTIMP size_t __cdecl __MINGW_NOTHROW	fread (void*, size_t, size_t, FILE*);*/
    {
        printf("%d\t%s %s\t\t%s\t\t%s\t%s\t\t%d\t\t%d\t\n",e.roomNumber, e.firstName ,e.lastName, e.country , e.phoneNumber,e.arrivalDate, e.stayPeriod, e.category);
    }
    printf("\n");
    printf("______________________________________________________________________________________________________________");
    printf("\n\nPress any key to go to dashboard.");
    fclose(Dfile);
    getch();
    system("cls");
    dashboard();
}
