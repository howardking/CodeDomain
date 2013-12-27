#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a,b=2;
   // char x[20]="good\0morning";
    float x=213.82631;
    printf("%-4.2f\n",x);
   // printf("%d %d\n",strlen(x), sizeof(x));
    printf("%d\n",b^b && a);
    return 0;
}
