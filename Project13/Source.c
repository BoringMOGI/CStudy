#include <stdio.h>


int Sum(int a, int b)
{
	return a + b;
}
void Swap(int a, int b)
{
	printf("a adress : %p\n", &a);
	printf("b adress : %p\n", &b);

	int temp = a;
	a = b;
	b = temp;
}
void SwapReference(int* pNum1, int* pNum2)
{
	int temp = *pNum1;		// pNum1�� �ٶ󺸴� �ּ��� ���� temp�� ����.
	*pNum1 = *pNum2;		// pNum1�� �ٶ󺸴� �ּ��� ���� pNum2�� �ٶ󺸴� �ּ��� �� ����.
	*pNum2 = temp;			// pNum2�� �ٶ󺸴� �ּ��� ���� temp�� ����.
}

int main()
{
	if (0)
	{
		int num1 = 20;
		int num2 = 300;

		printf("num1 : %d\n", num1);

		// ������(pointer)
		// => �ּ� ���� �����ϰ� �ִ� ����.
		int* pNum1 = &num1;								// int�� ������ pNum1 ���� �� �ʱ�ȭ.
		*pNum1 = 30;									// pNum1�� '�����ϴ� �ּ��� ��'�� 30�� ����.

		printf("num1 : %d\n", num1);					// ���� num1�� ���� 30�� ��µȴ�.
		printf("num1 adress : %p\n", &num1);
		printf("\n");

		printf("pNum1 value : %p\n", pNum1);			// pNum1�� �����ϴ� ��(�ּ�).
		printf("pNum1 adress : %p\n", &pNum1);			// pNum1�� �ּ�.
		printf("pNum1 value's value : %d\n", *pNum1);	// pNum1�� �����ϴ� �ּ��� '��'
		printf("\n");

		printf("num1 adress : %p\n", &num1);
		printf("num2 adress : %p\n", &num2);

		//Swap(num1, num2);
		SwapReference(&num1, &num2);

		printf("num1:%d, num2:%d\n", num1, num2);
	}

	int numbers[5] = { 10,20,30,40,50 };

	// ��, �迭�� �����Ͱ� �´�.
	// ��? �ּҸ� ������ ��������ϱ�.
	printf("*numbers : %d\n", *numbers);				// numbers�� �ٶ󺸴� �ּ�(0��° ����� �ּ�)�� ��.
	printf("numbers[0] : %d\n", numbers[0]);			// numbers�� �ٶ󺸴� �ּҿ��� 0��° ������ ��.
	printf("\n");

	printf("*numbers + 1 : %d\n", *numbers + 1);		// numbers�� �ٶ󺸴� �ּ��� '����' + 1.
	printf("*(numbers + 1) : %d\n", *(numbers + 1));	// numbers�� �ٶ󺸴� �ּҿ� '1�� ���� ��' �� �ּ��� ��.

	// [tip] �ּҿ� + 1�� �Ѵٴ� ���� �ش� �ּҿ��� 1ĭ(�ڷ����� ũ�� ��ŭ) ��� �ּ�.

	return 0;
}