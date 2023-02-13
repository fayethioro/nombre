#include <stdio.h>
#include "Bissextille.h"
#include "NombreJoursMois.h"
#include "DateCorrect.h"
#include "DateSuivanteEtVeille.h"

//Fonction principale

int main(int argc, char const *argv[])
{
    int bissextille;
     int annee , mois, jours, Nbjours, correct,N;
     printf(" le nombre saisie correspond  à l'annee\n");
     annee = SaisieNombrePositive();
     bissextille = AnneeBissextille(annee);
   
     mois = SaisieMois();
     Nbjours = NombreJours(annee,mois);
     
     jours = SaisieJours();
     correct = DateCorrect(annee , mois , jours);
    
     //exo 1
     if (bissextille == 1)
          printf("l'an %d est bissextille \n",annee);
     else
          printf("l'an %d n'est  pas bissextille \n",annee);
    
     //exo 2
    printf("le mois N° %d compte %d jours \n",mois , Nbjours);

    //exo 3
     printf("vous avez saisie  %d\n",jours);
     if (correct == 1)
        printf("La date %d / %d / %d est correct\n",jours, mois, annee);
     else
         printf("La date %d / %d / %d n'est pas correct\n",jours, mois, annee);
     
     //exo 4
     printf("la date suivante est \n");
     DateSuivante(annee, mois , jours);
     
     //exo 5
     printf("la date  de la veille est \n");
     DateVeille(annee, mois , jours);

     //exo 7
      printf(" le nombre saisie correspond au nombre de jours \n");
     int N = SaisieNombrePositive();
       DateNjours(annee, mois , jours,N);

    return 0;
}