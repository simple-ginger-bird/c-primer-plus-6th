#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159
#include <stdio.h>

int main(void)
{
	float area, circum, radius;

	printf("������ �������� �󸶳�?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("������ �⺻ �Ű������� ������ ����:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum,
		area);
	
	return 0;
}