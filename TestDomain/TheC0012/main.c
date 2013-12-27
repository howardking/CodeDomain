#include <stdio.h>
#include <stdlib.h>

int main()
{/*CÓïÑÔÏ°ÌâÓë½âÎö¡¾Àı2-1-74¡¿*/
    int b=7;
    float a = 2.5;
    float c = 4.7;

    printf("%g\n",a+(int)(b/3*(int)(a+c)/2)%4);
    return 0;
}
