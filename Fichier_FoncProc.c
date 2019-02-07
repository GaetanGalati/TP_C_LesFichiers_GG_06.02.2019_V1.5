#include <stdio.h>
#include <stdlib.h>
#include "Head_Fichier.h"

//**********************************************************
//Description : La lecture du fichier .txt.
//
//Entrées : le fichier et la carte
//
//Sorties : Lancement de la fonction d'affichage
//
//Note :
//
//**********************************************************
void Lecture(FILE* fichier, Carte *identite){
    system("cls");
    identite = malloc(TAILLE * sizeof(Carte));
    if (identite == NULL) // On vérifie si l'allocation a marché ou non
        {
            printf("Erreur ! "); // On arrête tout
        }
    char *cChoix;

    printf("Entrez l'ID de la carte que vous voullez trouvez : \n");
    fflush(stdin);
    scanf("%c",&cChoix);

    AffichagLecturee(fichier,&cChoix,&identite);


}
//**********************************************************
//Description : l'affichage du fichier text
//
//Entrées : le fichier et la carte, et le choix
//
//Sorties : l'affichage
//
//Note :X
//
//**********************************************************
void AffichagLecturee(FILE* fichier, char *cChoix, Carte *identite){
    system("cls");
    printf("Recherche de l'ID : %c\n",*cChoix);
    int fgetc(FILE* fichier);
    fichier = fopen("MesCartes.txt", "r");//Ouverture du doc.text en mode "read"
    char Strverif[50] = "";
    char Straffiche[50] = "";
    BOOL IsAndOfCarde= FALSE;
    int i = 0;
    int x=0;
    while (IsAndOfCarde == FALSE){//Tant que ne ne sommes pas a la fin de la carte
        {
            fgets(Strverif, 50, fichier);
                if (Strverif[4]==*cChoix){//Si la lettre en position 4 = le choix du joueurs
                    for (x=0; x < 5; x++){
                        fgets(Straffiche, 50, fichier);
                        printf("%s", Straffiche);
                        if (Strverif[4]!='Adresse'){
                            IsAndOfCarde = TRUE;
                        }

                    }
                }
            }
        }
    fclose(fichier);

}


//**********************************************************
//Description : L'écriture du fichier .text
//
//Entrées : toutes les info de la carte d'identité
//
//Sorties : X
//
//Note :X
//
//**********************************************************
void Ecriture(FILE* fichier, Carte *identite){
    system("cls");
    fichier = fopen("MesCartes.txt","a");//Ouvrire le doc text en monde ajout
    identite = malloc(TAILLE * sizeof(Carte));
    if (identite == NULL) // On vérifie si l'allocation a marché ou non
        {
            printf("Erreur ! "); // On arrête tout
        }
    else
    {//Lecture du chaque données
        printf("Entrez l'ID\n");
        scanf("%d",&identite->nID);
        fprintf(fichier, "\nID :%d ",identite->nID);

        printf("Entrez le nom\n");

        fflush(stdin);
        scanf("%s",&identite->cNom);

        printf("Entrez le prenom\n");
        scanf("%s",&identite->cPrenom);

        printf("Entrez la ville\n");
        scanf("%s",&identite->cVille);

        printf("Entrez le code postale\n");
        scanf("%s",&identite->cCP);

        printf("Entrez l'adresse l\n");
        scanf("%s",&identite->cAdress);

        system("cls");
        //Affectation de chaque données
        fprintf(fichier, "\nNom :%s ",identite->cNom);
        fprintf(fichier, "\nPrenom :%s ",identite->cPrenom);
        fprintf(fichier, "\nVille :%s ",identite->cVille);
        fprintf(fichier, "\nLe code postale :%s ",identite->cCP);
        fprintf(fichier, "\nAdresse :%s ",identite->cAdress);
        fclose (fichier);
    }
}
