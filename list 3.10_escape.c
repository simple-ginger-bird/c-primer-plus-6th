#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float salary;

	printf("\a���ϴ� ���� �׼��� �Է��Ͻÿ�:");
	printf("$_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t�� $%.2f�̸� �������� $%.2f�Դϴ�.", salary,
		salary * 12.0);
	printf("\r���!\n");

	return 0;
}