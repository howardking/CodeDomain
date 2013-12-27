#include <stdio.h>
#include <stdlib.h>

int main()
{/*CÓïÑÔÏ°ÌâÓë½âÎö¡¾Àı2-1-70¡¿*/
    int i = 2;
    int k = 0;
    int m = 0;

    k = (i++)+(++i)+(i++);
    i = 2;
    m = (++i)+(++i)+(++i);

    printf("%d %d\n",i,k);
    printf("%d %d\n",i,m);
    return 0;
}
