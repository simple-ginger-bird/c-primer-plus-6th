#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>				//exit()�� ����ϱ� ����

int main(void)
{
	int ch;
	FILE* fp;
	char fname[50];				//���� �̸��� �����ϱ� ����

	printf("���� �̸��� �Է��Ͻÿ�: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("������ ���� �� �����ߴ�. �ȳ�!\n");
		exit(1);
	}

	//getc(fp)�� ���� �ִ� ���Ͽ��� ���� �ϳ��� ���Ѵ�
	while((ch = getc(fp))!=EOF)
		putchar(ch);
	fclose(fp);

	return 0;
}