#include <stdio.h>
#define SIZE 10

int sum(int ar[], int n);

int main(void)
{
	int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("������ ��ü ������ %ld���Դϴ�.\n", answer);
	printf("marbles�� ũ��� %zd����Ʈ�Դϴ�.\n", sizeof marbles);

	return 0;
}

int sum(int ar[], int n)	// �迭 ũ��� ���ϱ�?
							// int sum(int* ar, int n)�� �����ϰ� �۵�
{
	int i;
	int total = 0;

	for (i = 0; i < n; i++)
		total += ar[i];
	printf("ar�� ũ��� %zd ����Ʈ�Դϴ�.\n", sizeof ar);

	return total;
}