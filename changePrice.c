#include "changePrice.h"

void changePrice(){
    printf("\t\t----------------------------\n");
    printf("\t\t      Previous Prices       \n");
    printf("\t\t----------------------------\n\n");

    /**Get Room Price From Files**/

    RPfile = fopen("Pdata.dat", "r");
    while(fread(&p, sizeof(p),1, RPfile)==1){
        ecoPrice = p.economyPrice;
        standPrice = p.standerdPrice;
        deluxePrice = p.deleuxePrice;
        exePrice = p.executivePrice;
    }
    /*Print Existing Room Prices*/
    printf("\t\tEconomy room price: Rs. %.2f\n", ecoPrice);
    printf("\t\tStandard room price: Rs. %.2f\n", standPrice);
    printf("\t\tDeluxe room price: Rs. %.2f\n", deluxePrice);
    printf("\t\tExecutive room price: Rs. %.2f\n", exePrice);



 Pfile = fopen("Pdata.dat", "w+");
 if(Pfile == NULL){
    printf("\t\tError while saving file.");
 }else{
    printf("\t\t----------------------------\n");
    printf("\t\t      Set New Prices      \n");
    printf("\t\t----------------------------\n\n");
    printf("\t\tEconomy room price:");
    scanf("%f", &p.economyPrice);
    printf("\t\tStandard room price:");
    scanf("%f", &p.standerdPrice);
    printf("\t\tDeluxe room price:");
    scanf("%f", &p.deleuxePrice);
    printf("\t\tExecutive room price:");
    scanf("%f", &p.executivePrice);

    /*********************
      SAVE DATA TO FILE
    **********************/

    fwrite(&p, sizeof(p),1,Pfile);
    fclose(Pfile);
    fclose(RPfile);

    printf("\n\t\tChanges Saved. Press any key to continue.");
    char in = getch();
    system("cls");
    dashboard();

 }
}
