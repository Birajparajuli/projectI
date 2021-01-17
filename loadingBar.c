#include "loadingBar.h"

void loadingBar(){
    system("color 5e");

    /*ASCII CODE 177-->medium density dotted*/
    /*ASCII CODE 219-->Block, graphic character*/

    char x =178, y = 219;
    printf("\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t Wait a while_ _ _ _ _\n\n");
    printf("\t\t\t\t\t");

    for(int i=0; i<26; i++){
        printf("%c", x);
    }

    printf("\r");    /* move the cursor/print head to the beginning of the current line*/
    printf("\t\t\t\t\t");


    for (int i=0; i<26; i++){
        printf("%c",y);
        Sleep(50);
    }
}
