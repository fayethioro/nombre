#include <stdio.h>
#include "Bissextille.h"
#include "NombreJoursMois.h"
#include "DateCorrect.h"

//Définition des fonctions
int SaisieJours()
{
    int  jours;
    printf("Entrez le numero qui correspond à votre  jours :");
    scanf("%d",&jours);
            /* controle de saisie*/
    do
    {
            if(jours<1  || jours > 31)
            {
                printf("ATTENTION !!! y'a une ou des erreurs \n");
                printf("Le numero saisi  doit etre stictement positive \n");
                printf("Entrez le numero qui correspond à votre  jours :");
                scanf("%d",&jours); 
            }
    } while (jours<1  || jours > 31) ;

    return jours;
}

int DateCorrect(int annee, int mois, int jours)
{
    int correct = 1;
    int Nbjours = NombreJours(annee,mois);
    
    if (jours <= Nbjours)
        return 1;
    else
        return 0;
}