#include <stdio.h>
#include <conio.h>
#include "booking.h"

void roomBooking() {
    struct CustomerDetails {
        char roomnumber[10];
        char name[20];
        char nationality[25];
        char phonenumber[15];
        char email[20];
        char period[10];
        char arrivaldate[10];
    } s;
    //struct CustomerDetails s;
    FILE *file;
    file = fopen("D:\\Programming\\C Programming\\projectI\\hotelData.txt", "a+");
    if (file == NULL) {
        printf("Error saving Hotel data.");
    }
    while (1) {
        printf("\n Enter Customer Details:");

        printf("\n Enter Room number:");
        scanf("%s", &s.roomnumber);

        printf("Enter Your Name:");
        scanf("%s", &s.name);

        printf("Enter Your Nationality:");
        scanf("%s", &s.nationality);

        printf("Enter Your Phone Number:");
        scanf("%s", &s.phonenumber);

        printf("Enter Your Email:");
        scanf(" %s", &s.email);

        printf("Enter period(Number of days you are staying on this hotel):");
        scanf("%s", &s.period);

        printf("Enter Arrival date:");
        scanf("%s", &s.arrivaldate);

        printf("\n\nRoom is successfully booked!\n");

        fwrite(&s, sizeof(s), 1, file);
        /*fprintf("add.txt","%s\t%s\t%s\t%s\t%s\t%s\t%s", s.roomnumber, s.name, s.address, s.phonenumber,s.nationality, s.email, s.period);*/
        printf("Do you want to book another room?(Y/N):");
        char ch = getch();
        if (ch == 'N' || ch == 'n')
            break;

    }
    fclose(file);
}

