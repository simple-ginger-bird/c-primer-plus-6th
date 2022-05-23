// bounds.c -- 배열의 범위를 벗어난다
#include <stdio.h>
#define SIZE 4

int main(void)
{
	int value1 = 44;
	int arr[SIZE];
	int value2 = 88;
	int i;

	printf("value1 = %d, value2 = %d\n", value1, value2);
	for (i = -1; i <= SIZE; i++)
		arr[i] = 2 * i + 1;
	for (i = -1; i < 7; i++)
		printf("%2d %d\n", i, arr[i]);
	printf("value1 = %d, value2 = %d\n", value1, value2);
	printf("arr[-1]의 주소: %p\n", &arr[-1]);
	printf("arr[4]의 주소: %p\n", &arr[4]);
	printf("value1의 주소: %p\n", &value1);
	printf("value2의 주소: %p\n", &value2);

	return 0;
	//컴파일 안 됨, 프로그램 먹통
}