#include "stdio.h"

int main1()
{
	int money = 0;

	printf("금액을 투입하세요 : ");
	scanf_s("%d", &money);
	rewind(stdin);

	printf("자판기        남은 금액 : %d원\n", money);
	printf("----------------------------------------------------\n");
	printf("1.커피(500원)     2.옥수수차(1000원) 3.핫식스(900원)\n");
	printf("4.트레비(1000원) 5.비타 파워(900원) 6.밀키스(1500원)\n");
	printf("----------------------------------------------------\n");
	printf("상품 선택 : ");

	int select = 0;
	scanf_s("%d", &select);
	rewind(stdin);

	switch (select)
	{
	case 1:
		if (money < 500)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("커피가 나왔습니다.\n");
			money -= 500;
		}
		break;

	case 2:
		if (money < 1000)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("옥수수차가 나왔습니다.\n");
			money -= 1000;
		}
		break;

	case 3:
		if (money < 900)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("핫식스가 나왔습니다.\n");
			money -= 900;
		}
		break;

	case 4:
		if (money < 1000)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("트레비가 나왔습니다.\n");
			money -= 1000;
		}
		break;

	case 5:
		if (money < 900)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("비타 파워가 나왔습니다.\n");
			money -= 900;
		}
		break;

	case 6:
		if (money < 1500)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("밀키스가 나왔습니다.\n");
			money -= 1500;
		}
		break;
	}

	printf("남은 금액 : %d원\n", money);


}