#include <stdio.h>
#include <stdlib.h>

int main()
{/*C����ϰ�����������2-1-44��*/
    char a =3;
    char b = 6;
    char c;

    c = a^b<<2;
    printf("%x\n",c);
    return 0;
}
