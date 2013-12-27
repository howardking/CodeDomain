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
