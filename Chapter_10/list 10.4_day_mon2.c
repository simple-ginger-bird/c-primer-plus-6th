// day_mon2.c -- �����Ϸ��� ���� ������ ī��Ʈ�Ѵ�
#include <stdio.h>

int main(void)
{
	const int days[] = { 31,28,31,30,31,30,31,31,30,31 };	// ���� 10���� �Է��ߴ�
	int index;

	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("%2d��: ��¥ �� %2d\n", index + 1,
			days[index]);

	return 0;
}