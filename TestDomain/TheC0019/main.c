#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*�����鿴����puts�ķ���ֵ*/
    int flag = 0;
    char source[10] = {'a'};
    flag = puts(source);
    printf("%d\n",flag);
    //�����Կ�֪puts�����ķ���ֵΪ:���������ȷ���������0����������������ȷ������-1
    return 0;
}
