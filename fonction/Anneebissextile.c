#include <stdio.h>

//declaration des prototypes
int SaisieAnnee();//controle de saisie pour l'année
int AnneeBissextille(int);//Verifie si une année est bissextille ou pas;



//Définition des fonctions
int SaisieAnnee()
{
    int  annee;
    printf("Entrez un nombre entier :");
    scanf("%d",&annee);
            /* controle de saisie*/
    do
    {
            if(annee<=0)
            {
                printf("ATTENTION !!! y'a une ou des erreurs \n");
                printf("une ");
                printf("Entrez un nombre entier :");
                scanf("%d",&annee); 
            }
    } while (annee<0);

    return annee;
}
int AnneeBissextille(int annee)
{
        int vrai = 1 ; 

        if ( (annee % 4 == 0 && annee % 100 != 0) ||annee % 400 == 0)
            return 1;
        else
            return 0;
}

//Fonction principale

int main(int argc, char const *argv[])
{
     int bissextille;
     int annee;
     annee = SaisieAnnee();
     bissextille = AnneeBissextille(annee);
     if (bissextille == 1)
          printf("l'annee %d est bissextille \n",annee);
     else
          printf("l'annee %d n'est  pas bissextille \n",annee);
    
    return 0;
}
