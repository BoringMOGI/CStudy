#include "stdio.h"
#include "string.h"
#include "windows.h"		// �������.

typedef struct Drink
{
	char name[20];		// ����� �̸�.
	int price;			// ����� ����.
	int liter;			// ����� �뷮.
}Drink;


void OpenDrinkMachine()
{
	Drink drinks[] = {
		{ "Ŀ��", 10000 , 100}, { "��������", 1000, 200 }, { "�ֽĽ�", 900 , 300},
		{ "Ʈ����", 1000, 400 }, { "�ݶ�", 1500, 500 }, { "��Ű��", 2000, 600 }
	};

	int money = 10000;
	
	/*
	printf("�ݾ��� �����ϼ��� : ");
	scanf_s("%d", &money);
	rewind(stdin);
	*/

	while (1)
	{
		system("cls");
		printf("���Ǳ�        ���� �ݾ� : %d��\n", money);
		printf("----------------------------------------------------\n");

		// ���� Drink �ڷ����� ũ�Ⱑ 5��� ����.
		// drinks�迭�� 6����� ũ��� 5*6 = 30byte.
		// Drink�ڷ����� ũ�� = 5byte.
		// drinks�迭�� ũ��(30byte) / Drink�ڷ����� ũ��(5byte) => 6��.
		int drinkLength = sizeof(drinks) / sizeof(Drink);
		for (int i = 0; i < drinkLength; i++)
		{
			// 3���� ������� �迭�ؾ��ϴ� 3�� ��� ��°�� �Ǹ� ���� ���� ����Ѵ�.
			if ((i != 0) && i % 3 == 0)
				printf("\n");

			printf("%d.%s %dml (%d��) ", i + 1, drinks[i].name, drinks[i].liter, drinks[i].price);
		}

		printf("\n");
		printf("----------------------------------------------------\n");
		printf("��ǰ ���� : ");

		int select = 0;
		scanf_s("%d", &select);
		rewind(stdin);

		// index�� �迭�� ��ȣ�� ���Ѵ�.
		// �迭�� 0���� ���������� ����� �Է��� 1���� �޾ƿ��� ������ -1�� ��Ų��.
		int index = select - 1;
		if (money < drinks[index].price)
		{
			printf("�ݾ��� �����մϴ�.\n");
		}
		else
		{
			printf("%s(%dml)�� ���Խ��ϴ�.\n", drinks[index].name, drinks[index].liter);
			money -= drinks[index].price;
		}

		getchar();
	}

}
void Some()
{
	printf("����� �帵ũ �ӽ� c���� ���̴�.\n");
}