#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned width, precision;
	int number = 256;
	double weight = 242.5;

	printf("�ʵ� �ʺ� �Է��Ͻÿ�:\n");
	scanf("%d", &width);
	printf("Number:%-*d:\n", width, number);
	printf("�ʵ� �ʺ�� ���е��� �Բ� �Է��Ͻÿ�:\n");
	scanf("%d %d", &width, &precision);
	printf("Weight = %*.*f\n", width, precision, weight);
	printf("����!\n");

	return 0;
}