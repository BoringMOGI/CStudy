#include<stdio.h>

int main()
{
	// int�� ���� 2�� ����.
	int num1 = 300;
	int num2 = 20;

	printf("num1 : %d, num2 : %d\n", num1, num2);
	printf("---\n");

	printf("num1 + num2 : %d\n", num1 + num2);
	printf("num1 : %d, num2 : %d\n", num1, num2);

	printf("---\n");
	printf("num1 += num2 : %d\n", num1 += num2);
	printf("num1 : %d, num2 : %d\n", num1, num2);

	int number = 10;
	printf("ó�� ���� : %d�̴�.\n", number);

	number += 1;
	printf("number += 1 : %d�̴�.\n", number);
	
	number = number + 1;
	printf("number = number + 1 : %d�̴�.\n", number);

	number++;				// number�� ���� 1 ������Ų��.
	printf("number++ : %d�̴�.\n", number);

	number--;				// number�� ���� 1 ���ҽ�Ų��.
	printf("number : %d\n", number);

	int sum = 10 * 4 + 2;
	sum = (55 - 32) * 2;
	
	printf("sum : %d\n", sum);

	// ���� 3���� ����� ���� n�� ���� ������.
	// 1. ���� ���� ���� ���.
	// 2. ���� ���� ���� ����Ѵ�.
	// 3. ���ϴ� ������� ����ؼ� ����Ѵ�.

	int a = 50;
	int b = 50;
	int c = 100;

	printf("a(%d)+b(%d)+c(%d) : %d\n", a, b, c, a + b + c);
	printf("a(%d)*b(%d)*c(%d) : %d\n", a, b, c, a * b * c);
	printf("a(%d)-b(%d)*c(%d) : %d\n", a, b, c, a - b * c);

	// 1. ���ο� ���� card1, card2 ����.
	// 2. card1�� �������� ���. (ex. 10 -> 100, 5 -> 25)
	// 3. �� ���� ��� ���� ���.
	// 4. card1�� �������� card2�� �������� ���� ���� ���.

	int input = 0;
	/*
	printf("���ڸ� �ϳ� �Է��ϼ��� : ");
	scanf_s("%d", &input);
	printf("input : %d\n", input);
	*/

	// 1.���ڸ� 2�� �޾ƿ´�. (�Է�)
	// 2.�Է¹��� �� ���ڸ� ���� ���� ���.
	// 3.�Է¹��� �� ������ ��� ���� ����Ѵ�.

	int card1 = 0;
	int card2 = 0;

	/*
	printf("ù��° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &card1);

	printf("�ι�° ���ڸ� �Է��ϼ��� : ");
	scanf_s("%d", &card2);
	*/
	printf("���ڸ� 2�� �Է��ϼ���[�������� ����] : ");
	scanf_s("%d %d", &card1, &card2);

	printf("%d + %d : %d\n", card1, card2, card1 + card2);
	printf("(%d + %d) /2 : %d\n", card1, card2, (card1 + card2) / 2);
}