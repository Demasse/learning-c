#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,notes[5];

    for(i=0;i<5;i++){
        printf("entre les nombre\n");
        scanf("%d", &notes[i]);
    }
   for(i=0;i<5;i++){
        printf(" les nombre sont %d\n", notes[i]);

    }

    return 0;
}
