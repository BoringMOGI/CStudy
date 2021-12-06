#include "stdio.h"
#include "string.h"
#include "windows.h"		// 헤더파일.

typedef struct Drink
{
	char name[20];		// 음료수 이름.
	int price;			// 음료수 가격.
	int liter;			// 음료수 용량.
}Drink;


void OpenDrinkMachine()
{
	Drink drinks[] = {
		{ "커피", 10000 , 100}, { "옥수수차", 1000, 200 }, { "핫식스", 900 , 300},
		{ "트레비", 1000, 400 }, { "콜라", 1500, 500 }, { "밀키스", 2000, 600 }
	};

	int money = 10000;
	
	/*
	printf("금액을 투입하세요 : ");
	scanf_s("%d", &money);
	rewind(stdin);
	*/

	while (1)
	{
		system("cls");
		printf("자판기        남은 금액 : %d원\n", money);
		printf("----------------------------------------------------\n");

		// 만약 Drink 자료형의 크기가 5라고 가정.
		// drinks배열이 6개라면 크기는 5*6 = 30byte.
		// Drink자료형의 크기 = 5byte.
		// drinks배열의 크기(30byte) / Drink자료형의 크기(5byte) => 6개.
		int drinkLength = sizeof(drinks) / sizeof(Drink);
		for (int i = 0; i < drinkLength; i++)
		{
			// 3열씩 음료수를 배열해야하니 3의 배수 번째가 되면 한줄 띄우고 출력한다.
			if ((i != 0) && i % 3 == 0)
				printf("\n");

			printf("%d.%s %dml (%d원) ", i + 1, drinks[i].name, drinks[i].liter, drinks[i].price);
		}

		printf("\n");
		printf("----------------------------------------------------\n");
		printf("상품 선택 : ");

		int select = 0;
		scanf_s("%d", &select);
		rewind(stdin);

		// index는 배열의 번호를 뜻한다.
		// 배열은 0부터 시작하지만 사용자 입력을 1부터 받아오기 때문에 -1을 시킨다.
		int index = select - 1;
		if (money < drinks[index].price)
		{
			printf("금액이 부족합니다.\n");
		}
		else
		{
			printf("%s(%dml)가 나왔습니다.\n", drinks[index].name, drinks[index].liter);
			money -= drinks[index].price;
		}

		getchar();
	}

}
void Some()
{
	printf("여기는 드링크 머신 c파일 안이다.\n");
}