#include <stdio.h>

int main(void)
{
	/*������һ��4λ��abcd��������
	����������abcd = ��ab+cd��^2��
	���У�ab��cdΪ������λ������
	���4λ��abcd*/
	int i;
	int m;
	int n;
	for (i=1010; i<9999; i++)
	{
		m = i/100;
		n = i%100;
		if ((m+n)*(m+n) == i)
		{
			printf("%d ",i);
		}
	}
	getch();
	return 0;
}