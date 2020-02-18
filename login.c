/*Login verification system*/
#include <stdio.h>
#include <string.h>
#include <conio.h>

#include "login.h"


void login() {

    int a = 0, i = 0;
    char userName[10], c = ' ';
    char passWord[10], code[10];
    char Uname[10] = "admin";
    char Pword[10] = "password";
    do {
        printf("\n\n-----------------LOG IN-----------");
        printf("ENTER USERNAME:-");
        scanf("%s", &userName);
        printf("ENTER PASSWORD:-");
        while (i < 10) {
            passWord[i] = getch();
            c = passWord[i];
            if (c == 13) break;
            else printf("*");
            i++;
        }
        //passWord[i] = '\0';


        if (strcmp(userName, Uname) == 0 &&
            strcmp(passWord, Pword) == 0) {             /*Username: admin, Password: password*/
            printf("\n------WELCOME, LOGIN IS SUCCESSFUL----------");

            break;
        } else {
            printf("\n----------SORRY ! LOGIN IS UNSUCCESSFUL------------");
        }
        getch();
    }
    while(a<=2);
    if (a>2)
    {
        printf("\nSORRY ! You Have Entered Wrong Username or Password for 4 times");

        getch();

    }
}

