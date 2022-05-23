#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("구슬의 전체 개수는 %ld개입니다.\n", answer);
	printf("marbles의 크기는 %zd바이트입니다.\n", sizeof marbles);

	return 0;
}

int sum(int ar[], int n)	// 배열 크기는 얼마일까?
							// int sum(int* ar, int n)도 동일하게 작동
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];
	printf("ar의 크기는 %zd 바이트입니다.\n", sizeof ar);

	return total;
}