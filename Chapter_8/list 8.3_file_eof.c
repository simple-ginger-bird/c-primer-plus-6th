#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>				//exit()를 사용하기 위해

int main(void)
{
	int ch;
	FILE* fp;
	char fname[50];				//파일 이름을 보관하기 위해

	printf("파일 이름을 입력하시오: ");
	scanf("%s", fname);
	fp = fopen(fname, "r");
	if (fp == NULL)
	{
		printf("파일을 여는 데 실패했다. 안녕!\n");
		exit(1);
	}

	//getc(fp)는 열려 있는 파일에서 문자 하나를 취한다
	while((ch = getc(fp))!=EOF)
		putchar(ch);
	fclose(fp);

	return 0;
}