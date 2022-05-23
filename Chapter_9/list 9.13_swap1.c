// swap1.c -- 맞교환 함수 제 1 버전
#include <stdio.h>

void interchange(int u, int v);		// 함수 선언

int main(void)
{
	int x = 5, y = 10;

	printf("교환 전 x = %d, y = %d\n", x, y);
	interchange(x, y);
	printf("교환 후 x = %d, y = %d\n", x, y);

	return 0;
}

void interchange(int u, int v)		// 함수 정의
{
	int temp;

	temp = u;
	u = v;
	v = temp;
}