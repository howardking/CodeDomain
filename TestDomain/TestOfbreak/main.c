#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int j = 0;
    int count = 0;

    for (i=0; i<100; i++)
        for(j=0; j<100; j++){
            count++;
            if (i==j){
                printf("i=j=%d\n",j);
                break;
            }
        }
    printf("%d\n",count);
    return 0;
}
