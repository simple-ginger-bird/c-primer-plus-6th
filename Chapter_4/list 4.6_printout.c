#include <stdio.h>
#define PI 3.141593

int main(void)
{
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("%d���� �����ڰ� %f���� �������̸� �Ծ���.\n", number,
		pies);
	printf("The value of pi is %f.\n", PI);
	printf("�� ���ö�! �״�� ���� �����ϱ⿡ �����Ͽ���,\n");
	printf("%c%d\n", '$', 2 * cost);

	return 0;
}