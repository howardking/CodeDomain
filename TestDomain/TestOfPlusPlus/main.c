#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    int j = 1;
    int result1 = 0;
    int result2 = 0;
    printf("%d\n",(++i)*(++i)*(++i)*(++i));
    printf("%d\n",(j++)*(j++)*(j++)*(j++));
    printf("%d %d \n",i,j);
    i = 1;
    j = 1;
    result1 =  (++i)*(++i);
    result2 = (j++)*(j++)*(j++);
     printf("%d\n",result1);
     printf("%d\n",result2);
    return 0;
}
