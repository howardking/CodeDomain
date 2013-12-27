#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum test{one, two=2, three,four,five=10,six,seven};
    printf("%d\n",one);
      printf("%d\n",two);
     printf("%d\n",three);
      printf("%d\n",four);
     printf("%d\n",five);
      printf("%d\n",six);
    printf("%d\n",seven);

    printf("Hello world!\n");
    return 0;
}
