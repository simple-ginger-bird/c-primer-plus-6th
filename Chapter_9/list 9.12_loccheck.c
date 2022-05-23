// loccheck.c -- 변수들이 어디에 저장되는지 확인한다
#include <stdio.h>

void mikado(int);		//함수 선언

int main(void)
{
	int pooh = 2, bah = 5;	// main()의 지역 변수

	printf("main()에 있는 pooh = %d, &pooh = %p\n",
		pooh, &pooh);
	printf("main()에 있는 bah = %d, &bah = %p\n",
		bah, &bah);
	mikado(pooh);

	return 0;
}

void mikado(int bah)		// 함수 정의
{
	int pooh = 10;			// mikado()의 지역 변수

	printf("mikado()에 있는 pooh = %d, &pooh = %p\n",
		pooh, &pooh);
	printf("mikado()에 있는 bah = %d, &bah = %p\n",
		bah, &bah);
}