#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];

	printf("�Ƿ����� ������ ��� �ǽô���?\n");
	scanf("%s", name);
	printf("�ݰ����ϴ�, %s��. %s\n", name, PRAISE);
	printf("�̸��� %zd�����ε� �޸� �� %zd���� �����մϴ�.\n",
		strlen(name), sizeof name);
	printf("��ź���� %zd�����ε� ",
		strlen(PRAISE));
	printf("�޸� �� %zd���� �����մϴ�.\n", sizeof PRAISE);

	return 0;
}