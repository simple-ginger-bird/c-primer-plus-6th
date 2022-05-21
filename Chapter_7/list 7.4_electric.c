#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define RATE1 0.13230	//처음 360kwh까지 적용하는 비율
#define RATE2 0.15040	//그 다음 108kwh
#define RATE3 0.30025	//그 다음 252kwh
#define RATE4 0.34025	//720kwh 초과
#define BREAK1 360.0	//요율 첫 번째 구분점
#define BREAK2 468.0	//두 번째
#define BREAK3 720.0	//세 번째

#define BASE1 (RATE1*BREAK1)								//360kwh에 대한 요금
#define BASE2 (BASE1 + (RATE2 * (BREAK2-BREAK1)))			//468kwh에 대한 요금
#define BASE3 (BASE1 + BASE2 + (RATE3 * (BREAK3-BREAK2)))	//720kwh에 대한 요금

int main(void)
{
	double kwh;
	double bill;

	printf("사용한 전력량을 입력하시오.\n");
	scanf("%lf", &kwh);	//double 형을 위해 %lf 사용
	if (kwh <= BREAK1)
		bill = RATE1 * kwh;
	else if (kwh <= BREAK2)
		bill = BASE1 + (RATE2 * (kwh - BREAK1));
	else if (kwh <= BREAK3)
		bill = BASE2 + (RATE3 * (kwh - BREAK2));
	else
		bill = BASE3 + (RATE4 * (kwh - BREAK3));
	printf("%.1f kwh 전기요금은 $%1.2f입니다.\n", kwh, bill);

	return 0;
}