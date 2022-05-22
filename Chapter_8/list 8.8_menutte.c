//menuette.c -- �޴� ��ũ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
	int choice;
	void count(void);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			printf("�� �� �缭 ��� �� �Ľÿ�.\n");
			break;
		case 'b':
			putchar('\a');		//ANSI
			break;
		case 'c':
			count();
			break;
		default:
			printf("���α׷� ����!\n");
			break;
		}
	}
	printf("�ȳ�!\n");

	return 0;
}

void count(void)
{
	int n, i;

	printf("����� ī��Ʈ�ұ��? ���� �ϳ��� �Է��Ͻÿ�:\n");
	n = get_int();
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}

char get_choice(void)
{
	int ch;

	printf("a, b, c, q �߿��� �ϳ��� �����Ͻÿ�:\n");
	printf("a. ����          b. ���\n");
	printf("c. ī��Ʈ        q. ����\n");
	ch = get_first();
	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf("a, b, c, q �߿��� �ϳ��� �����ؾ� �մϴ�.\n");
		ch = get_first();
	}
	return ch;
}

char get_first(void)
{
	int ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}

int get_int(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(": ������ �ƴմϴ�.\n25, -178, 3�� ���� ");
		printf("�������� �Է��Ͻÿ�: ");
	}

	return input;
}