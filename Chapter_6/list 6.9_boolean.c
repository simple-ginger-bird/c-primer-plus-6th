#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;
	_Bool input_is_good;

	printf("���� ���� ������ �ϳ� �Է��Ͻÿ�");
	printf("(�������� q): ");
	input_is_good = (scanf("%ld", &num) == 1);
	while (input_is_good)
	{
		sum = sum + num;
		printf("���� ������ �Է��Ͻÿ�(�������� q): ");
		input_is_good = (scanf("%ld", &num) == 1);
	}
	printf("�Էµ� �������� ���� %ld�Դϴ�.\n", sum);

	return 0;
}