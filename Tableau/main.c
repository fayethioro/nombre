#include <stdio.h>
#include "consecutif.h"
#include "fusion.h"
#define Nmax  50

int main(int argc, char const *argv[])
{
    int n1,n2 ,tab1[Nmax],tab2[Nmax];

    n1 = SaisieNombrePositive();
    SaisieTableau(tab1,n1);
    n2 = SaisieNombrePositive();
    SaisieTableau(tab2,n2);
    printf("le tableau 1 est :\n");
    affichage(tab1,n1);
    printf("\n");
    printf("le tableau 2 est :\n");
    affichage(tab2,n2);
    printf("\n");
    int cons= consecutif(tab1,n1);
    if (cons==0)
     printf("le tableau n'est pas consecutif\n");
    else
       printf("le tableau est consecutif\n");

    printf(" Le tableau fusionné est: ");
    int* tab3 = fusion(tab1 ,tab2,n1,n2);
    printf("\n");
    return 0;
}
