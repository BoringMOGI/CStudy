#include "stdio.h"

typedef struct Drink
{
	char name[20];		// ����� �̸�.
	int price;			// ����� ����.
}Drink;


/*
	Step2 - ����ü
	  
	�����͸� ����ü �迭�� ������ �ִ´�. �ش� �迭�� �����͸� ������ ���� ����, ����ϸ�
	������ ���� �ٲٴ� ������ ����, ����� ��� �ٲ��.
*/



int main2()
{
	Drink drinks[] = { 
		{ "Ŀ��", 10000 }, { "��������", 1000 }, { "�ֽĽ�", 900 },
		{ "Ʈ����", 1000 }, { "�ݶ�", 1500 }, { "��Ű��", 2000 } 
	};

	int money = 10000;
	
	/*
	printf("�ݾ��� �����ϼ��� : ");
	scanf_s("%d", &money);
	rewind(stdin);
	*/

	printf("���Ǳ�        ���� �ݾ� : %d��\n", money);
	printf("----------------------------------------------------\n");
	printf("1.%s(%d��)  2.%s(%d��)  3.%s(%d)\n", drinks[0].name, drinks[0].price, drinks[1].name, drinks[1].price, drinks[2].name, drinks[2].price);
	printf("4.%s(%d��)  5.%s(%d��)  6.%s(%d)\n", drinks[3].name, drinks[3].price, drinks[4].name, drinks[4].price, drinks[5].name, drinks[5].price);
	printf("----------------------------------------------------\n");
	printf("��ǰ ���� : ");

	int select = 0;
	scanf_s("%d", &select);
	rewind(stdin);

	switch (select)
	{
	case 1:
		if (money < drinks[0].price)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[0].name);
			money -= drinks[0].price;
		}
		break;

	case 2:
		if (money < drinks[1].price)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[1].name);
			money -= drinks[1].price;
		}
		break;

	case 3:
		if (money < drinks[2].price)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[2].name);
			money -= drinks[2].price;
		}
		break;

	case 4:
		if (money < drinks[3].price)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[3].name);
			money -= drinks[3].price;
		}
		break;

	case 5:
		if (money < drinks[4].price)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[4].name);
			money -= drinks[4].price;
		}
		break;

	case 6:
		if (money < drinks[5].price)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("%s�� ���Խ��ϴ�.\n", drinks[5].name);
			money -= drinks[5].price;
		}
		break;
	}

	printf("���� �ݾ� : %d��\n", money);


}