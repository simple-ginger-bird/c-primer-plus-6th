// loccheck.c -- �������� ��� ����Ǵ��� Ȯ���Ѵ�
#include <stdio.h>

void mikado(int);		//�Լ� ����

int main(void)
{
	int pooh = 2, bah = 5;	// main()�� ���� ����

	printf("main()�� �ִ� pooh = %d, &pooh = %p\n",
		pooh, &pooh);
	printf("main()�� �ִ� bah = %d, &bah = %p\n",
		bah, &bah);
	mikado(pooh);

	return 0;
}

void mikado(int bah)		// �Լ� ����
{
	int pooh = 10;			// mikado()�� ���� ����

	printf("mikado()�� �ִ� pooh = %d, &pooh = %p\n",
		pooh, &pooh);
	printf("mikado()�� �ִ� bah = %d, &bah = %p\n",
		bah, &bah);
}