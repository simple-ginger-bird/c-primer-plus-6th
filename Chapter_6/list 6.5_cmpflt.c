#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int main(void)
{
	const double ANSWER = 3.14159;
	double response;

	printf("�������� ���� ����?\n");
	scanf("%lf", &response);
	while (fabs(response - ANSWER) > 0.0001)
	{
		printf("�ٽ� ���� ��!\n");
		scanf("%lf", &response);
	}
	printf("����� ������!\n");
	return 0;
}