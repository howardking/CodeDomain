#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /*�����鿴����strupr�ķ���ֵ*/
    int flag = 0;
    char source[10] = "low";
    char destnation[10];
    printf("�ڵ���strupr����֮ǰ��\n");
    printf("%s    %d\n",source,flag);
    flag = strupr(source);
    printf("�ڵ���strupr����֮��\n");
    printf("%s    %d\n",source,flag);
    printf("%s\n",flag);
    //�����Կ�֪strupr�����ķ���ֵΪ����ת������ַ����ĵ�ַ��
    return 0;
}
