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
	while (status = 1)	//status = 1�� ���Թ�, ���� while(1)�� ����ϴ� �Ͱ� ��������
	{
		sum = sum + num;
		printf("���� ������ �Է��Ͻÿ�(�������� q): ");
		status = scanf("%ld", &num);	//������ ���� �Է� ���� -> ����ġ�� ������ �� �Է��� ���� �ڸ��� �ǵ��� ����
	}
	printf("�Էµ� �������� ���� %ld�Դϴ�.\n", sum);
	return 0;
}