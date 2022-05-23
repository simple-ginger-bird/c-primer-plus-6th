// sum_arr2.c -- �迭�� ���ҵ��� ���� ���Ѵ�
#include <stdio.h>
#define SIZE 10

int sump(int* start, int* end);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sump(marbles, marbles + SIZE);
	printf("������ ��ü ������ %ld���Դϴ�.\n", answer);

	return 0;
}

// ������ ����� ���
int sump(int* start, int* end)
{
	int total = 0;

	while (start < end)
	{
		total += *start;	// total�� ���� ���Ѵ�
		start++;			// �����͸� �������� ���� ���Ҹ� ����Ų��
	}

	return total;
}