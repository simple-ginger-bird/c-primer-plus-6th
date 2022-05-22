#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0f;
	int n = 0;
	float min = MAX;
	float max = MIN;

	printf("ù ��° ���ھ �Է��Ͻÿ�(�������� q): ");
	while (scanf("%f", &score) == 1)
	{
		if (score<MIN || score>MAX)
		{
			printf("%0.1f: ��ȿ�� ���� �ƴմϴ�. �ٽ� �Է��Ͻÿ�: ",
				score);
			continue;	//while ���� �׽�Ʈ �������� �����Ѵ�
		}
		printf("%0.1f: ��ȿ�� ���Դϴ�.\n", score);
		min = (score < min) ? score : min;
		max = (score > max) ? score : max;
		total += score;
		n++;
		printf("���� ���ھ �Է��Ͻÿ�(�������� q): ");
	}
	if (n > 0)
	{
		printf("���ھ� %d���� ����� %0.1f�Դϴ�. \n", n, total / n);
		printf("���� = %0.1f, �ְ� = %0.1f\n", min, max);
	}
	else
		printf("��ȿ�� ���� ���� �Է����� �ʾҽ��ϴ�.\n");
	
	return 0;
}