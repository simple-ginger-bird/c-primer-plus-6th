#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dogs;

	printf("개를 몇 마리나 키우십니까?\n");
	scanf("%d", &dogs);
	printf("개를 %d마리 키우신다구요!\n", dogs);

	return 0;
}