#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define COVERAGE 350

int main(void)
{
	int sq_feet;
	int cans;

	printf("����Ʈ�� ĥ�� ������ �����Ʈ ������ �Է��Ͻÿ�:\n");
	while (scanf("%d", &sq_feet) == 1)
	{
		cans = sq_feet / COVERAGE;
		cans += (sq_feet % COVERAGE == 0) ? 0 : 1;
		printf("����Ʈ %d ��(%s)�� �����ؾ� �Ѵ�.\n", cans,
			cans == 1 ? "can" : "cans");
		printf("���� ���� �Է��Ͻÿ�(�������� q):\n");
	}
	return 0;
}