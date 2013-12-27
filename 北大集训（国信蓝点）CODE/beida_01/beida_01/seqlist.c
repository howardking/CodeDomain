#include <stdio.h>
#define MaxSize 10
/*��̬˳���ĸ��ֲ���*/


void InsertElem (int Sqlist[], int * len, int i, int x)
{
	/* ��˳����в���Ԫ�� 
  ����Sqlist�����׵�ַ
  ����*len����ĳ���
  ����i:���������λ��
  ����x��������Ԫ�ص�ֵ*/
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
	/*��˳�����ɾ��Ԫ��
  ����Sqlist�����׵�ַ
  ����*len����ĳ���
  ����i��ɾ��Ԫ�ص�λ��*/
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
	/*�������
	����Sqlist��Ҫ�����˳���
	������*len��˳���ĳ���*/
	
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
	/*����������Ҫ����в���*/
	
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