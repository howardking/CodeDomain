#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*�����鿴����strcat�ķ���ֵ*/
    //int i = 0;
    int flag = 0;
    char source[10] = "hello";
    char destnation[20] = "abc";
    printf("�ڵ���strcat����֮ǰ��\n");
    printf("%s    %d\n",source,flag);
    flag = strcat(destnation,source);
    printf("�ڵ���strcat����֮��\n");
    printf("%s   %d\n",destnation,flag);
    printf("The address of destnation is %d\n",destnation);
    printf("%s\n",flag);//�����Կ�֪strcat�����ķ���ֵΪĿ���ַ����ĵ�ַ��
    return 0;
}
