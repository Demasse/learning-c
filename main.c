#include <stdio.h>
#include <stdlib.h>

int main()
{
  int age = 15;
  int *ptr = &age;

  printf("age cest %d\n", age);
  printf(" adres de age est %p\n", &age);
    printf(" la valeur stocke est %d\n",ptr);

  *ptr = 25;
    printf("le nouveaux age est %d\n", age);



}
