#include <iostream>
#include <fstream>
//#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "simple.h"
#include "tag.h"

using namespace std;

const int  maxN = 10000; //此处将所有的max改为maxN


class kjinlin
{
public:
	kjinlin();
	void fenlei(int k);
	void preprocess(int room);
private:
	float distance(simple a,simple b);
	void insert(int id,float distance,int m);

	simple train[maxN];
	simple test[maxN];
	int pretrain[maxN];
	int trainsamplenum;
	int testsamplenum;
	int pretrainsamplenum;
	tag k[10];
};

kjinlin::kjinlin()
{
	int i=0,j,sum=0;
	fstream file;
	file.open("train.txt");
	file>>train[i].feture[0];
	while(train[i].feture[0]!=100)
	{
    	for(j=1;j<11;j++)
		{
	    	file>>train[i].feture[j];
		}
		i++;
		file>>train[i].feture[0];
	}
	trainsamplenum=i;
	file.close();
	i=0;
	file.open("test.txt");
	file>>test[i].feture[0];
	while(test[i].feture[0]!=100)
	{
    	for(j=1;j<11;j++)
		{
	    	file>>test[i].feture[j];
		}
		i++;
		file>>test[i].feture[0];
	}
	testsamplenum=i;
	file.close();
}

void kjinlin::preprocess(int room)
{
    pretrainsamplenum=room;
	int i,n1,n2;
    srand((int)time(0));
	for(i=0;i<room/2;i++)
	{

		n1=int(rand()%trainsamplenum);
		n2=int(rand()%trainsamplenum);
		while(train[n1].feture[10]!=1)
			n1=int(rand()%trainsamplenum);
		while(train[n2].feture[10]!=-1)
			n2=int(rand()%trainsamplenum);
		pretrain[2*i]=n1;
		pretrain[2*i+1]=n2;
	}
}


float kjinlin::distance(simple a,simple b)
{
	int i;
	float s=0;
	for (i=0; i<10; i++){
        s += (a.feture[i]-b.feture[i])*(a.feture[i]-b.feture[i]);
	}
	s = sqrt(s);
	return s;
}

void kjinlin::insert(int id,float distance,int m)
{

	int j = 0;
	for(int i=0;i<m;i++)
		if(k[j].distance<k[i].distance)
		    j=i;
	if(k[j].distance>distance)
	{
		k[j].id=id;
		k[j].distance=distance;
	}
}

void kjinlin::fenlei(int m)
{
    int i,j;
	int num1,num2,sum=0,sum1=0,sum2=0;
    for( i=0;i<testsamplenum;i++)
	{

	   for(j=0;j<10;j++)
	     k[j].distance=10000;
    	num1=0;num2=0;
    	for(j=0;j<pretrainsamplenum;j++)
		{
			if(pretrain[j]!=i)
		     insert(pretrain[j],distance(test[i],train[pretrain[j]]),m);
		}
    	for(int n=0;n<m;n++)
		{
	    	if(train[k[n].id].feture[10]==1&&k[n].id!=i) num1++;
	        if(train[k[n].id].feture[10]==-1&&k[n].id!=i) num2++;
		}
    	if(num1>num2)test[i].classresult=1;
	    else  test[i].classresult=-1;
	}
    for(i=0;i<testsamplenum;i++)
	{
			sum++;
           if(test[i].feture[10]==test[i].classresult&&test[i].feture[10]==-1)
				sum1++;
			if(test[i].feture[10]==1&&test[i].feture[10]==test[i].classresult)
		       sum2++;
	}
	float f=float(sum1+sum2)/testsamplenum;
    cout<<"随机抽取样本："<<pretrainsamplenum;
	cout<<"  "<<m<<"  近邻 被分-1： "<<sum1;
	cout<<"  被分1： "<<sum2;
	cout<<"  正确率"<<f<<endl;
	ofstream file;
	file.open("result.txt",ios::app);
	file<<pretrainsamplenum<<'\t'<<m<<'\t'<<sum1<<'\t'<<sum2<<'\t'<<f<<endl;
	file.close();

}
int main(void)
{
	kjinlin a;
	int i,j;
	for(j=0;j<9;j++)
	{
		//a.preprocess(1000+500*j);
    	for(i=1;i<10;i++)
		{
		    a.preprocess(1000+500*i);
	       //a.fenlei(i);
	       a.fenlei(j);
		}
	}

	return 0;

}
