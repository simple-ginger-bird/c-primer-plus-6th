#include <stdio.h>
int main(void)
{
	printf("int���� ũ�� : %zd����Ʈ\n", sizeof(int));
	printf("char���� ũ�� : %zd����Ʈ\n", sizeof(char));
	printf("long���� ũ�� : %zd����Ʈ\n", sizeof(long));
	printf("long long���� ũ�� : %zd����Ʈ\n", sizeof(long long));
	printf("double���� ũ�� : %zd����Ʈ\n", sizeof(double));
	printf("long double���� ũ�� : "
		" % zd����Ʈ\n", sizeof(long double));

	return 0;
}