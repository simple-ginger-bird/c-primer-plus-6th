#include <stdio.h>
#include <ctype.h>			//isspace()를 사용하기 위해
#include <stdbool.h>		//bool, true, false를 사용하기 위해
#define STOP '|'

int main(void)
{
	char c;					//현재 읽은 문자
	char prev;				//바로 전에 읽은 문자
	long n_chars = 0L;		//문자 수
	int n_lines = 0;		//라인 수
	int n_words = 0;		//단어 수
	int p_lines = 0;		//불완전 라인 수
	bool inword = false;	//c가 여전히 한 단어 안에 속해 있으면 true

	printf("분석할 영문 텍스트를 입력하시오(끝내려면 |):\n");
	prev = '\n';			//완전 라인을 식별하는 데 사용
	while ((c = getchar())!=STOP)
	{
		n_chars++;			//문자를 카운트
		if (c == '\n')
			n_lines++;		//라인을 카운트
		if (!isspace(c) && !inword)
		{
			inword = true;	//새 단어를 시작
			n_words++;		//단어를 카운트
		}
		if (isspace(c) && inword)
			inword = false;	//단어의 끝에 도달
		prev = c;			//문자의 값을 보관
	}
	if (prev != '\n')
		p_lines = 1;

	printf("문자 수 = %ld, 단어 수 = %d, 라인 수 = %d, ",
		n_chars, n_words, n_lines);
	printf("불완전 라인 수 = %d\n", p_lines);

	return 0;
}