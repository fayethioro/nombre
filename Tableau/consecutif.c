#include <stdio.h>
#include "consecutif.h"
#define Nmax  50
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
    } while (Nombre<0 || Nombre >50) ;
    return Nombre;
}

void SaisieTableau (int* tab ,int n)
{
    int i;
   // int n = SaisieNombrePositive();
    for ( i= 0; i < n ; i++)
    {
        printf("Entrez le nombre N° %d: ",i+1);
        scanf("%d", &tab[i]);
    }
    
}
void affichage(int* tab ,int n)
{
    for (int i = 0; i < n; i++)
        printf(" %d ", tab[i]);
}

int consecutif(int* tab, int n)
{   
    int vrai = 1;
    for (int i = 1; i < n; i++)
    {
        if((tab[i] != tab[i-1]+1) && (tab[i] != tab[i-1]-1))
               return 0;
        else
               return 1;
    }
    
}