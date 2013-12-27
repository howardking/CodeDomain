#include <stdio.h>
#include <stdlib.h>

struct point {
    int x;
    int y;
};

int main()
{
    struct point first = {100, 100};
    struct point second = first;
    struct point third = {.x=20, .y=30};
    second.y = 200;
    printf("(%d, %d)\n",first.x, first.y);
    printf("(%d, %d)\n",second.x, second.y);
    printf("(%d, %d)\n",third.x, third.y);
    return 0;
}
