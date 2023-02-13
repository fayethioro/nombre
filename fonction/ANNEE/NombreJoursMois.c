#include <stdio.h>
#include "Bissextille.h"
#include "NombreJoursMois.h"

//Définition des fonctions
int SaisieMois()
{
    int  mois;
    printf("Entrez le numero qui correspond à votre  mois :");
    scanf("%d",&mois);
            /* controle de saisie*/
    do
    {
            if(mois<1  || mois > 12)
            {
                printf("ATTENTION !!! y'a une ou des erreurs \n");
                printf("Le numero saisi  doit etre stictement positive \n");
                printf("Entrez le numero qui correspond à votre  mois :");
                scanf("%d",&mois); 
            }
    } while (mois<1  || mois > 12) ;

    return mois;
}

int NombreJours(int  annee, int mois)
{
    int Nbjours;
    int bissextille = AnneeBissextille(annee);
    if (mois == 2)
    {
        if (bissextille == 1)
          Nbjours = 29;
        else
          Nbjours = 28;
    }
    else 
       if ((mois == 4) || (mois == 6) || (mois  == 9 )|| (mois  == 11 ))
         Nbjours = 30;
        else
          Nbjours = 31;
    
    return Nbjours;
}