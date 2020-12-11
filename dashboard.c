#include "dashboard.h"
void dashboard()
    {
        printf("Welcome Back Biraj!\n\n");
        printf("Total Rooms: 20\n");
        printf("Booked Rooms:\n");
        printf("Available Rooms:\n");

        printf("\nMain menu\n\n");
        printf("Book a Room--------1\n");
        printf("Visit Customer Record--------2\n");
        printf("Check Out--------3\n");
        printf("Log Out--------4\n");

        select = getch();
        select = toupper(select);
        system("cls");

        /*switch statement to select different pages*/
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
