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