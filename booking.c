/*************************************
------------BOOKING PAGE--------------
**************************************/

#include"booking.h"

void booking(){
    /*Show all room numbers and booked room numbers*/

    printf("\nAll Room Numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20\n");
    printf("Booked Rooms:");
    RDfile= fopen("data.dat", "r"); /*Open file in reading mode and read room number data from data.dat file*/
    while(fread(&e,sizeof(e),1,RDfile)==1)
	{
	    printf("%d, ", e.roomNumber);
	}

    /*Room category and price info*/
    printf("\n\n------------------------------------------------------------------------------------------------\n");
    printf("\nRoom Category:\n 1.Deleuxe Room: Rs.5000/- \n 2.Premium Room: Rs.3000/- \n 3.Basic Room: Rs.1500/-\n");
    printf("------------------------------------------------------------------------------------------------\n");

    /*Open file in append mode and save booking data in file*/
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

        printf("Enter Country:");
        scanf("%s", &e.country);

        printf("Enter Arrival Date DD-MM-YYYY:");
        scanf("%s", &e.arrivalDate);

        printf("Total Stay Days:");
        scanf("%d", &e.stayPeriod);

        printf("Catagory of Room(Choose: 1/2/3):");
        scanf("%d",&e.category);

        fwrite(&e,sizeof(e),1,Dfile);
        fclose(Dfile);
        system("cls");

        loadingBar();
        system("cls");
        printf("\nRoom is successfully Booked\n ");
        printf("Book another room?(Y/N)");



        char in = getch();
        if (in=='y'||in=='Y'){
            system("cls");
            booking();
        }else{
            system("cls");
            dashboard();
        }
    }

}
