/*--------------001:beida_01--------------*/

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

/*--------------002:beida_002--------------*/

#include <stdio.h>
#include <conio.h>
#define MaxSize 10

typedef int ElemType;

typedef struct{
	int *elem;
	int length;
	int listSize;
}Sqlist;

void initSqlist(Sqlist *L)
{
	/*
	��ʼ��һ��˳������
	����L��Sqlist���͵�ָ��*/
	L->elem = (int *)malloc(MaxSize*sizeof(ElemType));
	if(!L->elem)
		exit(0);
	L->length = 0;
	L->listSize = MaxSize;
}

void InsertElem(Sqlist *L, int i, ElemType item)
{
	/*����в�������
	����L��Sqlist���͵�ָ��
	����i:����Ԫ�ص�λ��
	����item�������Ԫ��*/
	ElemType * base, * insertPtr, *p;
	if (i<1 || i>L->length+1)
		exit(0);
	if (L->length >= L->listSize)
	{
		base = (ElemType *)realloc(L->elem,(L->listSize+10)*sizeof(ElemType));
		L->elem = base;
		L->listSize = L->listSize + 100;
	}
	insertPtr = &(L->elem[i-1]);
	for (p=&(L->elem[L->length-1]); p>=insertPtr; p--)
	{
		*(p+1) = *p;
	}
	*insertPtr = item;
	L->length++;

}

void DeleElem(Sqlist *L, int i)
{
	/*��������ɾ��Ԫ��
	����L��Sqlist���͵�ָ��
	����i��ɾ��Ԫ�ص�λ��	
	*/
	ElemType * delItem, *q;
	if (i<1 || i>L->length)
		exit(0);
	delItem = &(L->elem[i-1]);
	q=L->elem+L->length-1;
	for (++delItem; delItem<=q; ++delItem)
		*(delItem-1) = *(delItem);
	L->length--;
}

void main(void)
{
	Sqlist l;
	int i;
	initSqlist(&l);
	for (i=0; i<15; i++)
	{
		InsertElem(&l,i+1,i+1);
	}

	printf("\nThe content of the list is \n");

	for (i =0; i<l.length; i++)
	{
		printf("%d ",l.elem[i]);
	}

	DeleElem(&l,5);

	printf("\nDelete the fifth element\n");

	for (i=0; i<l.length; i++)
	{
		printf("%d ",l.elem[i]);
	}

	return ;
}

/*--------------countascii--------------*/

#include <string.h>
#include <stdio.h>

int main(void)
{
	char c;
	int space, table, enter;
	space = 0;
	table = 0;
	enter = 0;
	printf("Please input a string:\n");
	scanf("%c",&c);
	while (c != EOF)
	{
		switch(c)
		{
		case 32:
			space ++;
			break;
		case 9:
			table ++;
			break;
		case 10:
			enter ++;
			break;
		default:
			break;
		}
		scanf("%c",&c);
	}
	printf("The number of space:%d\n",space);
	printf("The number of table:%d\n",table);
	printf("The number of enter:%d\n",enter);

	getch();
	return 0;
}

/*--------------calascii--------------*/

#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char c;
	while(1)
	{
		c = getch();
		printf("%d\n",c);
	}
	return ;
}

/*chengji*/

#include <stdio.h>

void main(void)
{
	float chengji;
	scanf("%f",&chengji);
	if(chengji>=0 && chengji<=100)
	{
		if(chengji >= 90)
		{
			printf("A\n");
		}
		if(chengji<90 && chengji>=80)
		{
			printf("B\n");
		}
		if(chengji>=70 && chengji<80)
		{
			printf("C\n");
		}
		if(chengji>=60 && chengji<70)
		{
			printf("D\n");
		}
		if(chengji < 60)
		{
			printf("E\n");
		}
	}
	else 
	{
		printf("�ɼ��������\n");
	}
	
	return ;
}

/*---------compcode.c--------------*/

#include <stdio.h>

void Decode(char *str, int n)
{
	int i = 0;
	while (i<n)
	{
		switch(str[i])
		{
		case '1':
			printf("a");
			break;
		case '0':
			{
				i++;
				switch(str[i])
				{
					case '1':
					printf("b");
					break;
					case '0':
					{
						i++;
						switch(str[i])
						{
							case '1':
							printf("c");
							break;
						}
						break;
					}
					break;
				}
			}
		
		}
		i++;
	}
}

void main(void)
{
	char str[18] = "001011101001011001";
	Decode(str,18);
	getchar();
}

/*---------runnian.c--------------*/

#include <stdio.h>

int main(void)
{
	int curYear;
	scanf("%d",&curYear);

	if (0==curYear%4 && 0!=curYear%100 || 0==curYear%400)
	{
		printf("%d��������\n",curYear);
	}
	else 
	{
		printf("%d�겻������\n",curYear);
	}
	
	return 0;
}

/*---------pointer.c--------------*/
#include <stdio.h>
#define LEN 10

void inputArray(int *arr, int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
}

