#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, notes[5],somme=0;
  float moy ;

  for(i=0; i<5; i++){
    printf("entre les numero\n");
    scanf("%d", &notes[i]);
    somme= notes[i] + somme;
    moy= (float)somme/5;


 }
   printf("la somme est : %d\n",somme);
   printf("la moy est : %f\n",moy);

}

