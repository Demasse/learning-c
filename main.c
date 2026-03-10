#include <stdio.h>
#include <stdlib.h>

 void trouverExtremes( int T[], int taille, int *min, int *max){

    int i;
    *min = T[0];
    *max = T[0];

    for(i=0;i<taille; i++){
        if(T[i]> *max){
            *max = T[i];
        }
          if(T[i]< *min){
            *min = T[i];
        }
    }

}

int main()
{
    int tab[5],i, max, min ;

    for(i=0;i<5;i++){
        printf( "note %d: ", i + 1 );
        scanf("%d", &tab[i]);
    }
    trouverExtremes(tab, 5 , &min, &max);


     printf("la min est %d\n", min);
      printf("la maximum des nombre est est %d\n", max);



  return 0 ;

}
