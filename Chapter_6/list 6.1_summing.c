#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("���� ���� ������ �ϳ� �Է��Ͻÿ�");
	printf("(�������� q): ");
	status = scanf("%ld", &num);
	while (status == 1)
	{
		sum = sum + num;
		printf("���� ������ �Է��Ͻÿ�(�������� q): ");
		status = scanf("%ld", &num);
	}
	printf("�Էµ� �������� ���� %ld�Դϴ�.\n", sum);

	return 0;
}