#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
	int num;

	printf("�� ���α׷��� ����� ����մϴ�.\n");
	printf("0-12 ������ �� ���� �Է��Ͻÿ�(�������� q):\n");

	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("������ ����� ���ǵ��� �ʽ��ϴ�.\n");
		else if (num > 12)
			printf("13 �̸��� �Է��Ͻÿ�.\n");
		else
		{
			printf("����: %d! = %ld\n",
				num, fact(num));
			printf("���: %d! = %ld\n",
				num, rfact(num));
		}
		printf("0-12 ������ �� ���� �Է��Ͻÿ�(�������� q):\n");
	}
	printf("����!\n");

	return 0;
}

long fact(int n)		//������ ����ϴ� �Լ�
{
	long ans;

	for (ans = 1; n > 1; n--)
		ans *= n;

	return ans;
}

long rfact(int n)		//��͸� ����ϴ� �Լ�
{
	long ans;

	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;

	return ans;
}