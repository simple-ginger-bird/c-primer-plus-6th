// hotel.h -- hotel.c�� ���� ��ȣ ����� ����
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "***********************************"

// ����ڰ� ������ �� �ִ� �ɼǵ��� �޴��� ���� �ش�
int menu(void);

// ���ϴ� ���� �ϼ��� �����Ѵ�
int getnights(void);

// ���� ��ݰ� ���� �ϼ��κ��� �� ���� ����� ����Ͽ�
// �� ����� ȭ�鿡 ǥ���Ѵ�
void showprice(double rate, int nights);