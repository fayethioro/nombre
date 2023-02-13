#include <stdio.h>
#include "consecutif.h"
#include "fusion.h"



int* fusion(int* tab1 ,int* tab2,int n1,int n2)
{
    int* tab3;
    int i,j,n3;
    for(i = 0; i < n1; i++)
  {
    tab3[i] = tab1[i];
  }
    
  n3 = n1 + n2;
   
  for(i = 0 ;i < n2; i++)
     for (int j = n1 ;j < n3; j++)
     {
        tab3[j] = tab2[i];
     }
  return tab3;
}