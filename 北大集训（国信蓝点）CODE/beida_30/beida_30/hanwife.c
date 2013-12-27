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