#include <stdio.h>
#include <string.h>
#define NAME "GIGATHINK, INC."
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch, int num);

int main(void)
{
	int spaces;

	show_n_char('*', WIDTH);						/* ��ȣ ����� �������ڷ� ��� */
	putchar('\n');
	show_n_char(SPACE, 12);							/* ��ȣ ����� �������ڷ� ��� */
	printf("%s\n", NAME);
	spaces = (WIDTH - strlen(ADDRESS)) / 2;
									/* �� ���� �����̽��� �ʿ����� */
									/* ���α׷��� ����ϰ� �Ѵ� */
	show_n_char(SPACE, spaces);						/* ������ �������ڷ� ��� */
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, (WIDTH - strlen(PLACE)) / 2);
									/* ǥ������ �������ڷ� ����Ѵ�*/
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	putchar('\n');

	return 0;
}

/* show_n_char() �Լ��� ���� */
void show_n_char(char ch, int num)
{
	int count;

	for (count = 1; count <= num; count++)
		putchar(ch);
}