#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;

int main(void)
{
	double distk, distm;		//�޸� �Ÿ�(���� ų�ι��� ���� ���� ��)
	double rate;				//��ռӵ�(mph; �ð��� ���� ����)
	int min, sec;				//�޸� �ð�(�� ���� �� ����)
	int time;					//�޸� �ð�(�� ���θ�)
	double mtime;				//1������ �޸� �ð�(�� ���θ�)
	int mmin, msec;				//1������ �޸� �ð�(�� ���� �� ����)

	printf("�� ���α׷��� ���ʹ������ ������ �޸��� �����\n");
	printf("1������ �޸� �ð���, ��ռӵ�(mph)�� ��ȯ�Ѵ�.\n");
	printf("�޸� �Ÿ��� ų�ι��� ���� �Է��Ͻÿ�.\n");
	scanf("%lf", &distk);	//double���� ���Ͽ� %lf ���
	printf("�޸� �ð��� �� ���� �� ���� �Է��Ͻÿ�.\n");
	printf("���� �� ������ �Է��Ͻÿ�.\n");
	scanf("%d", &min);
	printf("���� �� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &sec);
	//�޸� �ð��� ������ �� ���� ��ȯ�Ѵ�
	time = S_PER_M * min + sec;
	//ų�ι��� ���� ���� ���� ��ȯ�Ѵ�
	distm = M_PER_K * distk;
	//�ʴ� ���� �� * �ð��� �� = mph
	rate = distm / time * S_PER_H;
	//�ð�/�Ÿ� = ���ϴ� �ð�
	mtime = (double)time / distm;
	mmin = (int)mtime / S_PER_M;		//������ �� ���� ���Ѵ�
	msec = (int)mtime % S_PER_M;		//������ �� ���� ���Ѵ�
	printf("����� %1.2fų�ι���(%1.2f����)�� %d��, %d�ʿ� �޷ȴ�.\n", distk, distm, min, sec);
	printf("�� ���̽��� 1������ %d��, %d�ʿ�"
		"�޸� �Ϳ� �ش��Ѵ�.\n", mmin, msec);
	printf("��ռӵ��� %1.2f mph����.\n", rate);

	return 0;
}