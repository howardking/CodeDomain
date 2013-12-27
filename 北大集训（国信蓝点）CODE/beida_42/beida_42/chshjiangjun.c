#include <stdio.h>

void Face(void)
{
	printf("*********************************************\n\n");
	printf("**********你战不胜我，不信你试试*************\n\n");
	printf("*********************************************\n\n");
	printf("游戏开始:：n\n");

}

void Winner (void)
{
	int people;
	int computer;
	int spare = 20;
	Face();
	while (1)
	{
		printf("现在还有 %d 根火柴\n",spare+1);
		printf("你：");
		scanf("%d",&people);
		if(people>4 || people<1 || people>spare)
		{
			printf("你输入的火柴数有问题，请重新输入!\n");
			continue;
		}
		if (spare == people)
		{
			printf("恭喜，你赢了！！\n");
			break;
		}
		computer = 5 - people;
		spare = spare - 5;
		printf("电脑：%d\n",computer);
		if (0== spare)
		{
			printf("还有%d根火柴，你输了，电脑赢了！\n",spare+1);
			break;
		}

	}

	
}

int main(void)
{
	/*有21根火柴，人先取，每次只能取1-4根火柴，不可多取或少取，电脑为长胜将军*/
	Winner();
	getch();
	return 0;
}