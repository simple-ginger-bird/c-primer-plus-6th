//misuse.c -- ����Ȯ�ϰ� �Լ��� ����Ѵ�
#include <stdio.h>

int imax();		//ANSI C ���� ������ �Լ� ����

int main(void)
{
	printf("(%d, %d)���� ū ���� %d\n",
		3, 5, imax(3));
	printf("(%d, %d)���� ū ���� %d\n",
		3, 5, imax(3.0, 5.0));
	return 0;
}

int imax(n, m)
int n, m;
{
	return (n > m ? n : m);
}