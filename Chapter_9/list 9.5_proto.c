//proto.c -- �Լ� ������Ÿ���� ����Ѵ�
#include <stdio.h>
int imax(int, int);
int main(void)
{
	printf("(%d, %d)���� ū ���� %d\n",
		3, 5, imax(3, 5));	//imax(3)�� ������ �� ��
	printf("(%d, %d)���� ū ���� %d\n",
		3, 5, imax(3.0, 5.0));
	return 0;
}

int imax(int n, int m)
{
	return (n > m ? n : m);
}