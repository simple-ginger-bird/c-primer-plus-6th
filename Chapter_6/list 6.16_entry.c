#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	const int secret_code = 13;
	int code_entered;
	printf("13���� �ݿ��� ������ ġ�� ��ȣȸ�� ��������,\n");
	printf("��� �ڵ� ��ȣ�� �Է��Ͻÿ�: ");
	scanf("%d", &code_entered);
	while (code_entered != secret_code)
	{
		printf("13���� �ݿ��� ������ ġ�� ��ȣȸ�� ��������,\n");
		printf("��� �ڵ� ��ȣ�� �Է��Ͻÿ�: ");
		scanf("%d", &code_entered);
	}
	printf("�����մϴ�! ġ��Ǿ����ϴ�!\n");

	return 0;
}