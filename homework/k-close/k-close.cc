#ifndef K_CLOSE_CC
#define K_CLOSE_CC

#include "k_close.h"

#endif // K_CLOSE_CC

c_k_close::c_k_close()
{
	int i = 0;
	int j = 0;
	int sum=0;
	fstream f_file;
	f_file.open("train.txt");
	f_file>>s_train[i].feture[0];
	while(s_train[i].feture[0]!=EOF)
	{
    	for(j=1;j<11;j++)
		{
	    	file>>s_train[i].feture[j];
		}
		i++;
		file>>s_train[i].feture[0];
	}
	p_train_sample_num=i;
	f_file.close();
	i=0;
	f_file.open("test.txt");
	f_file>>s_test[i].feture[0];
	while(s_test[i].feture[0]!=100)
	{
    	for(j=1;j<11;j++)
		{
	    	f_file>>s_test[i].feture[j];
		}
		i++;
		f_file>>s_test[i].feture[0];
	}
	p_train_sample_num=i;
	f_file.close();
}

void c_k_close::m_preprocess(int room)
{
    p_pretrain_sample_num=room;
	int i = 0;
	int n1 = 0;
	int n2 = 0;
    srand((int)time(0));
	for(i=0;i<room/2;i++)
	{

		n1=int(rand()%p_pretrain_sample_num);
		n2=int(rand()%p_pretrain_sample_num);
		while(s_train[n1].feture[10]!=1)
			n1=int(rand()%p_pretrain_sample_num);
		while(s_train[n2].feture[10]!=-1)
			n2=int(rand()%p_pretrain_sample_num);
		p_pretrain[2*i]=n1;
		p_pretrain[2*i+1]=n2;
	}
}


float c_k_close::m_distance(simple a,simple b)
{
	int i;
	float s=0;
	for (i=0; i<10; i++){
        s += (a.feture[i]-b.feture[i])*(a.feture[i]-b.feture[i]);
	}
	s = sqrt(s);
	/*for( i=0;i<10;i++)
		if(a.feture[i]>b.feture[i])
	    	s=s+a.feture[i]-b.feture[i];
		else
			s=s-a.feture[i]+b.feture[i];*/
	return s;
}

void c_k_close::m_insert(int id,float distance,int m)
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

void c_k_close::m_classification(int size)
{
    int i = 0;
    int j = 0;
    int sum=0 ;
	int num1 = 0;
	int num2 = 0;

    for( i=0;i<p_test_sample_numm;i++)
	{

	   for(j=0;j<10;j++)
	     k[j].distance=10000;
    	num1=0;num2=0;
    	for(j=0;j<p_pretrain_sample_num;j++)
		{
			if(p_pretrain[j]!=i)
		     insert(p_pretrain[j],m_distance(s_test[i],s_train[p_pretrain[j]]),m);
		}
    	for(int n=0;n<m;n++)
		{
	    	if(s_train[k[n].id].feture[10]==1&&mark[n].id!=i) num1++;
	        if(s_train[k[n].id].feture[10]==-1&&mark[n].id!=i) num2++;
		}
    	if(num1>num2)test[i].classresult=1;
	    else  s_test[i].classresult=-1;
	}
    for(i=0;i< p_test_sample_num;i++)
	{
			sum++;
           if(s_test[i].feture[10]==s_test[i].classresult&&s_test[i].feture[10]==-1)
				sum1++;
			if(s_test[i].feture[10]==1&&s_test[i].feture[10]==s_test[i].classresult)
		       sum2++;
	}
	float f=float(sum1+sum2)/p_test_sample_num;
    cout<<"随机抽取样本："<< p_pretrain_sample_num;
	cout<<"  "<<m<<"  近邻 被分-1： "<<sum1;
	cout<<"  被分1： "<<sum2;
	cout<<"  正确率"<<f<<endl;
	ofstream file;
	file.open("result.txt",ios::app);
	file<< p_pretrain_sample_num<<'\t'<<m<<'\t'<<sum1<<'\t'<<sum2<<'\t'<<f<<endl;
	file.close();

}
