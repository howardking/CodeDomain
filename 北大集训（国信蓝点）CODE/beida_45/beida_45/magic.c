#include <stdio.h>

int Match(int i, int j, int k, int l ,int m, int n, int o, int p, int q)
{
	/*判断是否符合1-9各不相同的9个数*/
	if (i!=j && i!=k && i!=l && i!=m && i!=n && i!=o && i!=p && i!=q)
	{
		if (j!=k && j!=l && j!=m && j!=n && j!=o && j!=p && j!=q)
		{
			if (k!=l && k!=m && k!=n && k!=o && k!=p && k!=q)
			{
				if (l!=m && l!=n && l!=o && l!=p && l!=q)
				{
					if (m!=n && m!=o && m!=p && m!=q)
					{
						if (n!=o && n!=p && n!=q)
						{
							if (o!=p && o!=q)
							{
								if (p!=q)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int Justice(int i, int j, int k, int l, int m, int n, int o, int p, int q)
{
	//判断是否符合魔法矩阵
	if (i+j+k == l+m+n && i+j+k == o+p+q && i+l+o == j+m+p && i+l+o == k+n+q && i+m+q == k+m+o)
	{
		return 1;
	}
	return 0;
}

void GetMatrix(void)
{
	/*产生矩阵*/
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;
	int o;
	int p;
	int q;
	for (i=1; i<10; i++)
	{
		for (j=1; j<10; j++)
		{
			for (k=1; k<10; k++)
			{
				for (l=1; l<10; l++)
				{
					for (m=1; m<10; m++)
					{
						for (n=1; n<10; n++)
						{
							for (o=1; o<10; o++)
							{
								for (p=1; p<10; p++)
								{
									for (q=1; q<10; q++)
									{
										if (Match(i,j,k,l,m,n,o,p,q))
										{
											if (Justice(i,j,k,l,m,n,o,p,q))
											{
												printf("%3d%3d%3d\n",i,j,k);
												printf("%3d%3d%3d\n",l,m,n);
												printf("%3d%3d%3d\n\n\n",o,p,q);
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

int main(void)
{
	/*
	魔法矩阵（数独算法）
	*/
	GetMatrix();
	getch();
	return 0;
}