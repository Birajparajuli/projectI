#include"booking.h"

void booking(){
    Dfile = fopen("data.dat", "a+");
    if(Dfile==NULL){
        printf("Error Saving Data");

    }else{
        printf("Enter Room Number:");
        scanf("%d", &e.roomNumber);

        printf("Enter Name:");
        //fgets(e.name,15,stdin);
        scanf("%s", &e.name);

        printf("Enter Phone Number:");
        scanf("%s", &e.phoneNumber);

        printf("Enter  your Country:");
        scanf("%s", &e.country);

        printf("Enter Arrival Date DD-MM-YYYY:");
        scanf("%s", &e.arrivalDate);

        printf("Total Stay Days:");
        scanf("%d", &e.stayPeriod);

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
