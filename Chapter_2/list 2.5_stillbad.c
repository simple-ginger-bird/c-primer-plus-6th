/* stillbad.c -- 신택스 에러들을 수정한 프로그램 */
#include <stdio.h>
int main(void)
{
	int n, n2, n3;

	/* 이 프로그램은 하나의 시맨틱 에러를 가지고 있다 */
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	printf("n = %d, n의 제곱 = %d, n의 세제곱 = %d\n", n, n2, n3);

	return 0;
}