#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int t_ct;	//�� �� ī��Ʈ
	double time, power_of_2;
	int limit;

	printf("���ϴ� ��ŭ�� �� ���� �Է��Ͻÿ�: ");
	scanf("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit;
		t_ct++, power_of_2 *= 2.0)
	{
		time += 1.0 / power_of_2;
		printf("�ð� = %f (�� �� %d)\n", time, t_ct);
	}
	return 0;
}