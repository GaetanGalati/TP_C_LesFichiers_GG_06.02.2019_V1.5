#ifndef HEAD_FICHIER_H_INCLUDED
#define HEAD_FICHIER_H_INCLUDED
#define TAILLE 25
#define NBLIGNE 5
#include <stdio.h>
#include <stdlib.h>
typedef struct Carte
{
    int nID;
    char *cNom[TAILLE];
    char *cPrenom[TAILLE];
    char *cCP[TAILLE];
    char *cAdress[TAILLE];
    char *cVille[TAILLE];
}Carte;

typedef enum BOOL {TRUE,FALSE} BOOL;

extern FILE* fopen(const char* MesCartes, const char* Ouverture);
extern void Lecture(FILE* fichier, Carte *identite );
extern void Ecriture(FILE* fichier, Carte *identite );

#endif // HEAD_FICHIER_H_INCLUDED
