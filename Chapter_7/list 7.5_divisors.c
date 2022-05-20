#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	unsigned long num;	//검사를 위해 주어지는 수
	unsigned long div;	//잠정적인 약수
	bool isPrime;		//소수 플래그

	printf("검사할 정수를 하나 입력하시오");
	printf("(끝내려면 q)\n");

	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isPrime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu, %lu: 둘 다 %lu의 약수다.\n", div, num / div, num);
				else    //완전제곱수인 경우 -- ex. 144
					printf("%lu: %lu의 약수다.\n", div, num);
				isPrime = false;	//소수가 아니다

			}
		}
		if (isPrime)
			printf("%lu: 소수다.\n", num);
		printf("검사할 또 다른 정수를 하나 입력하시오");
		printf("(끝내려면 q)\n");
	}
	printf("안녕!\n");

	return 0;
}