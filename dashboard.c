/****************************************
                DASHBOARD
****************************************/

#include "dashboard.h"
#include "booking.h"

void dashboard()
    {
        system("color 2e");                                                    /*Color*/
        printf("\t\tWelcome Back Admin!\n\n");
        printf("\t\t-----------------------------------------\n");
        printf("\t\t\t\tDASHBOARD\n");
        printf("\t\t-----------------------------------------\n");

        /**********************************************
        Show All room numbers and Booked room numbers
        **********************************************/

        printf("\n\t\tAll Room Numbers: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20\n\n");
        printf("\t\tBooked Room Numbers:");

        /**Open file in reading mode and read room number data from data.dat file**/

        RDfile= fopen("data.dat", "r");
        while(fread(&e,sizeof(e),1,RDfile)==1)
        {
            printf("%d, ", e.roomNumber);
        };


        /**Selection Menu**/

        printf("\n\n\t\t-----------------------------------------\n");
        printf("\t\t\t\tMAIN MENU\n");
        printf("\t\t-----------------------------------------\n\n");
        printf("\t\tBook a Room------------------1\n\n");
        printf("\t\tVisit Customer Record--------2\n\n");
        printf("\t\tCheck Out--------------------3\n\n");
        printf("\t\tLog Out----------------------4\n\n\n");
        printf("\t\tSelect Number From Menu:\n");

        char select = getch();

        system("cls");

        /***switch statement to select different pages****/
        switch(select){
        case '1':
            booking();
            break;
        case '2':
            viewBooking();
            break;
        case '3':
            checkOut();
            break;
        case '4':
            welcome();
            break;
        default:
            printf("Invalid Input");
            dashboard();
            break;
        }

        return 0;

    }
