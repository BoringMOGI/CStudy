#include "stdio.h"

int main1()
{
	int money = 0;

	printf("�ݾ��� �����ϼ��� : ");
	scanf_s("%d", &money);
	rewind(stdin);

	printf("���Ǳ�        ���� �ݾ� : %d��\n", money);
	printf("----------------------------------------------------\n");
	printf("1.Ŀ��(500��)     2.��������(1000��) 3.�ֽĽ�(900��)\n");
	printf("4.Ʈ����(1000��) 5.��Ÿ �Ŀ�(900��) 6.��Ű��(1500��)\n");
	printf("----------------------------------------------------\n");
	printf("��ǰ ���� : ");

	int select = 0;
	scanf_s("%d", &select);
	rewind(stdin);

	switch (select)
	{
	case 1:
		if (money < 500)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("Ŀ�ǰ� ���Խ��ϴ�.\n");
			money -= 500;
		}
		break;

	case 2:
		if (money < 1000)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("���������� ���Խ��ϴ�.\n");
			money -= 1000;
		}
		break;

	case 3:
		if (money < 900)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("�ֽĽ��� ���Խ��ϴ�.\n");
			money -= 900;
		}
		break;

	case 4:
		if (money < 1000)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("Ʈ���� ���Խ��ϴ�.\n");
			money -= 1000;
		}
		break;

	case 5:
		if (money < 900)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("��Ÿ �Ŀ��� ���Խ��ϴ�.\n");
			money -= 900;
		}
		break;

	case 6:
		if (money < 1500)
			printf("�ݾ��� �����մϴ�.\n");
		else
		{
			printf("��Ű���� ���Խ��ϴ�.\n");
			money -= 1500;
		}
		break;
	}

	printf("���� �ݾ� : %d��\n", money);


}