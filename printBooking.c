//
// Created by Acer on 3/29/2020.
//

#include "printBooking.h"
#include "booking.h"


void printBooking(){
    FILE *f;
    int i;
    if((f=fopen("hotelData.txt","r"))==NULL)
        //exit(0);
        printf("Error Showing Hotel Data.");
    //system("cls");
    printf("ROOM    ");
    printf("NAME\t ");
    printf("\tNATIONALITY ");
    printf("\tPHONE NUMBER ");
    printf("\tEMAIL ");
    printf("\t\t  PERIOD ");
    printf("\t ARRIVAL DATE \n");

    printf("________________________________________________________________________________________________________");
    while(fread(&s,sizeof(s),1,f)==1)
    {
        printf("\n%s \t%s \t\t%s \t%s \t%s  \t%s  \t     %s  ",s.roomnumber, s.name , s.nationality , s.phonenumber,s.email,s.period,  s.arrivaldate);
    }
    printf("\n");
    printf("________________________________________________________________________________________________________");
    fclose(f);
    getch();
}
