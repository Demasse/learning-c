#include <stdio.h>
#include <stdlib.h>

int main()
{
     int code=0;
     while(code!=12345){
        printf("entre le code ");
        scanf("%d", &code);
     }
     printf("le mdp est correct");

    return 0;
}
