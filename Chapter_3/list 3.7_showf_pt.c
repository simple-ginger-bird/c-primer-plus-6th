#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f�� %e�� ǥ���� �� �ִ�.\n", aboat, aboat);
	printf("�װ��� 16���� 2�� �ŵ��������� %a�̴�.\n", aboat);
	printf("%f�� %e�� ǥ���� �� �ִ�.\n", abet, abet);
	printf("%Lf�� %Le�� ǥ���� �� �ִ�.\n", dip, dip);

	return 0;
}