#include <stdio.h>
#include <time.h>
#include <dos.h>

int main(void)
{
	/*����������е�ʱ��*/
	clock_t start, end;
	start = clock;
	sleep(1);
	end = clock();
	printf("The time was :%f\n",(end-start)/CLK_TCK);

	return 0;
}