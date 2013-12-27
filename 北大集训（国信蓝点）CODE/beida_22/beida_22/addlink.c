#include <stdio.h>

typedef int ElemType;

typedef struct node{
	ElemType data;                      // ˝æ›”Ú
	struct node * next;					//÷∏’Î”Ú
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
