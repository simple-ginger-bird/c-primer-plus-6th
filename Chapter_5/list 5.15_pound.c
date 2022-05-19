#include <stdio.h>
void pound(int n);	//ANSI 프로토타입

int main(void)
{
	int times = 5;
	char ch = '!';	//ASCII 코드값이 33
	float f = 6.0f;

	pound(times);
	pound(ch);
	pound(f);

	return 0;
}

void pound(int n)
{
	while (n-- > 0)
		printf("#");
	printf("\n");
}