#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	int32_t me32;

	me32 = 45933945;
	printf("����, int32_t�� int������ �����Ѵ�: ");
	printf("me32 = %d\n", me32);
	printf("����, ��� ������ ���� ����.\n");
	printf("�� ��ſ�, inttypes.h�� �ִ� \"macro\"�� ����Ѵ�: ");
	printf("me32 = %" PRId32 "\n", me32);
	
	return 0;
}