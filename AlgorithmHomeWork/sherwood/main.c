#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>

int val[7]={2,3,13,1,5,21,8};
int ptr[7]={2,5,6,1,7,0,3};
int head=3;
int end = 5;
int length=7;
int count = 0;

int Search(int x,int i)
{
    while (x>val[i])
    {
        count++;
     i=ptr[i]-1;
    }
    return i+1;
}
int Count(int a)
{
    int i=0;
    int index=head;
    int max=val[head];
    int m=(int)(sqrt(length));
    srand((int)time(0));
    Sleep(1000);
    for(i=0;i<m;i++)
    {

        int j=rand()%length;
        int y=val[j];
        if(max<y&&y<a)
        {
            count++;
          max=y;
          index=j;
        }
    }
    return Search(a,index);
}

int main()
{
    int i = 0;
    int j = 0;
    int position = 0;
    int front = head;
    int tail = end;
    int target;
    printf("+-----------------------------------------------------+\n");
	printf("|查找的数据|     10次的比较次数     |       位置      |\n");
	printf("|-----------------------------------------------------|\n");
    for (i=0; i<length; i++){
        printf("|%6d    |   ",val[i]);
        for (j=0; j<10; j++){
            count = 0;
            position = Count(val[i]);
            printf("%d,",count);
        }
        printf("\b  |%9d        |\n",position);

    }
    printf("+-----------------------------------------------------+\n");
    return 0;
}
