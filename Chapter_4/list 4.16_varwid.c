#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("필드 너비를 입력하시오:\n");
	scanf("%d", &width);
	printf("Number:%-*d:\n", width, number);
	printf("필드 너비와 정밀도를 함께 입력하시오:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("종료!\n");

	return 0;
}