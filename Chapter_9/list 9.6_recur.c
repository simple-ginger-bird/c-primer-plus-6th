//recur.c -- 재귀를 설명한다
#include <stdio.h>

void up_and_down(int);

int main(void)
{
	up_and_down(1);
	return 0;
}

void up_and_down(int n)
{
	printf("Level %d: n의 메모리 주소 %p\n", n, &n);	//출력문 #1
	if (n < 4)
		up_and_down(n + 1);
	printf("LEVEL %d: n의 메모리 주소 %p\n", n, &n);	//출력문 #2
}