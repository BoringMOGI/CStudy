#include<stdio.h>

int main()
{
	printf("��� ��ɾ� �ٸ� ��\n");	// new line : �� ���� �����.
	printf("��� ��ɾ� �ٸ� ��\n");

	int number;				// int �ڷ��� ���� number ����.
	number = 10;			// number�� �� 10�� ����.
	printf("number : %d\n", number); // number�� ���� ���.

	int card = 0;			// ���� ���� �� �ʱ�ȭ.
	card = 100;
	printf("%d\n", card);
	
	char word = 'a';								// char �ڷ��� ���� word ���� �� �ʱ�ȭ.
	printf("card : %d, word : %c\n", card, word);	// %d : int�� ����,  %c : char�� ����

	float pi = 3.14f;
	printf("pi : %f", pi);

	/*
	* �ڷ��� : ��� ���� ����
	* 
	* int	������ : ���� ���� ���� �� �ִ�. (1, 4, 26, 70)
	* char	������ : ���ڸ� �� '�ϳ���' ���� �� �ִ�. ('a', 'c', 'T')
	* float	�Ǽ��� : �Ǽ� �κб��� ���� �� �ִ�. (3.14f, 500.2f)
	* 
	*/

	int num = 10 + 20;
	int sum = 50 - num;

	printf("num : %d\n", num);
	printf("sum : %d\n", sum);
	printf("num + sum : %d\n", num + sum);


	int number1 = 30;
	int number2 = 10;

	// ��� ������
	printf("number1 + number2 : %d\n", number1 + number2);	// ���ϱ�
	printf("number1 - number2 : %d\n", number1 - number2);	// ����
	printf("number1 * number2 : %d\n", number1 * number2);	// ���ϱ�
	printf("number1 / number2 : %d\n", number1 / number2);	// ������
	printf("number1 %% number2 : %d\n", number1 % number2);	// ������

	int a = 10;
	int b = 20;

	// (=) ���Կ����� : ��� ������ ���� �ִ´�.
	int c = a + b; // 30.
	
	// �Ʒ��� �� ���� ���� ���̴�.
	c = c + 30;	   // C�� ���� 30�� ���� �� C�� �����϶�.
	c += 30;	   // C�� 30�� ���� �� �ٽ� �����϶�.

	printf("c:%d\n", c);

	number1 = 100;	// �̹� ������� number1�� ������ 10�� �����Ѵ�.
	number2 = 20;	// �̹� ������� number2�� ������ 30�� �����Ѵ�.

	printf("number1 += number2 : %d\n", number1 += number2);
	printf("number1 -= number2 : %d\n", number1 -= number2);
	printf("number1 *= number2 : %d\n", number1 *= number2);
	printf("number1 /= number2 : %d\n", number1 /= number2);

	// ������
	// 3 * 1 = 3
	// 3 * 2 = 6
	// 3 * 3 = 9

	// 3 * 9 = 27

	int digit = 3;

	printf("%d * 1 : %d\n", digit, digit * 1);
	printf("%d * 2 : %d\n", digit, digit * 2);
	printf("%d * 3 : %d\n", digit, digit * 3);
	printf("%d * 4 : %d\n", digit, digit * 4);
	printf("%d * 5 : %d\n", digit, digit * 5);
	printf("%d * 6 : %d\n", digit, digit * 6);
	printf("%d * 7 : %d\n", digit, digit * 7);
	printf("%d * 8 : %d\n", digit, digit * 8);
	printf("%d * 9 : %d\n", digit, digit * 9);
}