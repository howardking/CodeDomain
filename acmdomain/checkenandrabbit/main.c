#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    unsigned int quantity = 0;
    scanf("%d",&n);
    while (n){
        scanf("%u",&quantity);
        if (0 == quantity%2){
            if (0==quantity%4){
                printf("%u ",quantity/4);
            }
            else {
                printf("%u ",quantity/4+1);
            }
            printf("%d\n",quantity/2);
        }
        else {
            printf("0 0\n");
        }
        n--;
    }
    printf("\n");
    return 0;
}
