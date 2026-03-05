#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x = 10;
  int y = 20;

  int *p = &x ;
int *t = &y ;

  printf("la valeur de x es %d\n", x);
   printf("la valeur de x es %d\n", y);

  *p= 40;

  printf("la nouvelle valeur de x es %d\n", x);
*t= y;
printf("la nouvelle valeur de x est %d\n", y);

}
