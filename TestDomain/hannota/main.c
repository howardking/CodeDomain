#include <stdio.h>
#include <stdlib.h>

void hannuota(int n, char a, char b, char c)
{
    if (n!=0){
        hannuota(n-1,a,c,b);
        printf("把第%d个盘子从%c移到%c柱",n,a,b);
        hannuota(n-1,c,b,a);
    }
    return;
}


int main()
{
    int n;
    printf("Hello world!\n");
    scanf("%d",&n);
    hannuota(n,'a','b','c');
    system("pause");
    return 0;
}
