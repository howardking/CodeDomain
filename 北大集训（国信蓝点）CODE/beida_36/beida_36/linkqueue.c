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