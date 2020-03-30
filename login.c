/*Login verification system*/
#include "login.h"


void login() {
    int a = 0, i = 0, c=0;
    char Uname[10] = "admin";                               /*Username: admin, Password: password*/
    char Pword[10] = "password";
    do {
        printf("\n\n");
        printf("\t\t|-----------------------------------------------|\n");
        printf("\t\t                      LOG IN                    \n");
        printf("\t\t|-----------------------------------------------|\n\n\n");
        printf("ENTER USERNAME\n");
        printf("_________________________________________________\n");
        scanf("\t\t%s", &userName);
        printf("\n");
        printf("ENTER PASSWORD\n");
        printf("_________________________________________________\n");

        while(i<10)
        {
            passWord[i]=getch();
            c=passWord[i];
            if(c==13) break;
            else printf("*");
            i++;
        }
        passWord[i] = '\0';


        if (strcmp(userName, Uname) == 0 && strcmp(passWord, Pword) == 0) {
            printf("\n\n");
            printf("\t\t|-----------------------------------------------|\n");
            printf("\t\t        WELCOME BACK! LOGIN IS SUCCESSFUL        \n");
            printf("\t\t|-----------------------------------------------|\n");

            break;
        } else {
            printf("\n\n");
            printf("\t\t|-----------------------------------------------|\n");
            printf("\t\t          SORRY! LOGIN IS UNSUCCESSFUL           \n");
            printf("\t\t|-----------------------------------------------|\n");
        }
        printf("Press any Btn to continue");
        getch();
    }
    while(a<=2);
//    if (a>2)
//    {
//        printf("\nSORRY ! You Have Entered Wrong Username or Password for 4 times");
//
//        getch();
//
//    }
}

