/* two_func.c -- �ϳ��� ���Ͽ��� �� ���� �Լ��� ����ϴ� ���α׷� */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void butler(void);	/*ANSI/ISO C �Լ� ������Ÿ��*/
int main(void)
{
	printf("butler �Լ� �ۿ� �ִ���?\n");
	butler();
	printf("�׷�. �� �� �� ������, DVD�� �������ʶ�.\n");

	return 0;
}

void butler(void)	/* �Լ� ������ ���� */
{
	printf("�θ��̽��ϱ�? ���δ�!\n");
}