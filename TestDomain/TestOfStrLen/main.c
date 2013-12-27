#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char pattern[] = "Hello";
    char pattern_2[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("strlen(pattern) = %d\n",strlen(pattern));
    printf("strlen(pattern_2) = %d\n", strlen(pattern_2));
    printf("sizeof(pattern) = %d\n",sizeof(pattern));
    printf("sizeof(pattern) = %d\n",sizeof(pattern));

    return 0;
}
