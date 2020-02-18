#include <stdio.h>
#include <conio.h>
#include "booking.h"

void roomBooking() {
    struct CustomerDetails {
        char roomnumber[10];
        char name[20];
        char address[25];
        char phonenumber[15];
        char nationality[15];
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
        printf("Enter Name:");

        scanf("%s", &s.name);
        printf("Enter Address:");

        scanf("%s", &s.address);
        printf("Enter Phone Number:");

        scanf("%s", &s.phonenumber);
        printf("Enter Nationality:");

        scanf("%s", &s.nationality);
        printf("Enter Email:");

        scanf(" %s", &s.email);
        printf("Enter Period(\'x\'days):");

        scanf("%s", &s.period);
        printf("Enter Arrival date(dd\\mm\\yyyy):");

        scanf("%s", &s.arrivaldate);
        printf("\n\n1 Room is successfully booked!!\n");

        fwrite(&s, sizeof(s), 1, file);
        //fprintf("add.txt","%s\t%s\t%s\t%s\t%s\t%s\t%s", s.roomnumber, s.name, s.address, s.phonenumber,s.nationality, s.email, s.period);
        printf("Book another room?(Y/N):");
        char ch = getch();
        if (ch == 'N' || ch == 'n')
            break;

    }
    fclose(file);
}

