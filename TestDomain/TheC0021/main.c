#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    /*�����鿴����strlen�ķ���ֵ*/
    int flag = 0;
    char source[10] = {'b'};
   // char stard[10] = "root";
    char test[10] = {'a','a','a','a','a','a','a','a','a','a'};
    printf("%d\n",strlen(source));
    //printf("%d\n",strlen(stard));
    printf("%d\n",strlen(test));
    printf("%s\n",source);
   // printf("%s\n",stard);
    printf("%s\n",test);
    //�����Կ�֪strlen�����Ĳ���ֵ���ǡ�\0����βʱ��ϵͳ��һֱ���㣬ֱ��������\0���Ž�����
    return 0;
}
