#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	float weight;
	float value;

	printf("����� �����Ը� �÷�Ƽ�� ��ġ�� ����ϸ� �󸶳� �������?\n");
	printf("��� �ѹ� ����� ���ô�.\n");
	printf("�����Ը� �Ŀ�� ������ �Է��Ͻÿ�: ");

	scanf("%f", &weight);
	
	value = 1700.0 * weight * 14.5833;
	printf("����� �����Ը� �÷�Ƽ�� ��ġ�� ����ϸ� $%.2f�Դϴ�.\n", value);
	printf("����� ������ �� ���� ��ġ�� �����ϴ�. �÷�Ƽ�� ������ ��������,\n");
	printf("��ġ�� �����ϱ� ���� �Ļ緮�� �÷��� �մϴ�.\n");

	return 0;
}