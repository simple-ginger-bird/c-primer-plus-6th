
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#define DENSITY 62.4

int main(void)
{
	float weight, volume;
	int size, letters;
	char name[40];

	printf("����! �̸��� ������?\n");
	scanf("%s", name);
	printf("%s��, �����Դ� �� �Ŀ�峪 ��������?\n", name);
	scanf("%f", &weight);
	size = sizeof name;
	letters = strlen(name);
	volume = weight / DENSITY;
	printf("�ǰŴ�, %s���� ���� %2.2f�Թ���Ʈ�� �����մϴ�.\n",
		name, volume);
	printf("�׸��� �̸��� %d���ڴϱ�,\n",
		letters);
	printf("�����Ϸ��� %d����Ʈ�� �ʿ��մϴ�.\n", size);

	return 0;
}