#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SPACE ' '	//���̿� �����̽��� �ѹ�


int main(void)
{
	char ch;

	ch = getchar();	
	//abcd�� �Է��ϸ� �Է� ���ۿ� abcd�� �����Ѵ�, �ٷ� ch�� ����Ǵ� ���� �ƴ�!
	//getchar�� ��ȯ������ �Է� ���� ���� �տ� �ִ� ���� �ϳ��� ch�� ���� -- a

	while (ch != '\n')	//a�� ���� ���ڰ� �ƴ�
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);	//b ���
		ch = getchar();	//�Է� ���� ���� �տ� �ִ� b�� ���� -- b
		printf("\n**%c**\n", ch);	//b ���
	}
	putchar(ch);

	return 0;
}