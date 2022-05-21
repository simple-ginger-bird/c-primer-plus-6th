#include <stdio.h>
#include <ctype.h>
//isalpha() 사용하기 위해
//isplpha() -- 알파벳이라면 참을 반환함

int main(void)
{
	char ch;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);

	return 0;
}