int main (void)
{
	int i;
	int arr[LEN];
	inputArray(arr,LEN);
	for (i=0; i<LEN;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}


/*---------juzhenzhuanhuan.c--------------*/
#include <stdio.h>

int main(void)
{
	int i,j;
	int arr[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	} ;
	int arrResult[4][3];

	for (i=0; i<3; i++)
	{
		for (j=0; j<4; j++)
		{
			arrResult[j][i] = arr[i][j];
		}
	}

	for (i=0; i<4; i++)
	{
		for (j=0; j<3; j++)
		{
			printf("%3d",arrResult[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*---------mutliArray.c--------------*/
#include <stdio.h>

int main(void)
{
	int i,j,k;
	int arrOne[2][3] = {
						{1,2,3},
						{4,5,6}
					   };
	int arrTwo[3][4] = {
						{1,0,2,3},
						{4,1,5,6},
						{6,8,9,10}
						};
	int arrResult[2][4] ={
						{0,0,0,0},
						{0,0,0,0}
						};
	for (i=0; i<2; i++)
		for (j=0; j<4;j++)
			for (k=0; k<3; k++)
			{
				arrResult[i][j] += arrOne[i][k]*arrTwo[k][j];
			}

	for (i=0; i<2; i++)
	{
		for (j=0; j<4;j++)
		{
			printf("%5d",arrResult[i][j]);
		}
		printf("\n");
	}
		
	return 0;		

}


/*---------bitcal.c--------------*/
#include <stdio.h>

int main (void)
{
	int m = 5;
	int n =10;
	printf("����ǰ��x1 = %d,x2 = %d\n",m,n);
	m^=n;
	n^=m;
	m^=n;
	printf("������x1 = %d,x2 = %d\n",m,n);
	return 0;
}

/*---------RWFile.c--------------*/
#include <stdio.h>
#include <string.h>

int main(void)
{/*
	������д���ļ���Ȼ���������*/
	FILE *fp;
	char pathName[20], txt1[20] = {'\0'},txt2[20] = {'\0'};
	int fileLen;
	printf("Please type the path name of the file\n");
	scanf("%s",pathName);
	fp = fopen(pathName,"w");
	printf("Please input a string to this file\n");
	scanf("%s",txt1);
	fileLen = strlen(txt1);
	fwrite(txt1,fileLen,1,fp);
	fclose(fp);
	printf("The file has been saved\n");
	printf("The content of the file :%s is \n",pathName);
	fp = fopen(pathName,"r");
	fread(txt2,fileLen,1,fp);
	printf("%s\n",txt2);
	getche();
}

/*---------fileSize.c--------------*/
#include <stdio.h>

int main(void)
{
	/*�����ļ��Ĵ�С*/
	int f;
	FILE *fp = fopen("text","r");
	fseek(fp,0,SEEK_END);
	f = ftell(fp);
	fclose(fp);
	printf("�ļ��Ĵ�С�ǣ�%d",f);
	return 0;
}


/*---------runtime.c--------------*/
#include <stdio.h>
#include <time.h>
#include <dos.h>

int main(void)
{
	/*����������е�ʱ��*/
	clock_t start, end;
	start = clock;
	sleep(1);
	end = clock();
	printf("The time was :%f\n",(end-start)/CLK_TCK);

	return 0;
}

/*---------dectobi(1).c--------------*/
#include <stdio.h>

void deToBi(int a)
{
	int i = 0;
	int stack[10];
	int r;
	int s;
	do{
		r = a/2;
		s = a%2;
		stack[i] = s;
		if (0 != r)
		{
			i++;
			a = r;
		}
	}while (r);
	for (; i>=0; i--)
	{
		printf("%d",stack[i]);
	}
	printf("\n");
}

int main(void)
{
	int a;
	printf("������һ��ʮ��������\n");
	scanf("%d",&a);
	deToBi(a);
	getch();
	return 0;
}

/*---------bitodec(2).c--------------*/
#include <stdio.h>

int main(void)
{
	int or;
	int p;
	int temp;
	int i = 0;
	int arr[32] ;
	printf("������һ��ʮ����������\n");
	scanf("%d",&or);
	p = or;
	while (p)
	{
		temp = p%2;
		p = p/2;
		arr[i] = temp;
		i++;
	}
	printf("ת����Ķ�������Ϊ��\n");
	for (i--; i>=0; i--)
	{
		printf("%d",arr[i]);
		
	}
	printf("\n");
	//getch();
	return 0;
}

#include <stdio.h>

/*---------printstar.c--------------*/
void draw(int n)
{
	/*������ӡͼ��ĺ���*/
	int i;
	int j;
	int k;
	for (k=0; k<n; k++)
	{
		for (i=0; i<n-k; i++)
		{
			printf(" ");
		}
		for (j=0; j<2*k+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int main(void)
{
	int a;
	printf("������*��������\n");
	scanf("%d",&a);
	draw(a);
	getch();
	return 0;
}

/*---------yanghuisanjiao.c--------------*/
#include <stdio.h>

int main(void)
{
	int i;
	int j;
	int k;
	int buf[7];
	int tmp[7];
	for (i=0; i<=6; i++)
	{
		if (0==i)
		{
			printf("%d",1);
		}
		else if (1 == i)
		{
			printf("\n%d %d\n",1,1);
			buf[0] = 1;
			buf[1] = 1;
		}
		else 
		{
			for (j=1; j<=i+1; j++)
			{
				/*��ӡһ��*/
				if (1==j || j==i+1)
				{
					printf("%d ",1);
					tmp[j-1] = 1;
				}
				else 
				{
					printf("%d ",buf[j-2]+buf[j-1]);
					tmp[j-1] = buf[j-2] + buf[j-1];
				}
			}
			printf("\n");
			for (k=0; k<7; k++)
			{
				buf[k] = tmp[k];
			}
		}
	}
	getch();
	return 0;
}

/*---------nsum.c--------------*/`
#include <stdio.h>
#include <math.h>

void sum(int count)
{
	int i;
	double n = 1;
	double sum = 0.0;
	int mutl = 1;
	for (i=0; i<count; i++)
	{
		mutl *= (i+1);
		n *= (1.0/2);
		sum += mutl * n;
	}
	printf("������ǰn����ǣ�%f\n",sum);
	
}

int main(void)
{
	int a;
	printf("�����뼶����������\n");
	scanf("%d",&a);
	sum(a);
	getch();
	return 0;
}

/*---------andian.c--------------*/`
#include <stdio.h>

void FindAnDian(void)
{
	/*�ú��������ҳ�5*5�����еİ���*/
	int i;
	int j;
	int _i;
	int _j;
	int max;
	int flag;
	int arr[5][5];
	printf("������5*5����\n");
	for (i=0; i<5; i++)
		for(j=0; j<5; j++)
		{
			scanf("%d",&arr[i][j]);
		}
	printf("�������5*5����\n");
	for (i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d",arr[i][j]);
		}
		printf("\n");
	}
	for (i=0; i<5; i++)
	{
		max = arr[i][0];
		_i = i;
		_j = 0;
		for(j=1; j<5; j++)
		{
			if (max<=arr[i][j])
			{
				max = arr[i][j];
				_i = i;
				_j = j;
			}
		}
		for(j=0; j<5; j++)
		{
			if (max>arr[j][_j])
			{
				break;
			}
		}

		if (5 == j)
		{
			printf("�����ǣ�(%d,%d)ֵΪ%d\n",_i,_j,arr[_i][_j]);
		}
	}
}

int main(void)
{
	FindAnDian();
	getch();
	return 0;
}

/*---------reverse.c--------------*/
#include <stdio.h>

void Print(void)
{
	char c;
	scanf("%c",&c);
	if ('#' != c)
	{
		Print();
	}
	if ('#' != c)
	{
		printf("%c",c);
	}
}

int main(void)
{
	Print();
	return 0;
}

/*---------dayth.c--------------*/
#include <stdio.h>

void WhichDay(int year, int month, int day)
{
	int i;
	int sum=0;
	int monthDay[13] = {0,31,0,31,30,31,30,31,31,30,31,30,31};
	if ((0==year%4 && 0!=year%100) || (0==year%400))
	{
		monthDay[2] = 29;
	}
	else 
	{
		monthDay[2] = 28;
	}
	for (i=1; i<month; i++)
	{
		sum += monthDay[i];
	}
	sum += day;
	printf("���Ǹ���ĵ�:%d��\n",sum);
}

int main(void)
{
	int gyear;
	int gmonth;
	int gday;
	printf("��������ݣ�\n");
	scanf("%d%d%d",&gyear,&gmonth,&gday);
	WhichDay(gyear,gmonth,gday);

	getch();
	return 0;
}

/*---------addlink.c--------------*/
#include <stdio.h>                     //�˳�������ʱ������

typedef int ElemType;

typedef struct node{
	ElemType data;                      //������
	struct node * next;					//ָ����
}LNode, *LinkList;

LinkList CreatLinkList (int n)
{
	LinkList p,r,list = NULL;
	ElemType e;
	int i;
	for (i=1; i<=n; i++)
	{
		scanf("%d",&e);
		p = (LinkList)malloc(sizeof(LNode));
		p->data = e;
		p->next = NULL;
		if (!list)
		{
			list = p;
		}
		else 
		{
			r->next = p;
		}
		r = p;
	}
	return list;
}

void InsertList (LinkList *list, LinkList q, ElemType e)
{
	LinkList p;
	p = (LinkList)malloc(sizeof(LNode));
	p->data = e;
	if (!*list)
	{
		//*list = p;
		list = p;
		p->next = NULL;
	}
	else 
	{
		p->next = q->next;
		q->next = p;
	}
}

void DelLink(LinkList *list, LinkList q)
{
	LinkList r;
	if (q==list)
	{
		//*list = q->next;
		list = q->next;
		free(q);
	}
	else 
	{
		for (r=*list; r->next!=q; r=r->next);
		if (r->next != NULL)
		{
			r->next = q->next;
			free(q);
		}
	}
}

void DestoryLinkList(LinkList *list)
{
	LinkList p,q;
	//p = *list;
	p = list;
	while (p)
	{
		q = p->next;
		free(p);
		p = q;
	}
	//*list = NULL;
	list = NULL;
}


int main(void)
{
	int e,i;
	LinkList l,q;
	q = l = CreatLinkList (l);
	scanf("%d",&e);
	while (e)
	{
		InsertList (&l,q,e);
		q = q->next;
		scanf("%d",&e);
	}
	q = l;
	printf("The content of the linklist\n");
	while (q)
	{
		printf("%d ",q->data);
		q = q->next;
	}
	q = l;
	printf("\nDelete the fifth element\n");
	for (i=0; i<4; i++)
	{
		q = q->next;
	}
	DelLink(&l,q);
	q = l;
	while (q)
	{
		printf("%d ",q->data);
		q = q->next;
	}
	DestoryLinkList(&l);
	getch();
	return 0;
}

/*---------shehanwang.c--------------*/
#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	double sum = 0.0;
	for (i=1; i<=64; i++)
	{
		sum += pow(2,i-1);
	}
	printf("%f\n",sum);
	return 0;
}

/*---------gongyuebeishu.c--------------*/
#include <stdio.h>

void Cal(int a, int b)
{
	/*�����Լ������С������*/
	int temp;
	int tempA = a;
	int tempB = b;
	if (tempA<tempB)
	{
		temp = tempA;
		tempA = tempB;
		tempB = temp;
	}
	while (tempA>tempB)
	{
		tempA = tempA - tempB;
		if (tempA<tempB)
		{
			temp = tempA;
			tempA = tempB;
			tempB = temp;
		}
	}
	if (tempA)
	{
		printf("���Լ���ǣ�%d\n",tempA);
	}
	printf("��С�������ǣ�%d\n",a*b/tempA);
}

int main(void)
{
	int m;
	int n;
	printf("������������������\n");
	scanf("%d%d",&m,&n);
	Cal(m,n);
	getch();
	return 0;
}

/*---------thrcolorball.c--------------*/
#include <stdio.h>

int main(void)
{
	/*
	��ɫ������
	*/
	int red;
	int yellow;
	int green;
	printf("RED  YELLOW  GREEN\n");
	for (red=0; red<4; red++)
		for (yellow=0; yellow<4; yellow++)
			for (green=2; green<7; green++)
		{
			if (8==red+yellow+green)
				printf("%   d%6d%8d\n",red,yellow,green);
		}
	getch();
	return 0;
}

/*---------baiqianbaiji.c--------------*/
#include <stdio.h>

int main(void)
{
	/*
	��Ǯ�׼�����
	*/
	int cook;
	int hen;
	int childhen;
	for (cook=0; cook<=20; cook++)
		for(hen=0; hen<=33; hen++)
			for(childhen=3; childhen<=100; childhen+=3)
				if(100==(cook+hen+childhen) && 100==(5*cook+3*hen+childhen/3))
				{
					printf("cook=%d,hen=%d,childhen=%d\n",cook,hen,childhen);
				}
	getch();
	return 0;
}

/*---------huiwenzi.c--------------*/
#include <stdio.h>
#include <string.h>

int HuiWenZi(char arr[])
{
	int i;
	int n = strlen(arr);
	int m = (n-1)/2;
	int flag = 1;
	for(i=0; i<m; i++)
	{
		if(arr[i]!=arr[n-1-i])
		{
			flag = 0;
		}
	}
	if (1==flag)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int main(void)
{
	/*�жϻ�����*/
	int flag;
	char arrayA[100] = "0";
	scanf("%s",arrayA);
	flag = HuiWenZi(arrayA);
	if (1 == flag)
	{
		printf("%s�ǻ�����\n",arrayA);
	}
	else 
	{
		printf("%s���ǻ�����\n",arrayA);
	}
	getch();
	return 0;
}

/*---------IsPrime.c--------------*/
#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
	/*
	�ж��ǲ�������
	*/
	int i;
	int flag;
	int j = (int)sqrt(n);
	flag = 1;
	for (i=2; i<=j; i++)
	{
		if (0 == n%i)
		{
			flag = 0;
		}
	}
	return flag;
}

int main(void)
{
	int a;
	int temp;
	printf("��������жϵ�����\n");
	scanf("%d",&temp);
	a = IsPrime(temp);
	if (a == 1)
	{
		printf("%d������\n",temp);
	}
	else
	{
		printf("%d����������\n",temp);
	}
	getch();
	return 0;
}

/*---------GoldBach.c--------------*/
#include <stdio.h>
#include <math.h>

int IsPrime(int n)
{
	/*�жϸ����ǲ�������*/
	int i;
	int flag;
	int j = (int)sqrt(n);
	flag = 1;
	for (i=2; i<=j; i++)
	{
		if (0 == n%i)
		{
			flag = 0;
		}
	}
	return flag;
}

void IsGoldBach(int a)
{
	/*�ж��ǲ�������������ӵ���ʽ�����*/
	int i;
	for (i=2; i<=a-2; i++)
	{
		if (IsPrime(i))
		{
			if (IsPrime(a-i))
			{
				printf("%d = %d + %d\n",a,i,a-i);
				break;
			}
		}
	}
	return ;
}

void TestPru(int i, int j)
{
	/*������֤����Ҫ�����д���2��ż��*/
	if(i <= 2)
	{
		i += 2;
	}
	for (i; i<=j; i+=2)
	{
		IsGoldBach(i);
	}
}

int main(void)
{
	/*����������main����������Ҫ���Եľֲ���Χ*/
	int m;
	int n;
	printf("������������ż��:\n");
	scanf("%d%d",&m,&n);
	if (m>=n && 0!=m%2 && 0!=n%2)
	{
		printf("�������!!!\n");
		return -1;
	}
	else
	{
		printf("%d~%d֮�ڵ�ż���ɻ��ɣ�\n",m,n);
		TestPru(m,n);
	}
	getch();
	return 0;
}

/*---------congame.c--------------*/
#include <stdio.h>

void Count(void)
{
	/*���������λ��*/
	long int i;
	int j;
	int re;
	int de;
	int qian;
	int bai;
	int shi;
	int ge;
	for (re=1000; re<=10000; re++)
	{
		for(j=1; j<10;j++)
		{
			i = re * j;
			if (i>=10000)
			{
				continue;
			}
			qian = i/1000;
			bai = i%1000/100;
			shi = i%100/10;
			ge = i%10;
			if (qian!=bai && qian!=shi && qian!=ge && bai!=shi && bai!=ge && shi!=ge && 
				qian!=j && bai!=j && shi!=j && ge!=j)
			{
				de = ge*1000+shi*100+bai*10+qian;
				if (de == re)
				{
					printf("%4d\n",re);
					printf("x%3d\n",j);
					printf("-----\n");
					printf("%4d\n",i);
				}
			}			
		}
		
	}
}

int main(void)
{
	/*
	����һ����λ������ͬ����λ������һ���������λ����λ������ͬ��
	��Ҫ������ΪԪ��λ��������
	*/
	Count();
	getch();
	return 0;
}

/*---------hanwife.c--------------*/
#include <stdio.h>

int Match (int i,int j,int k,char wife[])
{
	if (wife[i] == 'X')
	{
		return 0;
	}
	if (wife[k] == 'X')
	{
		return 0;
	}
	if (wife[k] == 'Z')
	{
		return 0;
	}
}

int main (void)
{
	int i;
	int j;
	int k;
	char husband[3] = {'A','B','C'};
	char wife[3] = {'X','Y','Z'};
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			for (k=0; k<3; k++)
				if (i!=j && j!=k && i!=k)
				{
					if (Match(i,j,k,wife))
					{
						printf("husband  wife\n");
						printf("A----------%c\n",wife[i]);
						printf("B----------%c\n",wife[j]);
						printf("C----------%c\n",wife[k]);
					}
				}
	getch();
	return 0;
}

/*---------ienstanque.c--------------*/
#include <stdio.h>

int main(void)
{
	/*����˹̹���ٶ��ٸ����ݵ�����*/
	int i;
	for (i=7;;i+=7)
	{
		if(1==i%2 && 2==i%3 && 4==i%5 && 5==i%6)
		{
			printf("̨���������ǣ�%d\n",i);
			break;
		}
	}
	getch();
	return 0;
}

/*---------waterflower.c--------------*/
#include <stdio.h>

void Flower(void)
{
	int i;
	int bai;
	int shi;
	int ge;
	for (i=100; i<1000; i++)
	{
		bai = i/100;
		shi = i%100/10;
		ge = i%10;
		if (bai*bai*bai+shi*shi*shi+ge*ge*ge==i)
		{
			printf("%d\n",i);
		}
	}
}
int main(void)
{
	printf("ˮ�ɻ����ǣ�\n");
	Flower();
	getch();
	return 0;
}

/*---------monkey.c--------------*/
#include <stdio.h>

void Peach(void)
{
	int i;
	int sum = 1;
	for (i=10; i>1; i--)
	{
		sum = (sum + 1)*2;
	}
	printf("��һ�����ӵĸ����ǣ�%d\n",sum);
}

int main(void)
{
	/*���ӳ�������*/
	Peach();
	getch();
	return 0;
}

/*---------rabbits.c--------------*/
#include <stdio.h>

void HowMany(void)
{
	int i;
	int arr[12];
	arr[0] = 1;
	arr[1] = 1;
	for (i=2; i<=11; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	printf("���������ǣ�%d\n",arr[11]);
}

int main(void)
{
	/*���Ӳ�������*/
	HowMany();
	getch();
	return 0;
}

/*---------bitodec.c--------------*/
#include <stdio.h>
#include <math.h>

#define STACK_INIT_SIZE 20
#define STACKINSTANCEMENT 10

typedef char ElemType;
typedef struct {
	ElemType * base;
	ElemType * top;
	int stacksize;
}sqStack;

void InitStack(sqStack * s)
{
	/*�ڴ��п���һ�������Ŀռ���Ϊջ�ռ䣬�׵�ַ����s->base*/
	s->base = (ElemType *)malloc(STACK_INIT_SIZE * sizeof(ElemType));
	if (!s->base)
	{
		exit(0);
	}
	s->top = s->base;
	s->stacksize = STACK_INIT_SIZE;
}

void Push(sqStack * s, ElemType e)
{
	if (s->top-s->base >= s->stacksize)
	{
		/*ջ����׷�ӿռ�*/
		s->base = (ElemType *)realloc(s->base, (s->stacksize+STACK_INIT_SIZE)*sizeof(ElemType));
		if (!s->base)
		{
			exit(0);
		}
		s->top = s->base + s->stacksize;
		s->stacksize = s->stacksize + STACKINSTANCEMENT;
	}
	*(s->top) = e;
	s->top++;
}


void Pop(sqStack * s, ElemType *e)
{
	if(s->top == s->base)
	{
		exit(0);
	}
	*e = *--(s->top);
}

int StackLen(sqStack *s)
{
	return (s->top-s->base);
}

int main(void)
{
	/*
	����ջ�����ݽṹ������������ת����ʮ������
	*/
	ElemType c;
	sqStack s;
	int len;
	int i;
	int sum = 0;
	printf("������һ������������\n");

	InitStack(&s);
	scanf("%c",&c);
	while ('#' != c)
	{
		Push(&s,c);
		scanf("%c",&c);
	}
	getch();
	len = StackLen(&s);

	for (i=0; i<len; i++)
	{
		Pop(&s,&c);
		sum += (int)(c-48)*pow(2,i);
	}

	printf("ʮ�������ǣ�%d",sum);
	getche();

	return 0;
}

/*---------linkqueue.c--------------*/
#include <stdio.h>

typedef char ElemType;
typedef struct QNode
{
	ElemType data;
	struct QNode * next;
}QNode, *QueuePtr;

typedef struct {
	QueuePtr front;
	QueuePtr rear;
}LinkQueue;

void InitQueue(LinkQueue *q)
{
	/*��ʼ��һ���ն���*/
	q->front = q->rear = (QueuePtr)malloc(sizeof(QNode));
	if (!q->front)
	{
		exit(0);
	}
	q->front->next = NULL;
}

void EnQueue(LinkQueue * q, ElemType e)
{
	QueuePtr p;
	p = (QueuePtr)malloc(sizeof(QNode));
	if (!q->front)
	{
		exit(0);
	}
	p->data = e;
	p->next = NULL;
	q->rear->next = p;
	q->rear = p;
}

void DeQueue(LinkQueue *q, ElemType * e)
{
	/*������в�Ϊ�գ����ز�ɾ�������Ԫ��*/
	QueuePtr p;
	if (q->front == q->rear)
	{
		exit(0);
	}
	p = q->front->next;
	*e = p->data;
	q->front->next = p->next;
	if (q->rear == p)
	{
		q->rear = q->front;
	}
	free(p);
}

int main(void)
{
	/*������*/
	ElemType e;
	LinkQueue q;
	InitQueue(&q);
	printf("������һ���ַ�����ջ��\n");
	scanf("%c",&e);
	while ('@'!=e)
	{
		EnQueue(&q,e);
		scanf("%c",&e);
	}
	printf("���뵽ջ���ַ����ǣ�\n");
	while (q.front != q.rear)
	{
		DeQueue(&q,&e);
		printf("%c",e);
	}
	printf("\n");
	getch();
	return 0;
}

/*---------bitree.c--------------*/
#include <stdio.h>

typedef struct BiTNode{
	char data;
	struct BiTNode * lchild, *rchild;
} BiTNode,*BiTree;

void CreatBiTree(BiTree * T)
{
	char c;
	scanf("%c",&c);
	if (c == ' ')
	{
		*T = NULL;
	}
	else 
	{
		*T = (BiTNode *)malloc(sizeof(BiTNode));
		(*T)->data = c;
		CreatBiTree(&((*T)->lchild));
		CreatBiTree(&((*T)->rchild));
	}
}

void Visit(char c, int level)
{
	if ('D'==c)
	{
		printf("%c is at %d level of BiTree.\n",c,level);
	}
}

void PreOrderTrav(BiTree T, int level)
{
	if (T)
	{
		Visit(T->data,level);
		PreOrderTrav(T->lchild,level+1);
		PreOrderTrav(T->rchild,level+1);
	}
}

int main(void)
{
	int level = 1;
	BiTree T = NULL;
	CreatBiTree(&T);
	PreOrderTrav(T,level);
	getch();
	return 0;

}

/*---------seqsearch.c--------------*/
#include <stdio.h>

typedef struct {
	int id;
	char name[20];
	float score;
}ElemType;

void Search(ElemType *a, int key,int n)
{
	int i;
	for (i=0; i<4; i++)
	{
		if(a[i].id == key)
		{
			printf("ѧ��ѧ�ţ�%d\n",a[i].id);
			printf("ѧ��������%s\n",a[i].name);
			printf("ѧ���ɼ���%2.2f\n",a[i].score);
		}
	}
}

int main(void)
{
	ElemType arr[4] = {
						{1001,"Tom",98},
						{1002,"Jeff",96},
						{1003,"Huang",97},
						{1004,"Wang",99}				
					  };
	Search(arr,1004,4);
	getch();
	return 0;
}

/*---------halfsearch.c--------------*/
#include <stdio.h>

void HalfSearch(int a[], int m, int key)
{
	int i;
	int j;
	i = 0;
	while (1)
	{
		j = (m+i)/2;
		if (a[j] == key)
		{
			printf("%3d��%3dλ���ϡ�\n",key,j+1);
			break;
		}
		if (a[j] > key)
		{
			m = j - 1;
		}
		else 
		{
			i = j + 1;
		}
	}
}

int main(void)
{
	/*���ֲ���*/
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	HalfSearch(arr,10,2);
	getch();
	return 0;
}

/*---------insertsort.c--------------*/
#include <stdio.h>

void InsertSort (int a[], int n)
{
	/*����������*/
	int i;
	int j;
	for (i=2; i<=n; i++)
	{
		a[0] = a[i];
		j = i-1;
		while (j>0 && a[0]<a[j])
		{
			a[j+1] = a[j--];
		}
		a[j+1] = a[0];
	}
}

int main(void)
{
	int i;
	int arr[11] = {111,9,6,3,8,5,2,7,4,1,0};
	InsertSort(arr,10);
	for (i=1; i<=10; i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}


/*#include <stdio.h>

void InsertSort(int arr[],int m)
{
	int i;
	int j = 0;
	int temp;
	for (i=0; i<m-1; i++)
	{
		if (arr[i]>arr[i+1])
		{
			j = i;
			//temp = arr[i+1];
			break;
		}
	}
	for (j; j<m-1; j++)
	{
		i = j;
		temp = arr[i+1];
		for (i; i>0; i--)
		{
			arr[i+1] = arr[i];
			if (temp<=arr[i+1] && temp>=arr[i-1])
			{
				arr[i] = temp;
				break;
			}
			if (temp<arr[0])
			{
				arr[1] = arr[0];
				arr[0] = temp;
			}
		}
	}
	printf("�����������ǣ�\n");
	for (i=0; i<m; i++)
	{
		printf("%d ",arr[i]);	
	}
	
	
}

int main(void)
{
	//�˳������н���д���
	int arr[10] = {3,6,9,8,5,2,1,4,7,0};
	InsertSort(arr,10);
	getch();
	return 0;
}*/

/*---------zhiyinshu.c--------------*/
#include <stdio.h>
#include <math.h>

int IsPrime(int m)
{
	/*�ж��Ƿ�Ϊ����*/
	int i;
	int j = (int)sqrt(m);
	for (i=2; i<=j; i++)
	{
		if (0== m%i)
		{
			return 0;
		}
	}
	return 1;
}

void PrimeFactor(int n)
{
	//�ֽ���ʽ
	int i;
	int m = n;
	if (!IsPrime(m))
	{
		for (i=2; i<n; i++)
		{
			if (IsPrime(i))
			{
				while(0 == m%i && m)
				{
					printf("%d ",i);
					m /= i;
				}
			}
		}
	}
	else
	{
		printf("���������������\n");
		exit(0);
	}
}

int main(void)
{
	/*��������Ϊ��������*/
	int a;
	printf("������һ��������\n");
	scanf("%d",&a);
	PrimeFactor(a);
	getch();
	return 0;
}

/*---------chshjiangjun.c--------------*/
#include <stdio.h>

void Face(void)
{
	printf("*********************************************\n\n");
	printf("**********��ս��ʤ�ң�����������*************\n\n");
	printf("*********************************************\n\n");
	printf("��Ϸ��ʼ:��n\n");

}

void Winner (void)
{
	int people;
	int computer;
	int spare = 20;
	Face();
	while (1)
	{
		printf("���ڻ��� %d �����\n",spare+1);
		printf("�㣺");
		scanf("%d",&people);
		if(people>4 || people<1 || people>spare)
		{
			printf("������Ļ���������⣬����������!\n");
			continue;
		}
		if (spare == people)
		{
			printf("��ϲ����Ӯ�ˣ���\n");
			break;
		}
		computer = 5 - people;
		spare = spare - 5;
		printf("���ԣ�%d\n",computer);
		if (0== spare)
		{
			printf("����%d����������ˣ�����Ӯ�ˣ�\n",spare+1);
			break;
		}

	}

	
}

int main(void)
{
	/*��21���������ȡ��ÿ��ֻ��ȡ1-4����񣬲��ɶ�ȡ����ȡ������Ϊ��ʤ����*/
	Winner();
	getch();
	return 0;
}

/*---------pai(1).c--------------*/
#include <stdio.h>
#include <math.h>

void Cal(void)
{
	int i;
	int m;
	int level;
	double x;
	double pai;
	level = 4;
	x = sqrt(2)/2;
	printf("���������ֵ�þ�ȷ�ȣ�");
	scanf("%d",&m);
	for (i=0; i<m; i++)
	{
		x = sqrt(2.0-2.0*sqrt(1.0-x*x))/2.0;
		level *= 2;
	}
	pai = (x*level)/1;
	printf("�еĽ���ֵ�ǣ�%f\n",pai);
}

int main(void)
{
	/*�ø�����*/
	Cal();
	getch();
	return 0;
}

/*---------pai(2).c--------------*/
#include <stdio.h>
#include <stdlib.h>

void Cal(void)
{
	int n;
	int i;
	int count;
	double x;
	double y;
	double PI;
	printf("������Ҫ���Եĵ�����");
	scanf("%d",&n);
	for (i=0; i<n; i++)
	{
		x = random(101);
		y = random(101);
		if(10000 == x*x+y*y)
		{
			count++;
		}
	}
	PI = 4.0*count/n;
	printf("�еĽ���ֵ�ǣ�%f\n",PI);

}

int main(void)
{
	/*�ø��ʷ����*/
	Cal();
	getch();
	return 0;
}

/*---------magic(shudu).c--------------*/
#include <stdio.h>

int Match(int i, int j, int k, int l ,int m, int n, int o, int p, int q)
{
	/*�ж��Ƿ����1-9������ͬ��9����*/
	if (i!=j && i!=k && i!=l && i!=m && i!=n && i!=o && i!=p && i!=q)
	{
		if (j!=k && j!=l && j!=m && j!=n && j!=o && j!=p && j!=q)
		{
			if (k!=l && k!=m && k!=n && k!=o && k!=p && k!=q)
			{
				if (l!=m && l!=n && l!=o && l!=p && l!=q)
				{
					if (m!=n && m!=o && m!=p && m!=q)
					{
						if (n!=o && n!=p && n!=q)
						{
							if (o!=p && o!=q)
							{
								if (p!=q)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int Justice(int i, int j, int k, int l, int m, int n, int o, int p, int q)
{
	//�ж��Ƿ����ħ������
	if (i+j+k == l+m+n && i+j+k == o+p+q && i+l+o == j+m+p && i+l+o == k+n+q && i+m+q == k+m+o)
	{
		return 1;
	}
	return 0;
}

void GetMatrix(void)
{
	/*��������*/
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;
	int p;
	int q;
	for (i=1; i<10; i++)
	{
		for (j=1; j<10; j++)
		{
			for (k=1; k<10; k++)
			{
				for (l=1; l<10; l++)
				{
					for (m=1; m<10; m++)
					{
						for (n=1; n<10; n++)
						{
							for (o=1; o<10; o++)
							{
								for (p=1; p<10; p++)
								{
									for (q=1; q<10; q++)
									{
										if (Match(i,j,k,l,m,n,o,p,q))
										{
											if (Justice(i,j,k,l,m,n,o,p,q))
											{
												printf("%3d%3d%3d\n",i,j,k);
												printf("%3d%3d%3d\n",l,m,n);
												printf("%3d%3d%3d\n\n\n",o,p,q);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int main(void)
{
	/*
	ħ�����������㷨��
	*/
	GetMatrix();
	getch();
	return 0;
}

/*---------movedig.c--------------*/
#include <stdio.h>

void GetStep(int m[])
{
	int i;
	int j;
	int temp;
	for (i=0; i<7; i++)
	{
		for (j=0; j<7-i; j++)
			if (m[j]>=m[j+1])
			{
				temp = m[j];
				m[j] = m[j+1];
				m[j+1] = temp;
				printf("(%d# --> 0#)\n",j+1);
				printf("(%d# --> %d#)\n",j+2,j+1);
				printf("(0# --> %d#)\n",j+2);
			}
	}
	printf("\n");
}


void Print(int m[])
{
	printf("[%d]--[%d]--[%d]\n",m[0],m[1],m[2]);
	printf(" |  %c | %c  |\n",92,47);
	printf("[%d]--[ ]--[%d]\n",m[7],m[3]);
	printf(" |  %c | %c  |\n",47,92);
	printf("[%d]--[%d]--[%d]\n",m[6],m[5],m[4]);
}

int main(void)
{
	int i;
	int m[8];
	printf("������8��������1-8����");
	for (i=0; i<8; i++)
	{
		scanf("%d",&m[i]);
	}
	printf("����ĳ�ʼ״̬�ǣ�\n");
	Print(m);
	printf("\n�ƶ����裺\n");
	GetStep(m);
	printf("�ƶ�����ǣ�\n");
	Print(m);
	getch();
	return 0;
}

/*---------PreSort��1��.c--------------*/
#include <stdio.h>

void PerSort(void)
{
	int i;
	int j;
	int k;
	int arr[3] = {1,3,5};
	printf ("����Ϊ��\n");
	for (i=0; i<3; i++)
		for (j=0; j<3; j++)
			for (k=0; k<3; k++)
			{
				if (i!=j && i!= k && j!=k)
				{
					printf ("%3d%3d%3d\n",arr[i],arr[j],arr[k]);
				}
			}
}

int main(void)
{
	/*��forѭ����ȫ����*/
	PerSort();
	getch();
	return 0;
}

/*---------PreSort��2��.c--------------*/
#include <stdio.h>
#define MAX 100

void Pem(int a[], int n, int s, int r[], int m)
{
	int i;
	int j;
	int k;
	int b[MAX];
	int flag = 0;
	for (i=0; i<n; i++)
	{
		flag = 1;
		r[s] = a[i];
		j = 0;
		for (k=0; k<n; k++)
			if (i!=k)
			{
				b[j] = a[k];
				j++;
			}
		Pem(b,n-1,s+1,r,m);
	}
	if (0 == flag)
	{
		printf("\n");
		for (k=0; k<m; k++)
		{
			printf("%d  ",r[k]);
		}
		printf("\n");
	}
}

int main(void)
{
	/*�õݹ鷨��ȫ����*/
	int i;
	int n;
	int a[MAX];
	int r[MAX];
	printf("�����������д����е�Ԫ�صĸ�����\n");
	scanf("%d",&n);
	printf("����������е�����\n");
	for (i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	Pem(a,n,0,r,n);
	getch();
	return 0;
}

/*---------perfectnum.c--------------*/
#include <stdio.h>

void PerfectNum(void)
{
	int i;
	int j;
	int sum;
	for (i=4; i<1000; i++)
	{
		sum = 0;
		for (j=1; j<i; j++)
		{
			if (0 ==i%j)
			{
				sum += j;
			}
		}
		if (sum == i)
		{
			printf("%d  ",i);
		}
	}
}

int main(void)
{
	/*����ȫ��*/
	PerfectNum();
	getch();
	return 0; 
}

/*---------friendlynum.c--------------*/
#include <stdio.h>

int FactorSum(int n)
{
	/*�����Ӻ�*/
	int i;
	int sum = 0;
	for (i=1; i<n; i++)
	{
		if (0 == n%i)
		{
			sum += i;
		}
	}
	return sum;
}

void Friendly(void)
{
	/*�ж��ǲ���������*/
	int i;
	int factorSumOne;
	int factorSumTwo;
	for (i=2; i<3000; i++)
	{
		factorSumOne = FactorSum(i);
		factorSumTwo = FactorSum(factorSumOne);
		if (i == factorSumTwo && i != factorSumOne)
		{
			printf("(%d, %d)  ",i,factorSumOne);
		}
	}
}

int main(void)
{
	/*��1-3000֮�ڵ�������*/
	Friendly();
	getch();
	return 0;
}

/*---------numtranslator.c--------------*/
#include <stdio.h>

void Translation_B(long a);
void Translation_C(long b);

char data_1[19][10] = {"one","two","three","for","five","six",
						"seven","eight","night","ten","eleven",
						"twelve","thirteen","forteen","fifteen",
						"sixteen","seventeen","eighteen","nighteen"};
char data_2[8][7] = {"twenty","thirty","forty","fifty","sixty",
					"seventy","eighty","nighty"};

void Translation_A(long N)
{
	long a;
	if (N==0)
	{
		printf("Zero\n");
		exit(0);
	}
	a = N/1000;
	if (a!=0)
	{
		Translation_B(a);
		printf("Thousand ");
	}
	a = N%1000;
	if (a!=0)
	{
		Translation_B(a);
	}
}

void Translation_B(long a)
{
	long b;
	b = a/100;
	if (b!=0)
	{
		Translation_C(b);
		printf("Hundred ");
	}
	b = a%100;
	if (0!=b)
	{
		Translation_C(b);
	}
}

void Translation_C(long b)
{
	long c;
	if (b<=19)
	{
		printf("%s ",data_1[b-1]);
	}
	else 
	{
		c = b/10;
		printf("%s ",data_2[c-2]);
		c = b%10;
		if (0!=c)
		{
			printf("%s ",data_1[c-1]);
		}
	}
}

int main(void)
{
	/*�����ַ����Ӣ��*/
	long N;
	printf("������һ������0-999999��\n");
	scanf("%ld",&N);
	Translation_A(N);
	getch();
	return 0;
}

/*---------shuzhizhuanhuan.c--------------*/
#include <stdio.h>
#include <math.h>

void BiToDe(int n, int *sum, int *m)
{
	char c;
	scanf ("%c",&c);
	if (c != '#')
	{
		*m = *m + 1;
		BiToDe(n+1, &(*sum), &(*m));
	}
	if ('1' == c)
	{
		*sum = *sum + pow(2,(*m)-n-1);
	}
}

int main(void)
{
	/*�õݹ�Ѷ�������ת����ʮ������*/
	int sum;
	int m;
	sum = 0;
	m = 0;
	printf("������һ���˶���������#�������룺");
	BiToDe(0,&sum,&m);
	printf("�����ʮ�������ǣ�%d",sum);
	getch();
	return 0;
}

/*---------wholies.c--------------*/
#include <stdio.h>

void WhoLies(void)
{
	int a;
	int b;
	int c;
	for (a=0; a<2; a++)
	{
		for (b=0; b<2; b++)
		{
			for (c=0; c<2; c++)
			{
				if ((a&&!b || !a&&b) && (b&&!c || !b&&c) 
					&& (c&&a+b==0 || !c&&a+b!=0))
				{
					printf("�� total a %s\n",a?"True":"lie");
					printf("�� total a %s\n",b?"True":"lie");
					printf("�� total a %s\n",c?"True":"lie");
				}
			}
		}
	}
}

int main(void)
{
	WhoLies();
	getch();
	return 0;
}

/*---------bobsort.c--------------*/
#include <stdio.h>

void Sort(int arr[],int n)
{
	int i;
	int j;
	int temp;
	for (i=0; i<n; i++)
		for (j=n-1; j>i; j--)
		{
			if (arr[j]<arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
}

int main(void)
{
	/*ð�ݷ�����*/
	int i;
	int arr[10] = {9,8,6,5,7,4,2,3,1,0};
	Sort (arr,10);
	for (i=0; i<10; i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}

/*---------selectsort.c--------------*/
#include <stdio.h>

void SelectSort(int arr[],int n)
{
	int i;
	int j;
	int min;
	int temp;
	for (i=0; i<n; i++)
	{
		min = arr[i];
		for (j=i+1; j<n; j++)
		{
			if (min>arr[j])
			{
				temp = min;
				min = arr[j];
				arr[j] = temp;
			}
		}
		arr[i] = min;
	}
}

int main(void)
{
	/*ѡ������*/
	int i;
	int arr[10] = {9,5,2,4,8,7,3,6,1,0};
	SelectSort(arr,10);
	for (i=0; i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	getch();
	return 0;
}


/*---------tomlentbooks.c--------------*/
#include <stdio.h>

void LentBook(void)
{
	int i;
	int j;
	int k;
	int book[5] = {1,2,3,4,5};
	printf("����ķ����У�\n");
	for (i=0; i<5; i++)
	{
		for (j=0; j<5; j++)
		{
			for (k=0; k<5;k++)
			{
				if ((i!=j && i!=k) && (j!=k))
				{
					printf("(%d,%d,%d) ",book[i],book[j],book[k]);
				}
			}
		}
	}
}

int main(void)
{
	/*Tom��������*/
	LentBook();
	getch();
	return 0;
}

/*---------jiecheng��1��.c--------------*/
#include <stdio.h>

int main(void)
{
	/*�ǵݹ���10��*/
	int i;
	int result = 1;
	for (i=1; i<=10; i++)
	{
		result *= i;
	}
	printf("10��= %d\n",result);
	getch();
	return 0;
}

/*---------jiecheng��2��.c--------------*/
#include <stdio.h>

int Factorial(int n)
{
	if (0 == n)
	{
		return 1;
	}
	else 
	{
		return n * Factorial (n-1);
	}
}

int main(void)
{
	/*�ݹ鷨��10��*/
	int n = Factorial(10);
	printf ("10! = %d",n);
	getch();
	return 0;
}

/*---------huafenshu.c--------------*/
#include <stdio.h>

int P(int n, int m)
{
	if (1 == m || 1 == n)
	{
		return 1;
	}
	if (n<m)
	{
		return P(n,n);
	}
	if (n == m)
	{
		return (1+P(n,n-1));
	}
	if (m>1 && m<n)
	{
		return (P(n,m-1)+P(n-m,m));
	}
}


int main(void)
{
	/*���������Ļ��������ݹ鷨��*/
	int n;
	int s;
	printf("������һ�����󻮷�����������\n");
	scanf("%d",&n);
	s = P(n,n);
	printf("%d�Ļ������ǣ�%d\n",n,s);
	getch();
	return 0;
}

/*---------HalfSearch.c--------------*/
#include <stdio.h>

int HalfSearch(int a[], int m, int n,int key)
{
	int k;
	int flag = 0;
	if (a[m] == key)
	{
		return flag = m+1;
	}
	if (a[n] == key)
	{
		return flag = n+1;
	}
	if (key > a[n] || key < a[m])
	{
		return 0;
	}
	k = (m+n)/2;
	if (a[k] == key)
	{
		return flag = k+1;
	}
	if (a[k] > key)
	{
		return flag = HalfSearch(a,m+1,k-1,key);
	}
	if (a[k] < key)
	{
		return flag = HalfSearch(a,k+1,n-1,key);
	}
	return 0;
}

int main(void)
{
	/*�ݹ���۰�����㷨*/
	int flag;
	int key;
	int arr[10] = {2,3,5,7,8,10,12,15,19,21};
	printf("������Ҫ���ҵ��");
	scanf("%d",&key);
	flag = HalfSearch (arr,0,9,key);
	if (flag)
	{
		printf("�����ҵ���%dλ�ڵ�%d��\n",key,flag);
	}
	else
	{
		printf("û����Ҫ�������\n");
	}
	getch();
	return 0;
}

/*---------lianxuzhengshu.c--------------*/
#include <stdio.h>

void LinkInt(int m)
{
	int i;
	int j;
	int n;
	int sum;
	n = (m+1)/2;
	for (i=1; i<n; i++)
	{
		sum = 0;
		for (j=i; sum<m; j++)
		{
			sum += j;
		}
		if (sum == m)
		{
			printf("%d = %d+��+%d\n",m,i,j-1);
		}
	}
}

int main(void)
{
	/*���������Ĺ̶�������*/
	int m;
	printf("��������Ҫ�����������͵�������");
	scanf ("%d",&m);
	LinkInt(m);
	getch();
	return 0;
}

/*---------pingfanghe.c--------------*/
#include <stdio.h>
#include <math.h>

void Sum(int n)
{
	int i;
	int j;
	int flag = 0;
	int k = sqrt(n);
	for (i=0; i<k; i++)
	{
		for (j=i; j<k; j++)
		{
			if (i*i+j*j == n)
			{
				flag = 1;
				printf("\n%d^2+%d^2 = %d ",i,j,n);
			}
		}
	}
	if (!flag)
	{
		printf("\n%d ���ܱ��ֽ����������ƽ���͵���ʽ\n",n);
	}
}

int main(void)
{
	/*�ҳ����п��԰�N������������ƽ����*/
	int n;
	printf("������һ��������");
	scanf("%d",&n);
	Sum(n);
	getch();
	return 0;
}

/*---------teshuxingzhi.c--------------*/
#include <stdio.h>

int main(void)
{
	/*������һ��4λ��abcd��������
	����������abcd = ��ab+cd��^2��
	���У�ab��cdΪ������λ������
	���4λ��abcd*/
	int i;
	int m;
	int n;
	for (i=1010; i<9999; i++)
	{
		m = i/100;
		n = i%100;
		if ((m+n)*(m+n) == i)
		{
			printf("%d ",i);
		}
	}
	getch();
	return 0;
}

/*---------ProJiaoGu.c--------------*/
#include <stdio.h>

void ProJiaoGu(int m)
{
	int i = 0;
	int n = m;
	while (i<10000 && 1!=n)
	{
		if (0== n%2)
		{
			printf("%d/2 = %d\n",n,n/2);
			n /= 2;
		}
		else
		{
			printf("%d*3+1 = %d\n",n,3*n+1);
			n = 3*n+1;
		}
		i++;
	}
	if (i<10000)
	{
		printf("���ǽǹȲ��롣\n");
	}
}

int main(void)
{
	/*��֤�ǹȶ���*/
	int m;
	printf("������һ������֤������");
	scanf("%d",&m);
	ProJiaoGu(m);
	getch();
	return 0;
}

/*---------SiFang.c--------------*/
#include <stdio.h>
#include <math.h>

int SiFangOne(int n)
{
	int m = sqrt(n);
	if (m*m == n)
	{
		printf ("%d = %d^2 ",n,m);
		return 1;
	}
	return 0;
}

int SiFangTwo(int n)
{
	int i;
	int j;
	int m = sqrt(n);
	for (i=0; i<m; i++)
	{
		for (j=i; j<m; j++)
		{
			if (i*i+j*j == n)
			{
				printf("%d = %d^2+%d^2 ",n,i,j);
				return 1;
			}
		}
	}
	return 0;
}

int SiFangThr(int n)
{
	int i;
	int j;
	int k;
	int m = sqrt(n);
	for (i=0; i<m; i++)
	{
		for (j=i; j<m; j++)
		{
			for (k=j; k<m; k++)
			{
				if (i*i+j*j+k*k == n)
				{
					printf("%d = %d^2+%d^2+%d^2 ",n,i,j,k);
					return 1;
				}
			}
		}
	}
	return 0;
}

int SiFangFur(int n)
{
	int i;
	int j;
	int k;
	int l;
	int m = sqrt(n);
	for (i=0; i<m; i++)
	{
		for (j=i; j<m; j++)
		{
			for (k=j; k<m; k++)
			{
				for (l=k; l<m; l++)
				{
					if (i*i+j*j+k*k+l*l == n)
					{
						printf("%d = %d^2+%d^2+%d^2+%d^2 ",n,i,j,k,l);
						return 1;
					}	
				}
				
			}
		}
	}
	return 0;
}

int main(void)
{
	/*��֤�ķ�����*/
	int n;
	printf("qing����Ҫ��֤������");
	scanf("%d",&n);
	if (SiFangOne(n))
	{
		printf("�ķ���������֤��\n");
		exit(0);
	}
	if (SiFangTwo(n))
	{
		printf("�ķ���������֤��\n");
		exit(0);
	}
	if (SiFangThr(n))
	{
		printf("�ķ���������֤��\n");
		exit(0);
	}
	if (SiFangFur(n))
	{
		printf("�ķ���������֤��\n");
		exit(0);
	}
	getch();
	return 0;
}

/*---------tanxin.c--------------*/
#include <stdio.h>

void Sort (int w[], int t[], int n)
{
	int i;
	int j;
	int tmp;
	int * w_tmp = (int *)malloc(sizeof(int)*n);
	for (i=0; i<n; i++)
	{
		t[i] = i;
	}
	for (i=0; i<n; i++)
	{
		w_tmp[i] = w[i];
	}
	for (i=0; i<n-1; i++)
	{
		for (j=0; j<n-i-1; j++)
		{
			if (w_tmp[j]<w_tmp[j+1])
			{
				tmp = w_tmp[j];
				w_tmp[j] = w_tmp[j+1];
				w_tmp[j+1] = tmp;
				tmp = t[j];
				t[j] = t[j+1];
				t[j+1] = tmp;
			}
		}
	}
}

void Loading(int x[], int w[], int c, int n)
{
	int i;
	int s = 0;
	int * t = (int *)malloc(sizeof(int)*n);
	Sort (w,t,n);
	for (i=0; i<n; i++)
	{
		x[i] = 0;
	}
	for (i=0; i<n&&w[t[i]]<=c; i++)
	{
		x[t[i]] = 1;
		c = c-w[t[i]];
	}
}

int main(void)
{
	/*�˴���Ϊ����Դ���룬���˴��������⣨̰���㷨��*/
	int x[5];
	int w[5];
	int c;
	int i;
	printf("�����봬��������أ�");
	scanf("%d",&c);
	printf("������ÿ�����ӵ�������");
	for (i=0; i<5; i++)
	{
		scanf("%d",&w[i]);
	}
	Loading(x,w,c,5);
	//printf("��װ�ص������ǣ�%d");
	for (i=0; i<5; i++)
	{
		if (x[i] == 1)
		{
		printf("�����ǣ�%d",i);
		}
	}
	getch();
	return 0;
}

/*---------diguimin.c--------------*/
#include <stdio.h>

int GetMin(int arr[], int n)
{
	int valu1;
	int valu2;
	int valu3;
	if (1 ==n)
	{
		return arr[0];
	}
	if (0== n%2)
	{
		valu1 = GetMin(arr,n/2);
		valu2 = GetMin(arr+n/2,n/2);
		if (valu1<valu2)
		{
			return valu1;
		}
		else
		{
			return valu2;
		}
	}
	if (0 != n%2)
	{
		valu1 = GetMin(arr,n/2);
		valu2 = GetMin(arr+n/2+1,n/2);
		valu3 = arr[n/2];
		if (valu1<valu2)
		{
			if (valu1<valu3)
			{
				return valu1;
			}
			else
			{
				return valu3;
			}
		}
		else
		{
			if (valu2<valu3)
			{
				return valu2;
			}
			else
			{
				return valu3;
			}
		}
	}
}

int main(void)
{
	/*�õݹ鷨��һ�������е�������Сֵ*/
	int va;
	int arr[9] = {11,13,23,56,8,23,11,23,111};
	va = GetMin(arr,9);
	printf("%d",va);
	getch();
	return 0;
}

/*---------tonggou.c--------------*/
#include <stdio.h>

void TongGou(void)
{
	int i;
	long result = 0;
	printf("1000֮�ڵ�ͬ�����У�\n");
	for (i=1; i<1000; i++)
	{
		result = i*i;
		if (i<10 && i>0)
		{
			result = result%10;
		}
		if (i<100 && i>=10)
		{
			result = result%100;
		}
		if (i<1000 && i>=100)
		{
			result = result%1000;
		}
		if (result == i)
		{
			printf("%d ",i);
		}
	}

}

int main(void)
{
	/*��1000���ڵ�ͬ����*/
	TongGou();
	getch();
	return 0;
}

/*---------Nicoqish.c--------------*/
#include <stdio.h>

void Nicoqish(int m)
{
	int i;
	int j;
	int k;
	int n;
	int sum;
	n = m*m*m;
	for (i=1;i<n; i+=2)
	{
		sum = 0;
		j = i;
		while (j<n && sum<n)
		{
			sum += j;
			j += 2;
		}
		if (sum == n)
		{
			for (k=i; k<j-2; k+=2)
			{
				printf("%d+",k);
			}
			printf("%d ",j-2);
			break;
		}
	}
}

void main(void)
{
	/*��֤��Ƴ�˹����*/
	int m;
	printf("������һ������");
	scanf("%d",&m);
	printf("%d = ",m*m*m);
	Nicoqish(m);
	getch();
	return 0;
}

/*---------sanchonghuiwenshu.c--------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int Palindrome(char arr[])
{
	int i;
	int n = strlen(arr);
	for (i=0; i<n/2; i++)
	{
		if (arr[i] != arr[n-i-1])
			return 0;
	}
	return 1;
}

int main(void)
{
	/*�ж����ػ�����*/
	int i;
	long result;
	char arr[11] = "\0";
	printf("11-1000�����ػ������ǣ�");
	for (i=11; i<1000; i++)
	{
		itoa(i,arr,10);
		if (Palindrome(arr))
		{
			result = i*i;
			itoa(result,arr,10);
			if (Palindrome(arr))
			{
				result = i*i*i;
				itoa(result,arr,10);
				if (Palindrome(arr))
				{
					printf("%d  ",i);
				}
			}
		}
	}
	getch();
	return 0;
}

/*---------Marx.c--------------*/
#include <stdio.h>

int main(void)
{
	/*���˼*/
	int x;          //����
	int y;			//Ů��
	int z;			//С��
	printf("���� Ů�� С��\n");
	for (x=1; x<17; x++)
		for (y=1; y<24; y++)
			for (z=1; z<29; z++)
			{
				if (30==x+y+z&&50==3*x+2*y+z)
				{
					printf("%2d%5d%5d \n",x,y,z);
				}
			}
	getch();
	return 0;
}

/*---------Fisher.c--------------*/
#include <stdio.h>

int main(void)
{
	/*���������*/
	int i;
	int sum = 6;
	for (i=1; i<5; i++)
	{
		sum = sum*5+1;
	}
	printf("���һ������%d���㡣\n",sum);
	getch();
	return 0;
}

/*---------JiaBi.c--------------*/
#include <stdio.h>

int JiaBi(int arr[], int m, int n)
{
	int i;
	int sumOne = 0;
	int sumTwo = 0;
	int sumThr = 0;
	if (0== (n-m+1)%2)
	{
		if (m+1 == n)
		{
			if (arr[m]<arr[n])
			{
				return m+1;
			}
			else
			{
				return n+1;
			}
		}
		for (i=m; i<=m+(m-n)/2; i++)
		{
			sumOne += arr[i];
		}
		for (i=m+(m-n)/2+1; i<=n; i++)
		{
			sumTwo += arr[i];
		}
		if (sumOne>sumTwo)
		{
			return JiaBi(arr,m+(m-n)/2+1,n);
		}
		else
		{
			return JiaBi(arr,m,m+(m-n)/2);
		}
	}
	if (0 != (n-m+1)%2)
	{
		sumThr = arr[m+(m-n)/2];
		for (i=m; i<m+(m-n)/2-1; i++)
		{
			sumOne += arr[i];
		}
		for (i=m+(m-n)/2+1; i<n; i++)
		{
			sumTwo += arr[i];
		}
		if (sumOne>sumTwo)
		{
			return JiaBi(arr,m+(m-n)/2+1,n);
		}
		if (sumOne<sumTwo)
		{
			return JiaBi(arr,m,m+(m-n)/2-1);
		}
		if (sumOne+sumThr==sumTwo+sumThr)
		{
			return m+(m-n)/2+1;
		}
	}
}

int main(void)
{
	/*Ѱ�Ҽٱ�*/
	int jiaBi;
	int arr[30] = {2,2,1,2,2,2,2,2,2,2,
				   2,2,2,2,2,2,2,2,2,2,
				   2,2,2,2,2,2,2,2,2,2};
	jiaBi = JiaBi(arr,0,29);
	printf("�ٱ��ǵ�%d��\n",jiaBi);
	getch();
	return 0;
}

/*---------PaiLieZuHe.c--------------*/
#include <stdio.h>

int main(void)
{
	/*���������*/
	int m;
	int n;
	int k;
	int result1 = 1;
	int result2 = 1;
	printf("������m��n��ֵ��m>n����");
	scanf ("%d%d",&m,&n);
	if (n>m)
	{
		printf("�������!!");
		exit(0);
	}
	k = m-n;
	for (m; m>k; m--)
	{
		result1 *= m;
	}
	for (n; n>0; n--)
	{
		result2 *= n;
	}
	printf("%d\n",result1/result2);
	getch();
	return 0;
}

/*---------diguiqiumi(1).c--------------*/
#include <stdio.h>

long int DiGuiMi(long m, int n)
{
	if (0 == n)
	{
		return 1;
	}
	if (1 == n)
	{
		return m;
	}
	if (n > 1)
	{
		return m*DiGuiMi(m,n-1);
	}
}

int main(void)
{
	/*�ݹ鷨��m��n����*/
	int n;
	long m;
	long re;
	printf("������M^N��");
	scanf ("%ld%d",&m,&n);
	re = DiGuiMi(m,n);
	printf("%ld^%d�ǣ�%ld",m,n,re);
	getch();
	return 0;
}

/*---------diguiqiumi(2).c--------------*/
#include <stdio.h>

unsigned long MyPow(int m, int n)
{
	unsigned long tmp;
	if (0 == n)
	{
		return 1;
	}
	if (1 == n)
	{
		return m;
	}
	if (0==n%2)
	{
		tmp = MyPow(m,n/2);
		return tmp*tmp;
	}
	if (0 != n%2)
	{
		return m*MyPow(m,n-1);
	}
}

int main(void)
{
	/*�����Ż���ĵݹ鷨��m��n����*/
	int m;
	int n;
	printf("������mn��ֵ��");
	scanf("%d%d",&m,&n);
	printf("%ld",MyPow(m,n));
	getch();
	return 0;
}


