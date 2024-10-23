#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define BUF_SIZE 255


int main () {

    char tab[BUF_SIZE];
    memset(tab,0,255);
    int hand = 1;

    if(hand == 1){
        strcpy(tab,"Pierre\n");
    }
        if(hand == 2){
        strcpy(tab,"Feuille\n");
    }
        if(hand == 3){
        strcpy(tab,"Ciseaux\n");
    }

    printf("tab = %s", tab);

return 0;

}

    // printf("Pierre = Pierre, EGALITE\n");
    // switch (choix1 == 1 && choix2 == 1) { 
    // case 2:
    //     printf("Feuille > Pierre\n");
    //     printf("%s a gagné! \n", j1);
    //     break;
    // case 3: 
    //     printf(" Ciseaux < Pierre\n");
    //     printf("%s a gagné! \n", j2);
    //     break;
    // }

    //     switch (choix1 == 1 && choix2 == 2) { 
    //     printf("Pierre < Feuille\n");
    //     printf("%s a gagné! \n", j2);
    // case 2:
    //     printf("Feuille = Feuille, EGALITE\n");
    //     break;
    // case 3: 
    //     printf(" Ciseaux > Feuille\n");
    //     printf("%s a gagné! \n", j1);
    //     break;
    // }

    // switch (choix1 == 1 && choix2 == 3) { 
    //     printf("Pierre > Ciseaux\n");
    //     printf("%s a gagné! \n", j1);
    // case 2:
    //     printf("Feuille < Ciseaux\n");
    //     printf("%s a gagné! \n", j2);
    //     break;
    // case 3: 
    //     printf(" Ciseaux = Ciseaux, EGALITE\n");
    //     break;
    // }