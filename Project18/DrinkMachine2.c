#include "stdio.h"

typedef struct Drink
{
	char name[20];		// 음료수 이름.
	int price;			// 음료수 가격.
}Drink;


/*
	Step2 - 구조체
	  
	데이터를 구조체 배열로 가지고 있는다. 해당 배열의 데이터를 참조해 값을 연산, 출력하면
	데이터 값만 바꾸는 것으로 연산, 출력이 모두 바뀐다.
*/



int main2()
{
	Drink drinks[] = { 
		{ "커피", 10000 }, { "옥수수차", 1000 }, { "핫식스", 900 },
		{ "트레비", 1000 }, { "콜라", 1500 }, { "밀키스", 2000 } 
	};

	int money = 10000;
	
	/*
	printf("금액을 투입하세요 : ");
	scanf_s("%d", &money);
	rewind(stdin);
	*/

	printf("자판기        남은 금액 : %d원\n", money);
	printf("----------------------------------------------------\n");
	printf("1.%s(%d원)  2.%s(%d원)  3.%s(%d)\n", drinks[0].name, drinks[0].price, drinks[1].name, drinks[1].price, drinks[2].name, drinks[2].price);
	printf("4.%s(%d원)  5.%s(%d원)  6.%s(%d)\n", drinks[3].name, drinks[3].price, drinks[4].name, drinks[4].price, drinks[5].name, drinks[5].price);
	printf("----------------------------------------------------\n");
	printf("상품 선택 : ");

	int select = 0;
	scanf_s("%d", &select);
	rewind(stdin);

	switch (select)
	{
	case 1:
		if (money < drinks[0].price)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("%s가 나왔습니다.\n", drinks[0].name);
			money -= drinks[0].price;
		}
		break;

	case 2:
		if (money < drinks[1].price)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("%s가 나왔습니다.\n", drinks[1].name);
			money -= drinks[1].price;
		}
		break;

	case 3:
		if (money < drinks[2].price)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("%s가 나왔습니다.\n", drinks[2].name);
			money -= drinks[2].price;
		}
		break;

	case 4:
		if (money < drinks[3].price)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("%s가 나왔습니다.\n", drinks[3].name);
			money -= drinks[3].price;
		}
		break;

	case 5:
		if (money < drinks[4].price)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("%s가 나왔습니다.\n", drinks[4].name);
			money -= drinks[4].price;
		}
		break;

	case 6:
		if (money < drinks[5].price)
			printf("금액이 부족합니다.\n");
		else
		{
			printf("%s가 나왔습니다.\n", drinks[5].name);
			money -= drinks[5].price;
		}
		break;
	}

	printf("남은 금액 : %d원\n", money);


}