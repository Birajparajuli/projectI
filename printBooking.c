/*This file prints the booked room lists*/

#include "printBooking.h"
#include "booking.c"


void printBooking(){
    FILE *file;
    file=fopen("hotelData.txt", "r");
    if (file=NULL){
        printf("SORRY! OPERATION UNSUCCESSFUL");
        exit (0);
    }
    printf("Room No\t");
    printf("Name\t");
    printf("Address\t");
    printf("Phone Number\t");
    printf("Nationality\t");
    printf("Email\t");
    //printf("\n %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s",s.roomnumber, s.name , s.nationality  , s.phonenumber ,s.email, s.period,  s.arrivaldate);

}


