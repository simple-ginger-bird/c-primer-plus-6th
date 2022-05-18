#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159
#include <stdio.h>

int main(void)
{
	float area, circum, radius;

	printf("피자의 반지름이 얼마냐?\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2.0 * PI * radius;
	printf("피자의 기본 매개변수는 다음과 같다:\n");
	printf("circumference = %1.2f, area = %1.2f\n", circum,
		area);
	
	return 0;
}