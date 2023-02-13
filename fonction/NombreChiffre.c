#include <stdio.h>

//declaration des prototypes
int SaisieEntier(); //controle de saisie pour un entier positive
int NombreChiffre(int); // determine le nombre de chiffre dans un nombre
int SaisieAnnee();//controle de saisie pour l'année




//Définition des fonctions

int SaisieEntier()
{
    int nombre;
    printf("Entrez un nombre entier :");
    scanf("%d",&nombre);
            /* controle de saisie*/
    do
    {
            if(nombre<=0)
            {
                printf("ATTENTION !!! y'a une ou des erreurs \n");
                printf("le nombre saisie  doit etre strictement positive\n");
                printf("Entrez un nombre entier :");
                scanf("%d",&nombre); 
            }
    } while (nombre<0);
    return nombre;
}

int NombreChiffre(int nombre)
{
     int i = 0;
     int n;
     n=SaisieEntier(nombre);
    do
    {
        n= n/10;
        i++;
    } while(n > 0);
    return i;
}

//Fonction principale

int main(int argc, char const *argv[])
{
    int nombre;
    int n = NombreChiffre(nombre);
    printf("Le nombre de chiffres de votre nombre est : %d \n",n);
    
    return 0;
}
