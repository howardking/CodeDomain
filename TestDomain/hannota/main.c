#include <stdio.h>
#include <stdlib.h>

void hannuota(int n, char a, char b, char c)
{
    if (n!=0){
        hannuota(n-1,a,c,b);
        printf("�ѵ�%d�����Ӵ�%c�Ƶ�%c��",n,a,b);
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
