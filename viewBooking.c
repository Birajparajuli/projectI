/*************************************
            VIEW BOOKING LIST
**************************************/

#include "viewBooking.h"
#include "booking.h"

void viewBooking(){

    /****Opens Data File in Reading Mode***/

    Dfile=fopen("data.dat","r");
    printf("\t\t\t==============================================================\n");
    printf("\t\t\t                  BOOKED ROOM DETAILS                         \n");
    printf("\t\t\t==============================================================\n\n");
    printf("\n____________________________________________________________________________________________________________________\n");

    printf("%-12s"," Room No");
    printf("%-29s","|          Name");
    printf("%-18s","| Country ");
    printf("%-18s","| Phone No ");
    printf("%-18s","| Arrival Date ");
    printf("%-15s","| Stay Period     |");



    printf("\n____________________________________________________________________________________________________________________\n");

    while(fread(&e,sizeof(e),1,Dfile)==1)  /**REF FROM  _CRTIMP size_t __cdecl __MINGW_NOTHROW	fread (void*, size_t, size_t, FILE*);**/
    {
        printf(" %-10d | %10s %-15s | %-15s | %-15s | %-15s | %-18d |\n",e.roomNumber, e.firstName ,e.lastName, e.country , e.phoneNumber,e.arrivalDate, e.stayPeriod);
    }
    printf("\n");
    printf("____________________________________________________________________________________________________________________\n");
    printf("\n\nPress any key to go to dashboard.");
    fclose(Dfile);
    getch();
    system("cls");
    dashboard();
}
