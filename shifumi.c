#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define BUF_SIZE 255
#define PIERRE 1
#define FEUILLE 2
#define CISEAUX 3

// Fonction entrée utilisateur
void joueur(char* buf) {
    memset(buf, 0, BUF_SIZE);  // Initialisation de buf
    fgets(buf, BUF_SIZE, stdin);
        buf[strlen(buf)-1] = 0;  // Supprimer la touche entrée '\n'
}

// Fonction du choix
int p_choix() {

    printf("1. Pierre\n");
    printf("2. Feuille\n");
    printf("3. Ciseaux\n");
    printf("0. Quitter\n");

        char buf[BUF_SIZE];
        memset(buf, 0, BUF_SIZE);  // Initialisation de buf
        fgets(buf, BUF_SIZE, stdin);
            buf[strlen(buf)-1] = 0;  // Supprimer la touche entrée '\n'
    
    int numero = atoi(buf);  // Utilisation de atoi pour convertir buf en int
    if (numero != 0 || strcmp(buf, "0") == 0) {  // Vérification si la saisie est réellement "0"
        return numero;  // Si la saisie est 1, 2 ou 0, on la retourne directement
    }

    // Comparaison de l'entrée et conversion valeur en int
    if (strcasecmp(buf, "pierre") == 0 || strcasecmp(buf, "p") == 0) {
        return PIERRE; 
    } else if (strcasecmp(buf, "feuille") == 0 || strcasecmp(buf, "f") == 0) {
        return FEUILLE; 
    } else if (strcasecmp(buf, "ciseaux") == 0 || strcasecmp(buf, "c") == 0) {
        return CISEAUX; 
    } else if (strcasecmp(buf, "quit") == 0 || strcasecmp(buf, "q") == 0 || strcasecmp(buf, "exit") == 0) {
        return 0; 
    }

    return -1;  // Erreur si la saisie n'est pas reconnue
}

void handValueToString(int hand,char* tab){
    memset(tab,0,255);
    if(hand == 1){
        strcpy(tab,"Pierre");
    }
        if(hand == 2){
        strcpy(tab,"Feuille");
    }
        if(hand == 3){
        strcpy(tab,"Ciseaux");
    }
}

int main () {

    printf("---------------------- ShiFuMi ! --------------------\n");

    char j1[BUF_SIZE];
    char j2[BUF_SIZE];
    char forme1[BUF_SIZE];
    char forme2[BUF_SIZE];
    int choix1 = 0;
    int choix2 = 0;
    int victoire1 = 0;
    int victoire2 = 0;

    printf("Joueur 1, quel est ton prenom?\n");
    joueur(j1);

    printf("Joueur 2, quel est ton prenom?\n");
    joueur(j2);

    while(1){
        printf("\n");
        printf("%s?\n", j1);
        choix1 = p_choix();
            if (choix1 == 0) {
            printf("\n");
            printf("Victoires : \n");
            printf("%s : %d\n", j1, victoire1);
            printf("%s : %d\n", j2, victoire2);
                printf("---------------------- GAME OVER ! --------------------\n");
            break;  // Sort de la boucle si le joueur 1 choisit de quitter
            }
        handValueToString(choix1, forme1);

        system("clear");

        printf("\n");
        printf("%s?\n", j2);
        choix2 = p_choix();
            if (choix2 == 0) {
            printf("\n");
            printf("Victoires : \n");
            printf("%s : %d\n", j1, victoire1);
            printf("%s : %d\n", j2, victoire2);
                printf("---------------------- GAME OVER ! --------------------\n");
            break;  // Sort de la boucle si le joueur 2 choisit de quitter
            }
        handValueToString(choix2, forme2);

        system("clear");

        printf("\n");
        printf("%s fait %s\n", j1, forme1);
        printf("%s fait %s\n", j2, forme2);
        printf("\n");

        // 3 petits points pour le suspense
        for(int i = 0; i < 3; i++) {
            printf(".");
            // printf est bufferisé et qu'il n'est pas vidé à chaque appel, il faut le forcer. L'utilisation de '\n' force (en général) force l'écriture. 
            fflush(stdout);
            usleep(500000);
        }
        printf("\n");

        if (choix1 == choix2) {
            printf("%s = %s\n", forme1, forme2);
            printf("Vous faites égalité!\n");
            printf("\n");
            printf("Victoires : \n");
            printf("%s : %d\n", j1, victoire1);
            printf("%s : %d\n", j2, victoire2);
        } else if ((choix1 == PIERRE && choix2 == CISEAUX) || (choix1 == FEUILLE && choix2 == PIERRE) || (choix1 == CISEAUX && choix2 == FEUILLE)) {
            printf("%s > %s\n", forme1, forme2);
            printf("%s a gagné!\n", j1);
            victoire1++;
            printf("\n");
            printf("Victoires : \n");
            printf("%s : %d\n", j1, victoire1);
            printf("%s : %d\n", j2, victoire2);
        } else {
            printf("%s < %s\n", forme1, forme2);
            printf("%s a gagné!\n", j2);
            victoire2++;
            printf("\n");
            printf("Victoires : \n");
            printf("%s : %d\n", j1, victoire1);
            printf("%s : %d\n", j2, victoire2);

        }
    }
    return 0;
}
