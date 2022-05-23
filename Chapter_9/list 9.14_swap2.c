// swap2.c -- swap1.c에서 무엇이 잘못되었는지 조사한다
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

	printf("교환 전 u = %d, v = %d\n", u, v);
	temp = u;
	u = v;
	v = temp;
	printf("교환 후 u = %d, v = %d\n", u, v);
}