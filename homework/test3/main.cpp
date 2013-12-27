#include <iostream>
#include <fstream>
#define MAX 10000

using namespace std;

double traindata[MAX][12];

int main(void)
{
	double w[10];

	double n=0.1;
	long count=0;
	for(int i=0;i<10;i++)
		w[i]=1.0;
	ifstream train("train.txt",ios::in);
	while(!train.eof())
	{
		train>>traindata[count/11][count%11];
		traindata[count/11][11]=1;
		count++;
	}
	long countright=0;
	int cnt=0;
	do
	{
		int o;
		double temp=0;
		if(traindata[cnt][11]!=0)
		{
			for(int i=0;i<10;i++)
			{
				temp+=w[i]*traindata[cnt][i];
			}
			temp>0?o=1:o=-1;
			if(traindata[cnt][10]==o)
			{
				countright++;
				traindata[cnt][11]=0;
			}
			else
			{
				for ( int i=0;i<10;i++)
				{
					w[i]+=n*(traindata[cnt][10]-o)*traindata[(cnt+1)%(count/11)][i];
				}
			}
		}
		cnt++;
		cnt%=count/11;
	} while (countright==count/11);
	for (int i=0;i<10;i++)
	{
		cout<<w[i]<<" ";
	}
	cout<<endl;
	train.close();

	ifstream test("test.txt",ios::in);
	count=0;
	while(!test.eof())
	{
		test>>traindata[count/11][count%11];
		count++;
	}
	int right=0;
	for (int i=0;i<count/11;i++)
	{
		double temp=0;
		for (int j=0;j<10;j++)
		{
			temp+=w[j]*traindata[i][j];
		}
		if ((temp>0 && traindata[i][10]>0) || (temp<0 && traindata[i][10]<0))
		{
			right++;
		}
	}
	cout<<right<<" "<<count/11<<" "<<1.0*right/(count/11);
	return 0;
}
