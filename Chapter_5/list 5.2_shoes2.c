#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ADJUST 7.31

int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;

	printf("�Ź� ������(���ڿ�)    �߱���\n");
	shoe = 3.0;
	while (shoe < 18.5)
	{
		foot = SCALE * shoe + ADJUST;
		printf("%10.1f %15.2f ��ġ\n", shoe, foot);
		shoe = shoe + 1.0;
	}
	printf("�� �Ź��� �߿� �´´ٸ�, �װ��� ��������.\n");

	return 0;
}