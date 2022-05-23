//hotel.c -- ȣ�� ���� �Լ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "list 9.9_hotel.h"

int menu(void)
{
	int code, status;

	printf("\n%s%s\n", STARS, STARS);
	printf("���ϴ� ȣ�� ��ȣ�� �Է��Ͻÿ�(�������� 5):\n");
	printf("1) ����ʵ� ����          2) ȣ�� �ø���\n");
	printf("3) óƮ���� �ö���        4) ���己\n");
	printf("5) ����\n");
	printf("%s%s\n", STARS, STARS);
	while ((status = scanf("%d", &code)) != 1 ||
		(code < 1 || code > 5))
	{
		if (status != 1)
			scanf("%*s");	// ������ �ƴ� �Է��� ó���Ѵ�.
		printf("�˼��մϴٸ� 1,2,3,4,5 �߿��� �����Ͻʽÿ�.\n");
	}

	return code;
}

int getnights(void)
{
	int nights;

	printf("�� ���� �ֹ��� ������? ");
	while (scanf("%d", &nights) != 1)
	{
		scanf("%*s");	// ������ �ƴ� �Է��� ó���Ѵ�.
		printf("2�� ����, ������ �ϳ� �Է��Ͻÿ�.\n");
	}

	return nights;
}

void showprice(double rate, int nights)
{
	int n;
	double total = 0.0;
	double factor = 1.0;

	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf("�� ���� ����� $%0.2f�Դϴ�.\n", total);
}