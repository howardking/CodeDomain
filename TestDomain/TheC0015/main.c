#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    /*�����鿴����strcpy�ķ���ֵ*/
    //int i = 0;
    int flag = 0;
    char source[10] = "hello";
    char destnation[10];
    printf("�ڵ���strcpy����֮ǰ��\n");
    printf("%s    %d\n",source,flag);
    flag = strcpy(destnation,source);
    printf("�ڵ���strcmp����֮��\n");
    printf("%s   %d\n",destnation,flag);
    printf("The address of destnation is %d\n",destnation);
    printf("%s\n",flag);//�����Կ�֪strcpy�����ķ���ֵΪĿ���ַ����ĵ�ַ��
    return 0;
}
