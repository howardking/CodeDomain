#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*�����鿴����scanf�ķ���ֵ*/
    //int i = 0;
    int flag = 0;
    char source[10] ;
    char destnation[10];
    printf("�ڵ���scanf����֮ǰ��\n");
    printf("%s    %d\n",source,flag);
    flag = scanf("%s%s",destnation,source);
    printf("�ڵ���strcmp����֮��\n");
    printf("%s  %s %d\n",source,destnation,flag);
    //�����Կ�֪scanf�����ķ���ֵΪ������ȡ�����ĸ�����
    return 0;
}
