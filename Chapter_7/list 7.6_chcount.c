#include <stdio.h>
#define PERIOD '.'

int main(void)
{
	int ch;
	int charcount = 0;

	while ((ch = getchar()) != PERIOD)
	{
		if(ch!='"' && ch!='\'')
			charcount++;
	}
	printf("����ǥ�� ����, ���� %d���� ��� �ֽ��ϴ�.\n", charcount);

	return 0;
}