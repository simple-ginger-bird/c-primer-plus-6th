#include <stdio.h>
#include <ctype.h>			//isspace()�� ����ϱ� ����
#include <stdbool.h>		//bool, true, false�� ����ϱ� ����
#define STOP '|'

int main(void)
{
	char c;					//���� ���� ����
	char prev;				//�ٷ� ���� ���� ����
	long n_chars = 0L;		//���� ��
	int n_lines = 0;		//���� ��
	int n_words = 0;		//�ܾ� ��
	int p_lines = 0;		//�ҿ��� ���� ��
	bool inword = false;	//c�� ������ �� �ܾ� �ȿ� ���� ������ true

	printf("�м��� ���� �ؽ�Ʈ�� �Է��Ͻÿ�(�������� |):\n");
	prev = '\n';			//���� ������ �ĺ��ϴ� �� ���
	while ((c = getchar())!=STOP)
	{
		n_chars++;			//���ڸ� ī��Ʈ
		if (c == '\n')
			n_lines++;		//������ ī��Ʈ
		if (!isspace(c) && !inword)
		{
			inword = true;	//�� �ܾ ����
			n_words++;		//�ܾ ī��Ʈ
		}
		if (isspace(c) && inword)
			inword = false;	//�ܾ��� ���� ����
		prev = c;			//������ ���� ����
	}
	if (prev != '\n')
		p_lines = 1;

	printf("���� �� = %ld, �ܾ� �� = %d, ���� �� = %d, ",
		n_chars, n_words, n_lines);
	printf("�ҿ��� ���� �� = %d\n", p_lines);

	return 0;
}