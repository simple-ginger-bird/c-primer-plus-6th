#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SPACE ' '	//사이에 스페이스바 한번


int main(void)
{
	char ch;

	ch = getchar();	
	//abcd를 입력하면 입력 버퍼에 abcd를 저장한다, 바로 ch에 저장되는 것이 아님!
	//getchar의 반환값으로 입력 버퍼 가장 앞에 있는 문자 하나를 ch에 저장 -- a

	while (ch != '\n')	//a는 개행 문자가 아님
	{
		if (ch == SPACE)
			putchar(ch);
		else
			putchar(ch + 1);	//b 출력
		ch = getchar();	//입력 버퍼 가장 앞에 있는 b를 저장 -- b
		printf("\n**%c**\n", ch);	//b 출력
	}
	putchar(ch);

	return 0;
}