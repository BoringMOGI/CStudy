#include <stdio.h>�� �����

int main()
{
	if (0)
	{
		// �� ������
		// && : and������
		// || : or������
		// ! : not������
		//  = ��� ���� �ݴ�� �����´�. !(1) => 0.
		int number = 10;

		if (!(number != 10))
		{
			printf("���ϱ�?\n");
		}

		int age = 0;			// ����.
		int medicine = 0;		// ��.

		// �� ����� 10�� �̸��� 1�� �������� 3���� �����ϼ���.
		printf("���̸� �Է��ϼ��� : ");
		scanf_s("%d", &age);
		rewind(stdin);

		// ���� ������ : (����) ? �� : ����.
		medicine = (age < 10) ? 1 : 3;
		printf("%d���� �����ϼ���\n", medicine);
	}
	if (0)
	{
		// switch (�б⹮)
		printf("Q. ����� �ݴ븻��?\n");
		printf("--------------------\n");
		printf("1.�ɴ�.\n");
		printf("2.����.\n");
		printf("3.���ϴ�.\n");
		printf("4.����.\n");
		printf("--------------------\n");

		int answer = 0;
		printf("������ : ");
		scanf_s("%d", &answer);
		rewind(stdin);

		switch (answer)							// answer�� ����.
		{
		case 1:									// 1�� ���.
			printf("[����] �ɴٴ� ......\n");
			break;								// break�� ������ switch�� �����Ѵ�.

		case 2:									// 2�� ���.
			printf("[����] ���ٴ� ......\n");
			break;

		case 3:
			printf("[����] ���ϴٴ� ......\n");
			break;

		case 4:
			printf("[����] �¾ҽ��ϴ�.\n");
			break;

		default:								// ��� �������� �ƴ϶�� (= else)
			printf("�߸� �Է��߽��ϴ�.\n");
			break;
		}

		// �������� �����ϴ�.
		char tt = 'A';
		switch (tt)
		{
		case 'A':
			printf("A�� �Է��ߴ�.\n");
			break;

		case 'T':
			printf("T�� �Է��ߴ�.\n");
			break;
		}
	}

	// <�ǽ�>
	// 1. ������ x,y��ǥ ���� �ִ�.
	// 2. ���� ���� ��ǥ�� ����Ѵ�.
	// 3. <���� �Է� �޾Ƽ� �̵�>
	// 4. �� ��� ������ ���� ��ǥ�� ����Ѵ�.

	int posX, posY = 0;				// ���� x��� y���� ��ġ ��.
	posX = 20;
	posY = 10;

	printf("���� ��ġ x:%d, y:%d\n", posX, posY);
	printf("�Է� �����....\n");
	
	// ����ڿ��Լ� ���� �ϳ��� �Է� �޾ƿ´�.
	// �� ���� char�� ���� input�� �����Ѵ�.
	char input = 0;
	scanf_s("%c", &input, sizeof(input));
	rewind(stdin);
	
	// input�� ������ �б��Ѵ�.
	switch (input)
	{
	case 'W':
	case 'w':
		printf("�������� �̵��߽��ϴ�.\n");
		posY += 1;
		break;

	case 'A':
	case 'a':
		printf("�������� �̵��߽��ϴ�.\n");
		posX -= 1;
		break;

	case 'S':
	case 's':
		printf("�Ʒ������� �̵��߽��ϴ�.\n");
		posY -= 1;
		break;

	case 'D':
	case 'd':
		printf("���������� �̵��߽��ϴ�.\n");
		posX += 1;
		break;

	case 'I':
	case 'i':
		printf("�κ��丮�� �������ϴ�.\n");
		break;
	}

	printf("���� ��ġ�� x:%d,y;%d\n", posX, posY);
}