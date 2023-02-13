#include <stdio.h>
#include "Bissextille.h"

//Définition des fonctions
int SaisieNombrePositive()
{
    int  Nombre;
    printf("Entrez un nombre positif: :");
    scanf("%d",&Nombre);
            /* controle de saisie*/
    do
    {
            if(Nombre<=0)
            {
                printf("ATTENTION !!! y'a une ou des erreurs \n");
                printf("Le nombre saisi doit etre stictement positif\n");
                printf("Entrez un nombre positif:");
                scanf("%d",&Nombre); 
            }
    } while (Nombre<0);

    return Nombre;
}
int AnneeBissextille(int annee)
{
        int vrai = 1 ; 

        if ( (annee % 4 == 0 && annee % 100 != 0) ||annee % 400 == 0)
            return 1;
        else
            return 0;
}