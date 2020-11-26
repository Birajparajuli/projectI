#include "loadingBar.h"

void loadingBar(){
    system("color F");
    char a =177, b = 219;
    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Validating Password.....\n\n");
    printf("\t\t\t\t\t");

    for(int i=0; i<26; i++){
        printf("%c", a);
    }

    printf("\r");
    printf("\t\t\t\t\t");


    for (int i=0; i<26; i++){
        printf("%c",b);
        Sleep(50);
    }
}
