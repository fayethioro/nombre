#include <stdio.h>
#include "Bissextille.h"
#include "NombreJoursMois.h"
#include "DateCorrect.h"
#include "DateSuivanteEtVeille.h"

//Définition des fonctions

//Date suivante;
void DateSuivante(int  annee, int mois , int jours)  
{
     int  NjoursSuivante , NmoisSuivante, NanneeSuivante;
     int Nbjours = NombreJours( annee,  mois);
     int correct = DateCorrect( annee , mois , jours);
     if (correct == 0)
        printf("La date %d / %d / %d n'est pas correct\n",jours, mois, annee);
     else
         { 
            NjoursSuivante = jours + 1;

            if ( NjoursSuivante > Nbjours )//on est au fin du mois
            {
               NjoursSuivante = 1;
               mois = mois + 1;
               if ( mois == 13)// on est en fin d'année
               {
                NmoisSuivante = 1;
                NanneeSuivante = annee + 1;
               }
               else
               {
                 NmoisSuivante = mois;
                 NanneeSuivante =annee;
               }  
            }
            else
            {
                NjoursSuivante = NjoursSuivante;
               NmoisSuivante = mois;
                NanneeSuivante =annee;

            } 
             printf("%d / %d / %d \n",NjoursSuivante , NmoisSuivante, NanneeSuivante);
         }
}

//date de la veille
void DateVeille(int  annee, int mois , int jours)
{
     int  joursVeille , moisVeille, anneeVeille;
     int correct = DateCorrect( annee , mois , jours);
     int bissextille = AnneeBissextille(annee);
     if (correct == 0)
        printf("La date %d / %d / %d n'est pas correct\n",jours, mois, annee);
      else
      {
         joursVeille = jours - 1;

         if (joursVeille == 0)// on est le 1ere du mois
         {
            joursVeille = 31;
            mois =mois - 1;
            if (mois == 0)//on est le 1er janvier
            {
               moisVeille = 12;
               anneeVeille = annee - 1;
            }
            else // on n'est le 1er janvier
               {
                  if ( mois == 4 || mois == 6 || mois == 9 || mois == 11) // on est au 1er des mois de 31 jours
                       joursVeille = 30;
                  else 
                  {
                     if (mois == 2)//on est le 1er Mars
                           {
                              if (bissextille != 1)
                                 joursVeille = 28;
                              else
                                    joursVeille = 29;
                           }
                     else   // on est au 1er des mois de 30 jours
                        joursVeille = 31;
                  }
                  moisVeille = mois;
                  anneeVeille = annee;
               }      
         }
         else// on est apres le 1er du mois
         {
            joursVeille = joursVeille ;
            moisVeille = mois;
            anneeVeille = annee;
         }
          printf("%d / %d / %d \n",joursVeille , moisVeille, anneeVeille);
      }  
}

void DateNjours(int  annee, int mois , int jours,int N)
{
     int  NjoursSuivante , NmoisSuivante, NanneeSuivante;
     int Nbjours = NombreJours( annee,  mois);
     int correct = DateCorrect( annee , mois , jours);
     if (correct == 0)
        printf("La date %d / %d / %d n'est pas correct\n",jours, mois, annee);
     else
         { 
            NjoursSuivante = jours + N;

            if ( NjoursSuivante > Nbjours )//on est au fin du mois
            {
              int joursParMois = (365.25/12);

               mois = mois + (NjoursSuivante / joursParMois);
               NjoursSuivante = (NjoursSuivante % joursParMois);

               if ( mois > 12)// on est en fin d'année
               {
                NanneeSuivante = annee + (mois / 12);
                NmoisSuivante = mois % 12;
                
               }
               else
               {
                 NmoisSuivante = mois;
                 NanneeSuivante =annee;
               }  
            }
            else
            {
                NjoursSuivante = NjoursSuivante;
               NmoisSuivante = mois;
                NanneeSuivante =annee;

            } 
             printf("%d / %d / %d \n",NjoursSuivante , NmoisSuivante, NanneeSuivante);
         }
}