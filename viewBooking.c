#include "viewBooking.h"
#include "booking.h"

void viewBooking(){
    FILE *f;

    if((f=fopen("data.dat","r"))==NULL)
        //exit(0);
        printf("Error Showing Hotel Data.");
    //system("cls");
    printf("Room No    ");
    printf("Name\t ");
    printf("\tCountry ");
    printf("\tPhone No ");
    printf("\t Arrival Date ");
    printf("\t\t Stay Period \n");


    printf("________________________________________________________________________________________________________");
    while(fread(&e,sizeof(e),1,f)==1)  /*REF FROM  _CRTIMP size_t __cdecl __MINGW_NOTHROW	fread (void*, size_t, size_t, FILE*);*/
    {
        printf("\n%d\t%s\t\t%s\t\t%s\t%s\t\t%d",e.roomNumber, e.name , e.country , e.phoneNumber,e.arrivalDate, e.stayPeriod);
    }
    printf("\n");
    printf("________________________________________________________________________________________________________");
    fclose(f);
    getch();
}
