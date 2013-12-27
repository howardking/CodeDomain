#include <stdio.h>
#define MaxSize 10
/*静态顺序表的各种操作*/


void InsertElem (int Sqlist[], int * len, int i, int x)
{
	/* 向顺序表中插入元素 
  参数Sqlist：表首地址
  参数*len：表的长度
  参数i:插入参数的位置
  参数x：待插入元素的值*/
	int t;
	if (*len==MaxSize || i<1 || i>*len+1)
	{
		printf("This insert is illegal\n");
		return ;	
	}	
	
	for (t=*len;t>i-1;t--)
	{
		Sqlist[t] = Sqlist[t-1];	
	}
	
	Sqlist[i-1] = x;
	*len = *len + 1;
}


void DelElem(int Sqlist[], int *len, int i)
{
	/*向顺序表中删除元素
  参数Sqlist：表首地址
  参数*len：表的长度
  参数i：删除元素的位置*/
	int j;
	
	if(i<1 || i>*len+1)
	{
		printf("This delete is illegal\n");
		return ;		
	}
	
	for(j=i; j<=*len-1; j++)
	{
		Sqlist[j-1] = Sqlist[j];
	}
	
	*len = *len - 1;
}

void Print(int Sqlist[], int *len)
{
	/*输出函数
	参数Sqlist：要输出的顺序表
	参数：*len：顺序表的长度*/
	
	int j;
	
	for(j=0;j<*len;j++)
	{
		printf("%d ",Sqlist[j]);	
	}	
	printf("\n");
	printf("The spare length is %d\n",MaxSize - *len);
}

int main(void)
{
	/*主函数，按要求进行测试*/
	
	int Sqlist[MaxSize];
	int len;
	int i;
	for(i=0; i<6; i++)
	{
		scanf("%d",&Sqlist[i]);	
	}
	
	len = 6;
	Print(Sqlist,&len);
	InsertElem(Sqlist,&len,3,0);
	Print(Sqlist,&len);
	InsertElem(Sqlist,&len,11,0);
	DelElem(Sqlist,&len,6);
	Print(Sqlist,&len);	
	
	return 0;	
}