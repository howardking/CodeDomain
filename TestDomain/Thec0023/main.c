#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*���Եõ������ĵ�ַ��Ȼ�����ñ����ĵ�ַ��
      �����������������в�����ʾ��ʹ��ָ��*/
    int first = 100;
    int add = &first;
    char second = 'a';
    char addsec = &second;
    printf("%d\n",add);/* ���ַ������ַ����п���ʹ�ã�
                        ���������������в�����*/
    printf("%d\n",&second);
    printf("%c\n",addsec);//�������ַ���Ҳ�ǲ����Ե�
    return 0;
}
