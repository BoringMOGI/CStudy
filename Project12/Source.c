#include <stdio.h>
#include <string.h>

// �Լ� (Method)
//  = �̸� ��ӵ� ����.
//  = ��ȯ��, �Լ���, �Ű�����. (�⺻����)

void Print()
{
	printf("Hello?\n");
}
void MakeRamen(int count)			// �ŰԺ��� : ȣ���ڰ� �������ִ� ��.
{
	printf("���� �غ��Ѵ�.\n");
	printf("���� �ִ´�.\n");
	printf("ī���� �Ҵ�.\n");
	printf("��� %d���� �غ��Ѵ�.\n", count);
	printf("��Ÿ ���...\n");
}

// ��ȯ��(int), �Լ���(Sum), �Ű�����(int�� 2��)
int Sum(int a, int b)
{
	return a + b;
}
int Minus(int ab, int bb)
{
	return ab - bb;
}

// void : ��ȯ ���� ����.
void Accel()
{
	printf("�ڵ����� ������ ����.\n");
}
void Break()
{
	printf("�ڵ����� �����.\n");
}
void Move(char input)
{
	switch (input)
	{
	case 'w':
		printf("������ �̵�\n");
		break;
	case 's':
		printf("�ڷ� �̵�\n");
		break;
	}
}


// ����
// ���ϱ�
// ������

void PrintGogo(int digit, int multiple)
{
	printf("%d * %d = %d\n", digit, multiple, digit * multiple);
}

int main()
{
	if (0)
	{
		int number = 10;
		int numbers[3] = { 1,2,3 };

		char word = 'A';
		char name[20] = { 0 };

		// 1. name�� �̸� �Է�.
		// 2. ���ڼ� ��ŭ ������ ���ڸ� �ѱ��ھ� ���.
		// 3. �̸� ��ü�� ���.

		printf("�̸��� �Է��ϼ��� [�ִ� 19����] : ");
		scanf_s("%[^\n]s", name, sizeof(name));
		rewind(stdin);

		int length = strlen(name);
		for (int i = 0; i < length; i++)
		{
			printf("name[%d], %c\n", i, name[i]);
		}

		printf("���� �̸��� : %s\n", name);

		strcpy_s(name, sizeof(name), "MY NEW NAME");
		printf("���� ���ο� �̸��� : %s\n", name);

		// ���ڿ� ����.
		char box1[20] = "ABCD";
		char box2[20] = "EFGH";

		// strcat = string concatenate : ���ڿ� ����.
		char box3[20] = { 0 };
		strcat_s(box3, sizeof(box3), box1);
		strcat_s(box3, sizeof(box3), box2);
		printf("box3 : %s\n", box3);

		// 1. box1�� ���ڿ� �Է�.
		// 2. box2�� ���ڿ� �Է�.
		// 3. �� ���� ���ٸ� '���� ����' ���.
		// 4. �� ���� �ٸ��ٸ� '���� �ٸ���' ���.

		printf("����1�� �Է��ϼ��� : ");
		scanf_s("%[^\n]s", box1, sizeof(box1));
		rewind(stdin);

		printf("����2�� �Է��ϼ��� : ");
		scanf_s("%[^\n]s", box2, sizeof(box2));
		rewind(stdin);

		// strcmp : string compare ���ڿ� ��.
		// ������ 0�̴�.
		printf("box1 address : %p\n", box1);
		for (int i = 0; i < 20; i++)
		{
			printf("box1[%d] adress : %p\n", i, &box1[i]);
		}

		if (strcmp(box1, box2) == 0)
		{
			printf("����.\n");
		}
		else
		{
			printf("�ٸ���.\n");
		}
	}

	Print();			// �Լ��� ȣ��.
	MakeRamen(2);

	int number = Sum(10, 20);
	printf("number : %d\n", number);

	number = Minus(30, 90);
	printf("number : %d\n", number);

	Accel();
	Break();
}