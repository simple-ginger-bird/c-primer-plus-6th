// swap1.c -- �±�ȯ �Լ� �� 1 ����
#include <stdio.h>

void interchange(int u, int v);		// �Լ� ����

int main(void)
{
	int x = 5, y = 10;

	printf("��ȯ �� x = %d, y = %d\n", x, y);
	interchange(x, y);
	printf("��ȯ �� x = %d, y = %d\n", x, y);

	return 0;
}

void interchange(int u, int v)		// �Լ� ����
{
	int temp;

	temp = u;
	u = v;
	v = temp;
}