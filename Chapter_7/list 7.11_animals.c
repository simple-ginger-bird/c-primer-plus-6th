#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char ch;

	printf("���ĺ� ���ڸ� �Է��Ͻÿ�. ");
	printf("�׷��� ����\n�� ���ڷ� �����ϴ� ���� �̸��� �ϳ� ��ڽ��ϴ�.\n");
	printf("���ڸ� �ϳ� �Է��Ͻÿ�(�������� #):\n");

	while ((ch = getchar()) != '#')
	{
		if ('\n' == ch)
			continue;
		if (islower(ch))		//�ҹ��ڸ� ���
			switch (ch)
			{
			case 'a':
				printf("argali, �ƽþ��� �߻� ��\n");
				break;
			case'b':
				printf("babirusa, ������ �ݵ��� �߻� ����\n");
				break;
			case'c':
				printf("coati, �̱� �ʱ���\n");
				break;
			case'd':
				printf("desman, ���� ���, �δ��� ����� ����\n");
				break;
			case'e':
				printf("echidna, �ٴõδ���\n");
				break;
			case'f':
				printf("fisher, ������ �� ���\n");
				break;
			default:
				printf("����, �ʹ� ��ƴ�!\n");
									/* switch���� �� */
			}
		else
			printf("���� �ҹ��ڸ� �˾Ƶ�´�.\n");
		while (getchar() != '\n')
			continue;				/* �Է� ������ �������� �ǳʶڴ� */
		printf("�ٸ� ���ڸ� �ϳ� �Է��Ͻÿ�(�������� #):\n");
	}								/* whlie ������ �� */
	printf("�ȳ�!\n");
}