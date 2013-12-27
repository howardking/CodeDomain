#include <stdio.h>
#include <stdlib.h>

int fabonacci(int n)
{
    if (n<=0)
        return 0;
    if (1==n || 2==n){
        return 1;
    }
    return fabonacci(n-1)+fabonacci(n-2);
}

int main()
{
    int i = 0;
    for (i=0; i<=46; i++){
        printf("fabonacci(%d) = %d\n", i, fabonacci(i));
    }

    return 0;
}
