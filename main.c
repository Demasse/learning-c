#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,somme=0;
  float temp[7], moy, max, min;

  for(i=0; i<7;i++){
    printf("entre les temperature %d\n", i+1);
    scanf("%f",&temp[i]);
    somme= temp[i] + somme ;
    moy=(float)somme/7;

  }
    max= temp[0];
    for(i=0; i<7;i++){
        if(temp[i] > max){
            max = temp[i];
        }
    }

       min= temp[0];
    for(i=0; i<7;i++){
        if(temp[i] < min){
            min = temp[i];
        }
    }


   printf("la somme total des temp sont : %d\n",somme);
   printf("la moyenne total des temp sont : %f\n",moy);
    printf("Temperature la plus bas : %f\n", min);
    printf("Temperature la plus haute : %f\n", max);




}
