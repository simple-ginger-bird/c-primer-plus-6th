// swap3.c -- �����͸� ����Ͽ� �±�ȯ�� �ùٸ��� �����Ѵ�
#include <stdio.h>
void interchange(int* u, int* v);

int main(void)
{
	int x = 5, y = 10;

	printf("��ȯ �� x = %d, y = %d\n", x, y);
	interchange(&x, &y);			//�Լ��� �ּҸ� �����Ѵ�
	printf("��ȯ �� x = %d, y = %d\n", x, y);

	return 0;
}

void interchange(int* u, int* v)
{
	int temp;

	temp = *u;						// temp�� u�� ����Ű�� ���� ��´�
	*u = *v;
	*v = temp;
}