#include "login.h"

void login()
{
    printf("\n");
    printf("LOGIN FORM\n");
    printf("Enter Username:");
    scanf("%s",&username);
    printf("Enter Password:");

    while(i<10)
        {
            password[i]=getch();
            c=password[i];
            if (password[i]!= '\r'){
                printf("*");
            }else{
                break;
            }
            i++;
        }

    password[i]='\0';
    i=0;
    system("cls");
    /*Progress bar*/
    loadingBar();



    /*strcmp() compares the two strings character by character*/
    if(strcmp(password,dPassword)==0 && strcmp(username,dUsername)==0){
        printf("\n \t\t\t\t\tLogin Successful");
        Sleep(500);
        printf("\n \t\t\t\t\tWELCOME BACK ");
        Sleep(500);
        system("cls");
        //dashboard();

    }else{
        printf("\n\t\t\t\t\tLogin Unsuccessful  TRY AGAIN");
        Sleep(1000);
        system("cls");
        login();
    }


}

