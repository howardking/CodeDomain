#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int num=200;

int place(int j,int i,int tryq[])
{
    int k=0;
	for(k=0;k<i;k++)
	{
    	if(abs(j-tryq[k])==abs(k-i)||j==tryq[k])
	    	return 0;
	}
	return 1;
}
int backtrace(int stepvagas,int n,int tryq[])
{
	int i=stepvagas,j=0;

		while(1)
		{
    	   	if(place(j,i,tryq))
			{
		    	tryq[i]=j;
		    	i++;
		    	j=-1;
			}
	    	j++;
	    	while(j>n-1)
			{
		    	j=tryq[--i]+1;
			}
			if(i==n)
				return 1;
			if(i>n)
				return 0;
		}
		return 0;
}
void queenslv(int stepvegas,int n,int tryq[])
{
	int success = 0;
	srand((int)time(0));
	while(!success)
	{
    	int i,nb=n,k=-1;
     	for(i=0;i<n;i++)
	     	tryq[i]=-1;
    	i=0;                           //行号
    	while(nb!=0&&i<stepvegas)
		{
    	    k=-1;
	    	nb=0;
	    	int j=0;
	    	for(j=0;j<n;j++)
			{
    	     	if(place(j,i,tryq))
				{
			    	nb++;
			    	if((int)rand()%nb+1==1)
				    	k=j;
				}
			}
    		if(nb>0)
			{
	         	tryq[i]=k;
		    	i=i+1;
			}
		}
    	if(nb>0)
			success=backtrace(i,n,tryq);
    	else
	    	success=0;
	}
}
int main()
{
	srand((int)time(0));
	int n,stepvegas;
	printf("+-------------------------------------------------------------+\n");
	 printf("|   ◇皇后的个数◇  |  ◇最优解的step◇  |  ◇平均查找时间◇  |\n");
    for(n=12;n<21;n++)
	{
		int bestvegas=-1;
    	double mintime=1000;
    	int *tryq=(int *)malloc(sizeof(int)*n);
    	clock_t start,finish;
    	for(stepvegas=0;stepvegas<=n;stepvegas++)
		{
	    	double time=0;
            int i=0;
        	for(i=0;i<num;i++)
			{
         		start=clock();
            	queenslv(stepvegas,n,tryq);
	        	finish=clock();
	        	time+=(double)(finish-start)/CLOCKS_PER_SEC;
			}
    		time=time/num;
	    	if(mintime>time)
			{
	    		bestvegas=stepvegas;
	    		mintime=time;
			}
		}
        printf("|%12d       |%12d        |      %f      |\n",n,bestvegas,mintime);
	}
	printf("+-------------------------------------------------------------+");
	return 0;
}

