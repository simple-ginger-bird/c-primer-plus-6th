#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	unsigned long num;	//�˻縦 ���� �־����� ��
	unsigned long div;	//�������� ���
	bool isPrime;		//�Ҽ� �÷���

	printf("�˻��� ������ �ϳ� �Է��Ͻÿ�");
	printf("(�������� q)\n");

	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu, %lu: �� �� %lu�� �����.\n", div, num / div, num);
				else    //������������ ��� -- ex. 144
					printf("%lu: %lu�� �����.\n", div, num);
				isPrime = false;	//�Ҽ��� �ƴϴ�

			}
		}
		if (isPrime)
			printf("%lu: �Ҽ���.\n", num);
		printf("�˻��� �� �ٸ� ������ �ϳ� �Է��Ͻÿ�");
		printf("(�������� q)\n");
	}
	printf("�ȳ�!\n");

	return 0;
}