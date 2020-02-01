#include <stdio.h>
#include <conio.h>
#include<ctype.h>
#include<windows.h>
#include<stdlib.h>



    struct CustomerDetails   //STRUCTURE DECLARATION
    {
        char roomnumber[10];
        char name[20];
        char address[25];
        char phonenumber[15];
        char nationality[15];
        char email[20];
        char period[10];
        char arrivaldate[10];
    }s;
    void main()
    {

        //f = fopen("add.txt", "a+");
        FILE *file = fopen("D:\\Programming\\C Programming\\ProjectI\\add.txt","w+");
        if (file== NULL){
            printf("Error saving Hotel data.");
            return 1;
        }
        while (1) {
            //system("cls");
            printf("\n Enter Customer Details:");
            printf("\n**************************");
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
            //fwrite(&s, sizeof(s), 1, f);
            printf("\n\n1 Room is successfully booked!!");
            printf("\n Press esc key to exit,  any other key to add another customer detail:");
            fprintf("add.txt","%s\t%s\t%s\t%s\t%s\t%s\t%s", s.roomnumber, s.name, s.address, s.phonenumber,s.nationality, s.email, s.period);
           // test = getche();
        }
        fclose(file);
    }

