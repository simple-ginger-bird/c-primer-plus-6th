#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("�� �ý����� ǥ���ϴ� ���� �Ѱ�:\n");
	printf("int�� �ִ밪: %d\n", INT_MAX);
	printf("long long�� �ּҰ�: %lld\n", LLONG_MIN);
	printf("�� �ý��ۿ��� 1����Ʈ�� %d��Ʈ�̴�.\n", CHAR_BIT);
	printf("double�� �ִ밪: %e\n", DBL_MAX);
	printf("float�� �ּҰ�: %e\n", FLT_MIN);
	printf("float�� ���е��� �Ҽ��� �Ʒ� %d�ڸ�����\n", FLT_DIG);
	printf("float�� epsilon = %e\n", FLT_EPSILON);

	return 0;
}