#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b,somme,mul,sub;
    float div;
    printf("entre le numero de a\n");
    scanf("%d",&a);
    printf("entre le numero de b\n");
    scanf("%d",&b);
    somme=a+b;
    mul=a*b;

    if(a>b){
        sub= a-b;
    }else{
    sub=b-a;
    }
    div=a/b;

    printf("le result de a+b est %d\n", somme);
    printf("le result de a+b est %d\n", mul);
    printf("le result de a-b est %d\n", sub);
    printf("le result de a/b est %d\n", div);
    return 0;
}
