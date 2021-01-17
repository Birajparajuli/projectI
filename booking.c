/*************************************
------------BOOKING PAGE--------------
**************************************/

#include"booking.h"
#include "changePrice.h"



void booking(){

    SYSTEMTIME date;
    GetSystemTime(&date);
    printf("\t\tToday Date: %d / %d / %d \n", date.wDay, date.wMonth, date.wYear);

    printf("\t\tNew Room Booking:\n");
    printf("\t\t\_________________\n");


    /**Get Room Price From Files**/

    RPfile = fopen("Pdata.dat", "r");
    while (fread(&p, sizeof(p),1, RPfile)==1){
        ecoPrice = p.economyPrice;
        standPrice = p.standerdPrice;
        deluxePrice = p.deleuxePrice;
        exePrice = p.executivePrice;
    }

    /********************************************
    Show all room numbers and booked room numbers
    *********************************************/
    printf("\n\t\t|--------------------------------------------------------------------------------------|");
    printf("\n\t\t| Room Category ||            All room numbers                       ||   Price        |");
    printf("\n\t\t|--------------------------------------------------------------------------------------|");
    printf("\n\t\t|Economy Rooms  ||  101 | 102 | 103| 104 | 105| 106 | 107 | 108| 109 || Rs. %.2f    |", ecoPrice);
    printf("\n\t\t|--------------------------------------------------------------------------------------|");
    printf("\n\t\t|Standard Rooms ||  201 | 202 | 203| 204 | 205| 206 | 207 | 208| 209 || Rs. %.2f    |", standPrice);
    printf("\n\t\t|--------------------------------------------------------------------------------------|");
    printf("\n\t\t|Deluxe Rooms   ||  301 | 302 | 303| 304 | 305| 306 | 307 | 308| 309 || Rs. %.2f    |", deluxePrice);
    printf("\n\t\t|--------------------------------------------------------------------------------------|");
    printf("\n\t\t|Executive Rooms||  401 | 402 | 403| 404 | 405| 406 | 407 | 408| 409 || Rs. %.2f    |", exePrice);
    printf("\n\t\t|______________________________________________________________________________________|\n");
    printf("\n\t\t|Booked Room Numbers:");



    /*****************************************************
               Display already booked rooms
    ******************************************************/

    RDfile= fopen("data.dat", "r");                      /*Open file in reading mode and read room number data from data.dat file*/
    while(fread(&e,sizeof(e),1,RDfile)==1)
	{
	    printf("%d | ", e.roomNumber);
	}

    /*****************************************************
    Open file in append mode and save booking data in file
    ******************************************************/
    printf("\n\n\t\tBook a New Room:\n");
    printf("\t\t\_________________\n");

    Dfile = fopen("data.dat", "a+");
    if(Dfile==NULL){
        printf("\t\tError Saving Data");

    }else{
        printf("\n\t\tEnter Room Number:");
        scanf("%d", &e.roomNumber);

        printf("\t\tEnter First Name:");
        scanf("%s", &e.firstName);

        printf("\t\tEnter Last Name:");
        scanf("%s", &e.lastName);

        printf("\t\tEnter Phone Number:");
        scanf("%s", &e.phoneNumber);

        printf("\t\tEnter Country:");
        scanf("%s", &e.country);

        printf("\t\tEnter Arrival Date DD-MM-YYYY:");
        scanf("%s", &e.arrivalDate);

        printf("\t\tTotal Stay Days:");
        scanf("%d", &e.stayPeriod);


        /*********************
           SAVE DATA TO FILE
        **********************/

        fwrite(&e,sizeof(e),1,Dfile);
        fclose(Dfile);   /***CLOSE FILE***/
        system("cls");

        loadingBar();   /****LOADING BAR****/
        printf("\n \t\t\t\t\tSaving User Details...");
        system("cls");
        printf("\nRoom is successfully Booked\n ");
        printf("Book another room?(Y/N)");


        /********************************************
        ASKING USER IF THEY WANT TO BOOK ANOTHER ROOM
        ********************************************/

        char in = getch();
        if (in=='y'||in=='Y'){
            system("cls");
            booking();
        }else{
            system("cls");
            dashboard();
        }
    }

    fclose("RDfile");   //Close Files
    fclose("RPfile");  //Close files

}
