#include <stdio.h>

int main()
{
	if (0)
	{
		int score = 0;
		printf("������ �Է��ϼ��� : ");
		scanf_s("%d", &score);
		rewind(stdin);

		if (score == 100)
		{
			printf("[�հ�] �����Դϴ�.\n");
		}
		else if (score >= 60)
		{
			printf("[�հ�] �����մϴ�.\n");
		}
		else
		{
			printf("���հ��Դϴ�. ��������.\n");
		}
	}
	if (0)
	{
		int choose = 0;
		printf("���� ���߱����� �ڰ��뺸�� ����. [Y:1, N:0]\n");
		scanf_s("%d", &choose);
		rewind(stdin);

		if (choose == 1)
		{
			// �������� �ְ�
			// ������ �Է� �޴´�.
			// ���ÿ� ���� ������ �б��Ѵ�.
			printf("���� Ȱ�����̴�. [Y:1, N:0]\n");
			scanf_s("%d", &choose);
			rewind(stdin);

			if (choose == 1)
			{
				printf("���� D���̴�.\n");
			}
			else if (choose == 0)
			{
				printf("���� B���̴�.\n");
			}
		}
		else if (choose == 0)
		{
			printf("���� Ƣ�°� �����Ѵ�. [Y:1, N:0]\n");
			scanf_s("%d", &choose);
			rewind(stdin);

			if (choose == 1)
			{
				printf("���� �ȴ� ���� �����Ѵ�. [Y:1, N:0]\n");
				scanf_s("%d", &choose);
				rewind(stdin);

				if (choose == 1)
				{
					printf("���� A���̴�.\n");
				}
				else if (choose == 0)
				{
					printf("���� C���̴�.\n");
				}
			}
			else if (choose == 0)
			{
				printf("���� E���̴�.\n");
			}
		}
	}
	if (0)
	{
		// �� ������.
		// ���� && ����		AND		���� �� ���� ��� ���̴�.
		// ���� || ����		OR		�ϳ��� ���̸� ���̴�.

		printf("�� �ⱸ�� 5���� �Ѱ� ������ 100cm �̻��� ��� ž���� �����մϴ�.\n");

		int age;			// ����.
		float height;		// ����(Ű).

		printf("���̸� �Է��ϼ��� : ");
		scanf_s("%d", &age);
		rewind(stdin);

		printf("Ű�� �Է��ϼ��� : ");
		scanf_s("%f", &height);
		rewind(stdin);

		printf("����:%d��, Ű:%.1fcm\n", age, height);

		// &&(AND) : �� �� ���ǽ��� ��� ���� ��� ���̴�.
		// A	B	���
		// 1	1	 1
		// 1	0	 0
		// 0	1	 0
		// 0	0	 0
		if ((age >= 5) && (height >= 100.0f))
		{
			printf("ž���� �����մϴ�.\n");
		}
		else
		{
			printf("ž�� �Ұ�\n");
		}


		int number = 40;

		// 1. number�� ���� �Է� �޴´�.
		// 2. number�� ���� 30�̻� 70�̸��̶�� ���̴� ���
		// 3. �ƴ϶�� �����̴� ���.
		if (number >= 30 && number < 70)
		{
			printf("���Դϴ�.\n");
		}
		else
		{
			printf("�����Դϴ�.\n");
		}
	}

	int card = -100;
	
	// ||(OR) : �� �� ���ǽ� �� �ϳ��� ���̸� ���̴�.
	// A	B	���
	// 1	1	 1
	// 1	0	 1
	// 0	1	 1
	// 0	0	 0
	if (card <= 20 || card >= 50)
	{
		printf("���̴�.\n");
	}

	
	// --------- ����ǥ -----------
	// 0~40�� ���ϱ��� F
	// 41~60�� ���ϱ��� D
	// 61~80�� ���ϱ��� C
	// 81~90�� ���ϱ��� B
	// 91~100�� ���ϱ��� A
	// ---------------------------

	// ���б� ����
	// 1. ������ �Է� �޴´�.
	// 2. ���� ������ 0~100���� ���� �ƴϸ� �߸� �Է��߽��ϴ�. ���
	// 3. �� ������ �´� ����� ���.

	int grade = 0;
	printf("������ �Է��ϼ��� : ");
	scanf_s("%d", &grade);
	rewind(stdin);

	if (grade < 0 || grade > 100)
	{
		printf("�߸� �Է� �߽��ϴ�.\n");
	}
	else if (grade >= 0 && grade <= 40)
	{
		printf("F�Դϴ�. ����� �ϼ���\n");
	}
	else if (grade <= 60)
	{
		printf("D�Դϴ�.\n");
	}
	else if (grade <= 80)
	{
		printf("C�Դϴ�.\n");
	}
	else if (grade <= 90)
	{
		printf("B�Դϴ�.\n");
	}
	else
	{
		printf("A�Դϴ�.\n");
	}
	

}