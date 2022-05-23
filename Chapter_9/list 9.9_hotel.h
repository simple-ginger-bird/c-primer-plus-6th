// hotel.h -- hotel.c를 위한 기호 상수와 선언
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "***********************************"

// 사용자가 선택할 수 있는 옵션들을 메뉴로 보여 준다
int menu(void);

// 원하는 숙박 일수를 리턴한다
int getnights(void);

// 객실 요금과 숙박 일수로부터 총 투숙 요금을 계산하여
// 그 결과를 화면에 표시한다
void showprice(double rate, int nights);