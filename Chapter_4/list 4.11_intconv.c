//intconv.c -- �߸� ¦������ ������ ��ȯ ������
#include <stdio.h>
#define PAGES 336
#define WORDS 65618

int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;

	printf("short��, unsigned short�� num: %hd %hu\n", num, num);
	printf("short��, unsigned short�� -num: %hd %hu\n", mnum, mnum);
	printf("int��, char�� num: %d %c\n", num, num);
	printf("int��, short��, char�� WORDS: %d %hd %c\n",
		WORDS, WORDS, WORDS);

	return 0;
}