#include <stdio.h>
#include <stdlib.h>
#include "Head_Fichier.h"
//**********************************************************
//Description : Le main.
//
//Entrées : Le choix de la foncion
//
//Sorties :	La fonction lecture ou ecriture
//
//Note :  X
//
//**********************************************************
int main(){

    int Choix=0;
    Carte identite;

    FILE* fichier = NULL;
    fprintf(fichier, "\n");
    printf("1 : Lecture de la carte \n");
    printf("2 : Ecriture de la carte\n");
    printf("3 : Quitter\n");
    scanf("%d",&Choix);
    //fflush(stdin);
    if (Choix == 1){
        Lecture(fichier,&identite);
    }
    else if (Choix == 2){
        Ecriture(fichier,&identite);
    }
    return 0;
}


