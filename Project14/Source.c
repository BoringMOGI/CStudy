#include <stdio.h>


// [�߿�] �Լ��� ȣ��� ���� ������ ��ġ�ؾ��Ѵ�.
void Print()
{
	printf("Hello World!\n");
}

void PrintNum(int num)
{
	printf("%d\n", num);
}

void PrintName(char* name)
{
	printf("%s\n", name);
}

int main()
{
	if (0)
	{
		int number = 10;
		int* pNumber = &number;

		// [�� ���� ����]
		// number�� �ǹ��ϴ� ���� number�� ���� ��.
		// &number�� �ǹ��ϴ� ���� �ش� ������ ��ġ�� �ּ�.

		// [���� ���� ����] = ������
		// pNumber�� pNumber�� ��(= �ٶ󺸴� �ּ�)
		// *pNumber�� �ٶ󺸴� �ּ�(=����)�� ��. 
		// &pNumber�� pNumber�� ��ġ�� �ּ�.

		* pNumber = 300;
		printf("%d\n", number);

		// �迭.
		// = �������� ������ ����.
		// numbers�� �������� �����̸� ���� numbers�� �ٶ󺸴� �ּ�.
		int numbers[3] = { 1,2,3 };

		printf("numbers : %p\n", numbers);
		printf("&numbers[0] : %p\n", &numbers[0]);

		// numbers[1] (=) *(numbers + 1)
		printf("(numbers + 1) : %p\n", numbers + 1);
		printf("*(numbers + 1) : %d\n", *(numbers + 1));
	}

	// 1. �̸��� �Է� �޴´�.
	// 2. �Լ� PrintName�� ȣ���� �ش� �̸��� ����Ѵ�.
	//    = �ش� �Լ� �ȿ� ���� �Է¹��� �̸��� ����ϴ� ��ɹ��� �־���Ѵ�.

	char name[30] = { 0 };
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%[^\n]s", name, sizeof(name));
	rewind(stdin);

	printf("%s\n", name);
	PrintName(name);
}


