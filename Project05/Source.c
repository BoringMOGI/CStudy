#include <stdio.h>

int main()
{
	if (0)
	{
		// ��� ������ (+, -, *, /, %, =)
		// �� ������ : ���𰡸� ���Ѵ�.

		// <�ǽ� - �߰�>
		// num1�� num2�� �Է� �޾Ƽ� ��� ���� ���غ���.
		int num1 = 0;
		int num2 = 0;

		printf("ù��° ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num1);
		rewind(stdin);

		printf("�ι�° ���ڸ� �Է��ϼ��� : ");
		scanf_s("%d", &num2);
		rewind(stdin);

		// �� ������ ��� ������ '1:��, 0:����'�� ���´�.
		printf("num1�� num2���� ������? : %d\n", num1 < num2);			// a < b  (�̸�)
		printf("num1�� num2���� ū��? : %d\n", num1 > num2);				// a > b  (�ʰ�)
		printf("num1�� num2���� �۰ų� ������? : %d\n", num1 <= num2);	// a <= b (����)
		printf("num1�� num2���� ũ�ų� ������? : %d\n", num1 >= num2);	// a >= b (�̻�)
		printf("num1�� num2�� ������? : %d\n", num1 == num2);			// a == b (����)
		printf("num1�� num2�� �ٸ���? : %d\n", num1 != num2);			// a != b (�ٸ���)

		if (num1 > num2)
		{
			printf("num1�� num2���� ũ��.\n");
		}
		else
		{
			printf("num1�� num2���� �۰ų� ����.\n");
		}
	}

	// �ǽ� : �ڰ��� ����.
	
	// 1. ������ �Է� �޴´�.
	// 2. �ش� ������ 60���� �Ѿ�����(�̻�) '�հ��Դϴ�.' ���
	// 3. 60�� �̸��̶�� '���հ��Դϴ�.' ���
	// 4. ��� 100���̸� '�հ��Դϴ�. �����Դϴ�.' ���.

	int score = 0;
	printf("������ �Է��ϼ��� [0~100��] : ");
	scanf_s("%d", &score);
	rewind(stdin);


	if (score < 0)
	{
		printf("A\n");
	}
	else if (score > 100)
	{
		printf("B");
	}
	else if (score == -100)
	{
		printf("C");
	}
	else if (score == 100000)
	{
		printf("D\n");
	}
	else
	{
		printf("E\n");
	}

	if (score > 100)
	{
		printf("�߸� �Է��߽��ϴ�.");
	}
	else
	{
		if (score < 0)
		{
			printf("�߸� �Է��߽��ϴ�.");
		}
		else
		{
			if (score >= 60)
			{
				if (score == 100)
				{
					printf("�հ��Դϴ�. �����Դϴ�.\n");
				}
				else
				{
					printf("�հ��Դϴ�.\n");
				}
			}
			else
			{
				printf("���հ��Դϴ�. �Ʊ��׿�.\n");
			}
		}
	}



}