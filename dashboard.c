/****************************************
                DASHBOARD
****************************************/

#include "dashboard.h"
#include "booking.h"

void dashboard()
    {
        system("color 2e");                                                    /*Color*/
        printf("\t\tWelcome Back Admin!\n\n");

        /*Print todays date*/
        SYSTEMTIME date;
        GetSystemTime(&date);
        printf("\t\tDate: %d / %d / %d \n\n", date.wDay, date.wMonth, date.wYear);



        /**Selection Menu**/

        printf("\n\n\t\t-----------------------------------------\n");
        printf("\t\t\t\tMAIN MENU\n");
        printf("\t\t-----------------------------------------\n\n");
        printf("\t\tBook a Room------------------1\n\n");
        printf("\t\tVisit Customer Record--------2\n\n");
        printf("\t\tCheck Out--------------------3\n\n");
        printf("\t\tChange Room Price------------4\n\n");
        printf("\t\tLog Out----------------------5\n\n\n");
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
            changePrice();
            break;
        case '5':
            login();
            break;
        default:
            printf("Invalid Input");
            dashboard();
            break;
        }

        return 0;

    }
