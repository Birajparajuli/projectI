/*PROJECT I*/
/*This is main file of the project */
/* HOTEL RESERVATION SYSTEM*/

/*Global Libraries*/
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <windows.h>
#include <ctype.h>

/*Local Libraries*/
#include "login.h"
#include "booking.h"
#include "welcomeScreen.h"
#include "printBooking.h"


int main() {
    /*Welcome Screen*/
    welcome();
    /*Login Form*/
    login();
    /*selection Menu*/
    char choice;
    int i;
    while(1){
        printf("\n");
        printf("\t\t|------------------ |MAIN MENU|-----------------|\n");
        printf("\t\t_________________________________________________\n");
        printf("\t\t|                                               |\n");
        printf("\t\t|-------Please enter your choice for menu-------|");
        printf("\n\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t| Enter 1 |         Book a room                 |\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t| Enter 2 |      View Customer Record           |\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t| Enter 3 |     Delete Customer Record          |\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t| Enter 4 |    Search Customer Record           |\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t| Enter 5 |        Edit Record                  |\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t| Enter 6 |            Exit                     |\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t|_______________________________________________|\n\n\n");
        printf("\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t\tDate & Time: %s", ctime(&t));
        printf("\t\t|-----------------------------------------------|\n");

        choice = getche();
        choice = toupper(choice);
        switch (choice)           // SWITCH STATEMENT
        {
            case '1':
                roomBooking();
                break;
            case '2':
                printBooking();
                break;
                /*case '3':
                    ();
                    break;
                case '4':
                    search();
                    break;
                case '5':
                    edit();
                    break;
                case '6':
                    system("cls");
                    printf("\n\n\t *****THANK YOU*****");
                    printf("\n\t FOR TRUSTING OUR SERVICE");
                    //	Sleep(2000);
                    exit(0);
                    break;*/
            default:
                system("cls");
                printf("Incorrect Input");
                printf("\n Press any key to continue");
                getch();
        }
    }
    return 0;
}
