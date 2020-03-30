#include "booking.h"

void roomBooking() {
    file = fopen("D:\\Programming\\C Programming\\projectI\\hotelData.txt", "a+");
    if (file == NULL) {
        printf("Error saving Hotel data.");
    }
    while (1) {
        printf("\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t|                 BOOKING FORM                  |\n");
        printf("\t\t|-----------------------------------------------|\n\n");

        printf("\t\t            Enter Customer Details:               \n");
        printf("\t\t-------------------------------------------------\n\n");

        printf("Enter Room number:");
        scanf("%s", &s.roomnumber);
        printf("=================================================\n");

        printf("Enter Your Name:");
        scanf("%s", &s.name);
        printf("=================================================\n");

        printf("Enter Your Nationality:");
        scanf("%s", &s.nationality);
        printf("=================================================\n");

        printf("Enter Your Phone Number:");
        scanf("%s", &s.phonenumber);
        printf("=================================================\n");

        printf("Enter Your Email:");
        scanf(" %s", &s.email);
        printf("=================================================\n");

        printf("Enter period(Number of days):");
        scanf("%s", &s.period);
        printf("=================================================\n");

        printf("Enter Arrival date(DD/MM/YYYY):");
        scanf("%s", &s.arrivaldate);
        printf("=================================================\n");

        printf("\n\nRoom is successfully booked!\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t|         ROOM IS SUCCESSFULLY BOOKED           |\n");
        printf("\t\t|-----------------------------------------------|\n\n");

        fwrite(&s, sizeof(s), 1, file);
        /*fprintf("add.txt","%s\t%s\t%s\t%s\t%s\t%s\t%s", s.roomnumber, s.name, s.address, s.phonenumber,s.nationality, s.email, s.period);*/
        printf("Do you want to book another room?(Y/N):");
        char ch = getch();
        if (ch == 'N' || ch == 'n')
            break;

    }
    fclose(file);
}

