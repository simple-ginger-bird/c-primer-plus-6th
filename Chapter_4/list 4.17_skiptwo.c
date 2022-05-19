#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;

	printf("3개의 정수를 입력하시오:\n");
	scanf("%*d %*d %d", & n);
	printf("마지막으로 입력한 정수는 %d이다.\n", n);

	return 0;
}