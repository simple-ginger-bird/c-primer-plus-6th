#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long num;
	long sum = 0L;
	int status;

	printf("합을 구할 정수를 하나 입력하시오");
	printf("(끝내려면 q): ");
	status = scanf("%ld", &num);
	while (status = 1)	//status = 1은 대입문, 따라서 while(1)을 사용하는 것과 마찬가지
	{
		sum = sum + num;
		printf("다음 정수를 입력하시오(끝내려면 q): ");
		status = scanf("%ld", &num);	//지정된 형식 입력 실패 -> 불일치한 형식의 그 입력을 원래 자리로 되돌려 놓음
	}
	printf("입력된 정수들의 합은 %ld입니다.\n", sum);
	return 0;
}