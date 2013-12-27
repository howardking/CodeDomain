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