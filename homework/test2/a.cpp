#include <iostream>
#include <fstream>
using namespace std;

#define MAX 10000

int main()
{
	double a[10];//存储系数
	double traindata[MAX][12];//存储每个样本值
	double p=0.1;//比例因子

//从train文件中读训练数据
	long count=0;
	long counterr=0;
	ifstream train("C:\\Users\\tianhan\\Desktop\\a.txt",ios::in);
	while(!train.eof())
	{
		train>>traindata[count/11][count%11];
		traindata[count/11][11]=0;
		count++;
	}
	train.close();
//梯度下降法训练
	for (int i=0;i<10;i++)
		a[i]=0;
	int k=0;
	do 
	{
		k++;
		counterr=0;
		for(i=0;i<count/11;i++)
		{
			if (traindata[i][10]>0)
			{
				if(traindata[i][11]==0)
				{
					for(int j=0;j<10;j++)
					{
						a[j]+=p*traindata[i][j];
					}
					counterr++;
				}			
			}
			else
			{
				if(traindata[i][11]==0)
				{
					for(int j=0;j<10;j++)
					{
						a[j]+=(-1)*p*traindata[i][j];
					}
					counterr++;
				}
			}
		}

		for (i=0;i<count/11;i++)
		{
			double temp=0;
			int j;
			if (traindata[i][10]>0)
			{
				
				for (j=0;j<10;j++)
				{
					temp+=a[j]*traindata[i][j];	
				}
			}
			else
			{
				for (j=0;j<10;j++)
				{
					temp+=(-1)*a[j]*traindata[i][j];	
				}
			}
			if(temp<0)
				traindata[i][11]=0;
			else
				traindata[i][11]=1;
			
		}
	} while (counterr!=0);
	for(i=0;i<10;i++)
		cout<<a[i]<<" "<<endl;
	cout<<k<<endl;
/*	for (i=0;i<count/11;i++)
	{
		double temp=0;
		for (int j=0;j<10;j++)
		{
			temp+=a[j]*traindata[i][j];
		}
		cout<<temp<<endl;
	}
*/

//验证test的分类
	fstream test("C:\\Users\\tianhan\\Desktop\\test.txt",ios::in);
	count=0;
	int right=0;
	while(!test.eof())
	{
		test>>traindata[count/11][count%11];
		count++;
	}
	for(i=0;i<count/11;i++)
	{
		double temp;
		for(int j=0;j<10;j++)
			temp+=a[j]*traindata[count/11][count%11];
		if ((temp>0 && traindata[i][10]>0) || (temp<0 && traindata[i][10]<0))
			right++;
	}
	cout<<right<<" "<<count/11<<endl;
	cout<<1.0*right/(count/11);
	return 0;
}