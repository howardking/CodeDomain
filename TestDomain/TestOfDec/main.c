#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("请输入一个整数:\n");
    scanf("%d",&i);
    printf("十六进制是:%x \n 八进制是:%o",i,i);
    return 0;
}
