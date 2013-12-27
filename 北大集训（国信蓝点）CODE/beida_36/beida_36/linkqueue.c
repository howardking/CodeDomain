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
	/*初始化一个空队列*/
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
	/*如果队列不为空，返回并删除其队首元素*/
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
	/*主函数*/
	ElemType e;
	LinkQueue q;
	InitQueue(&q);
	printf("请输入一个字符串到栈：\n");
	scanf("%c",&e);
	while ('@'!=e)
	{
		EnQueue(&q,e);
		scanf("%c",&e);
	}
	printf("输入到栈的字符串是：\n");
	while (q.front != q.rear)
	{
		DeQueue(&q,&e);
		printf("%c",e);
	}
	printf("\n");
	getch();
	return 0;
}