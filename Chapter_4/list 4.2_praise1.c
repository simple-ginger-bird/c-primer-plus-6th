#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("�Ƿ����� ������ ��� �ǽô���?\n");
	scanf("%s", name);
	printf("�ݰ����ϴ�, %s��. %s\n", name, PRAISE);
	
	return 0;
}