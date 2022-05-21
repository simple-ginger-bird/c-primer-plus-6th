#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RATE1 0.13230	//ó�� 360kwh���� �����ϴ� ����
#define RATE2 0.15040	//�� ���� 108kwh
#define RATE3 0.30025	//�� ���� 252kwh
#define RATE4 0.34025	//720kwh �ʰ�
#define BREAK1 360.0	//���� ù ��° ������
#define BREAK2 468.0	//�� ��°
#define BREAK3 720.0	//�� ��°

#define BASE1 (RATE1*BREAK1)								//360kwh�� ���� ���
#define BASE2 (BASE1 + (RATE2 * (BREAK2-BREAK1)))			//468kwh�� ���� ���
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3-BREAK2)))	//720kwh�� ���� ���

int main(void)
{
	double kwh;
	double bill;

	printf("����� ���·��� �Է��Ͻÿ�.\n");
	scanf("%lf", &kwh);	//double ���� ���� %lf ���
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("%.1f kwh �������� $%1.2f�Դϴ�.\n", kwh, bill);

	return 0;
}