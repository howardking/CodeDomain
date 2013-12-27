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
	/*内存中开辟一段连续的空间作为栈空间，首地址赋给s->base*/
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
		/*栈满，追加空间*/
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
	利用栈的数据结构，将二进制数转换成十进制数
	*/
	ElemType c;
	sqStack s;
	int len;
	int i;
	int sum = 0;
	printf("请输入一个二进制数：\n");

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

	printf("十进制数是：%d",sum);
	getche();

	return 0;
}