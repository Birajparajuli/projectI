/*************************************
            BOOKING PAGE
**************************************/

#include"booking.h"

void booking(){
    //printf("Total Rooms: ");

    Dfile = fopen("data.dat", "a+");
    if(Dfile==NULL){
        printf("Error Saving Data");

    }else{
        printf("Enter Room Number:");
        scanf("%d", &e.roomNumber);

        printf("Enter First Name:");
        scanf("%s", &e.firstName);

        printf("Enter Last Name:");
        scanf("%s", &e.lastName);

        printf("Enter Phone Number:");
        scanf("%s", &e.phoneNumber);

        printf("Enter  your Country:");
        scanf("%s", &e.country);

        printf("Enter Arrival Date DD-MM-YYYY:");
        scanf("%s", &e.arrivalDate);

        printf("Total Stay Days:");
        scanf("%d", &e.stayPeriod);

        printf("Catagory of Room:");
        scanf("%d",&e.catagory);

        fwrite(&e,sizeof(e),1,Dfile);
        fclose(Dfile);
        system("cls");

        loadingBar();
        system("cls");
        printf("\nRoom is successfully Booked\n ");
        printf("Book another room?(Y/N)");



        char in = getch();
        if (in=='y'||in=='Y'){
            booking();
        }else{
            dashboard();
        }



    }
    system("cls");
}
