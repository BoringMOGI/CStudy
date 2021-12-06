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
	int temp = *pNum1;		// pNum1이 바라보는 주소의 값을 temp에 대입.
	*pNum1 = *pNum2;		// pNum1이 바라보는 주소의 값에 pNum2가 바라보는 주소의 값 대입.
	*pNum2 = temp;			// pNum2가 바라보는 주소의 값에 temp값 대입.
}

int main()
{
	if (0)
	{
		int num1 = 20;
		int num2 = 300;

		printf("num1 : %d\n", num1);

		// 포인터(pointer)
		// => 주소 값을 참조하고 있는 변수.
		int* pNum1 = &num1;								// int형 포인터 pNum1 선언 및 초기화.
		*pNum1 = 30;									// pNum1이 '참조하는 주소의 값'에 30을 대입.

		printf("num1 : %d\n", num1);					// 따라서 num1의 값은 30이 출력된다.
		printf("num1 adress : %p\n", &num1);
		printf("\n");

		printf("pNum1 value : %p\n", pNum1);			// pNum1이 참조하는 값(주소).
		printf("pNum1 adress : %p\n", &pNum1);			// pNum1의 주소.
		printf("pNum1 value's value : %d\n", *pNum1);	// pNum1이 참조하는 주소의 '값'
		printf("\n");

		printf("num1 adress : %p\n", &num1);
		printf("num2 adress : %p\n", &num2);

		//Swap(num1, num2);
		SwapReference(&num1, &num2);

		printf("num1:%d, num2:%d\n", num1, num2);
	}

	int numbers[5] = { 10,20,30,40,50 };

	// 즉, 배열도 포인터가 맞다.
	// 왜? 주소를 값으로 들고있으니까.
	printf("*numbers : %d\n", *numbers);				// numbers가 바라보는 주소(0번째 요소의 주소)의 값.
	printf("numbers[0] : %d\n", numbers[0]);			// numbers가 바라보는 주소에서 0번째 떨어진 값.
	printf("\n");

	printf("*numbers + 1 : %d\n", *numbers + 1);		// numbers가 바라보는 주소의 '값에' + 1.
	printf("*(numbers + 1) : %d\n", *(numbers + 1));	// numbers가 바라보는 주소에 '1을 더한 후' 그 주소의 값.

	// [tip] 주소에 + 1을 한다는 말은 해당 주소에서 1칸(자료형의 크기 만큼) 띄운 주소.

	return 0;
}