/*************************************
------------BOOKING PAGE--------------
**************************************/

#include"booking.h"

void booking(){
    printf("\t\tNEW ROOM BOOKING\n");
    printf("\t\t\_________________\n");

    /********************************************
    Show all room numbers and booked room numbers
    *********************************************/

    printf("\n\t\tAll Room Numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20\n");
    printf("\t\tBooked Room Numbers:");
    RDfile= fopen("data.dat", "r"); /****Open file in reading mode and read room number data from data.dat file******/
    while(fread(&e,sizeof(e),1,RDfile)==1)
	{
	    printf("%d, ", e.roomNumber);
	}

    /***************************
    Room category and price info
    ****************************/

    printf("\n\n\t\t------------------------------------------------------------------------------------------------\n");
    printf("\t\tRoom Category:\n \t\t1.Deleuxe Room: Rs.5000/- \n \t\t2.Premium Room: Rs.3000/- \n \t\t3.Basic Room: Rs.1500/-\n");
    printf("\t\t------------------------------------------------------------------------------------------------\n\n");

    /*****************************************************
    Open file in append mode and save booking data in file
    ******************************************************/

    Dfile = fopen("data.dat", "a+");
    if(Dfile==NULL){
        printf("\t\tError Saving Data");

    }else{
        printf("\t\tEnter Room Number:");
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

        printf("\t\tCatagory of Room(Choose: 1/2/3):");
        scanf("%d",&e.category);

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

}
