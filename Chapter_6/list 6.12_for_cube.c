#include <stdio.h>

int main(void)
{
	int num;

	printf("    n  nÀÇ ¼¼Á¦°ö\n");
	for (num = 1; num <= 6; num++)
		printf("%5d %5d\n", num, num * num * num);

	return 0;
}