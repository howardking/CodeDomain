#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    /*CÓïÑÔÏ°ÌâÓë½âÎö¡¾Àı4-1-6¡¿*/
    int i = 0;
    int a[][3] = {0,0};
    printf("%d\n",sizeof(a)/4);
    for (i=0; i<3; i++){
        printf("a[][%d] = %d\n",i,a[0][i]);
    }
    printf("Hello world!\n");
    return 0;
}
