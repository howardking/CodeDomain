#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int arp(int a,int j,int p)
{
   int s=1;
   while(j>0)
   {
       if(j%2!=0)  s=s*a%p;
       a=a*a%p;
       j=j/2;
    }
    return s;
}

int Btest(int a, int n)
{
    int i=1;
    int s=0;
    int t=n-1;
    int x=0;
    do{
        s++;
        t/=2;
    }while(t%2!=1);
    x=arp(a,t,n);
    if(x==1||x==n-1)
    return 1;
    for(i=1;i<=s-1;i++)
    {
        x=x*x%n;
        if(x==n-1)
        return 1;
    }
    return 0;
}


int MillRob(int n)
{
    int a = 0;
    srand((int)time(0));
    a=rand()%(n-2-2+1)+2;
    return Btest(a,n);
}

int RepeatMillRab(int n, int k)
{
    int i = 1;
    for (i=1; i<=k; i++){
        if (0==MillRob(n)){
            return 0;
        }
    }
    return 1;
}

int PrintPrimes()
{
    int i = 5;
    int count = 0;
    printf("%d,%d,",2,3);
    for (i=100; i<=10000; i+=2){
        if (RepeatMillRab(i, (int)log10(i))){
            count++;
            printf("%d,",i);
        }
    }
    printf("\b\n");
    return count;
        //printf("\b\n素数的个数为：%d",count);
}
int main(int argc, char * argv[])
{
    /*if (argc<2){
        printf("请输入要循环的次数\n");
        exit(1);
    }
    int i = 0;
    int j = 0;
    int count = 0;
    int count_total = 0;
    int sum = 0;
    int result = 0;
    int * p_piont = NULL;
    for (j=1; j<argc; j++){
        count_total = 0;
        count = atoi(argv[j]);
        p_piont = (int*)malloc(sizeof(int)*argc);
        if (NULL == p_piont){
            printf("malloc error\n");
            exit(1);
        }
        for (i=1; i<count; i++){
            count_total = PrintPrimes();
            p_piont[j] = count_total;
        }
    }
    for (j=0; j<argc; j++){
        sum += p_piont[j];
    }
    result = sum/count/argc;
    printf("|%d|%d|",count, result);
    free(p_piont);
*/

    int count  = PrintPrimes();
    printf("\b\n素数的个数为：%d",count);
    return 0;
}
