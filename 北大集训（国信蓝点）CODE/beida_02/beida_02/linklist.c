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
	初始化一个顺序链表
	参数L：Sqlist类型的指针*/
	L->elem = (int *)malloc(MaxSize*sizeof(ElemType));
	if(!L->elem)
		exit(0);
	L->length = 0;
	L->listSize = MaxSize;
}

void InsertElem(Sqlist *L, int i, ElemType item)
{
	/*向表中插入数据
	参数L：Sqlist类型的指针
	参数i:插入元素的位置
	参数item：插入的元素*/
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
	/*从链表中删除元素
	参数L：Sqlist类型的指针
	参数i：删除元素的位置	
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
