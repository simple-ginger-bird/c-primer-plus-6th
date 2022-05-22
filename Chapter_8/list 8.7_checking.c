//checking.c -- �Է��� ��ȿ���� �˻��Ѵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//�Է��� �������� �˻��Ѵ�
long get_long(void);
//���� �Ѱ谡 ��ȿ���� �˻��Ѵ�
bool bad_limits(long begin, long end,
	long low, long high);
//a���� b������ ������ �ִ�
//�������� ������ ���� ����Ѵ�
double sum_squares(long a, long b);

int main(void)
{
	const long MIN = -10000000L;	//������ ����
	const long MAX = +10000000L;	//������ ����
	long start;						//������ ����
	long stop;						//������ ����
	double answer;

	printf("�� ���α׷��� � ������ �ִ� �������� ������ ���� ����Ѵ�.\n"
		"������ ���۰��� -10000000���� ���� �� ����.\n"
		"������ �������� +10000000���� Ŭ �� ����.\n"
		"���۰��� �������� �Է��Ͻÿ�.\n"
		"(�������� �� ���� ��� 0���� �Է�):\n������ ���۰�:");
	
	start = get_long();
	printf("������ ������: ");
	stop = get_long();
	while (start != 0 || stop != 0)
	{
		if (bad_limits(start, stop, MIN, MAX))
			printf("������ �ٽ� �����Ͻÿ�.\n");
		else
		{
			answer = sum_squares(start, stop);
			printf("�������� ������ ��");
			printf("%ld���� %ld������ ������ �ִ� �������� ������ ���� %g�Դϴ�.\n",
				start, stop, answer);
		}
		printf("���۰��� �������� �Է��Ͻÿ�.\n"
			"(�������� �� ���� ��� 0���� �Է�):\n");
		printf("������ ���۰�: ");
		start = get_long();
		printf("������ ������: ");
		stop = get_long();
	}
	printf("����!\n");

	return 0;
}

long get_long(void)
{
	long input;
	char ch;

	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);	//�߸��� �Է��� ����Ѵ�
		printf(": ������ �ƴմϴ�.\n25, -178, 3�� ���� ");
		printf("�������� �Է��Ͻÿ�: ");
	}

	return input;
}

double sum_squares(long a, long b)
{
	double total = 0;
	long i;

	for (i = a; i <= b; i++)
		total += (double)i * (double)i;

	return total;
}

bool bad_limits(long begin, long end, long low, long high)
{
	bool not_good = false;

	if (begin > end)
	{
		printf("���۰��� ���������� ũ�� �� �˴ϴ�.\n");
		not_good = true;
	}
	if (begin < low || end < low)
	{
		printf("���۰��� �������� %d���� ũ�ų� ���ƾ� �մϴ�.\n", low);
		not_good = true;
	}
	if (begin > high || end > high)
	{
		printf("���۰��� �������� %ld���� �۰ų� ���ƾ� �մϴ�.\n", high);
		not_good = true;
	}
	return not_good;
}