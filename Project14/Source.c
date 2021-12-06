#include <stdio.h>


// [중요] 함수는 호출부 위에 선언문이 위치해야한다.
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

		// [값 형식 변수]
		// number가 의미하는 것은 number의 실제 값.
		// &number가 의미하는 것은 해당 변수가 위치한 주소.

		// [참조 형식 변수] = 포인터
		// pNumber는 pNumber의 값(= 바라보는 주소)
		// *pNumber는 바라보는 주소(=변수)의 값. 
		// &pNumber는 pNumber가 위치한 주소.

		* pNumber = 300;
		printf("%d\n", number);

		// 배열.
		// = 연속적인 변수의 나열.
		// numbers는 포인터의 일종이며 따라서 numbers는 바라보는 주소.
		int numbers[3] = { 1,2,3 };

		printf("numbers : %p\n", numbers);
		printf("&numbers[0] : %p\n", &numbers[0]);

		// numbers[1] (=) *(numbers + 1)
		printf("(numbers + 1) : %p\n", numbers + 1);
		printf("*(numbers + 1) : %d\n", *(numbers + 1));
	}

	// 1. 이름을 입력 받는다.
	// 2. 함수 PrintName을 호출해 해당 이름을 출력한다.
	//    = 해당 함수 안에 내가 입력받은 이름을 출력하는 명령문이 있어야한다.

	char name[30] = { 0 };
	printf("이름을 입력하세요 : ");
	scanf_s("%[^\n]s", name, sizeof(name));
	rewind(stdin);

	printf("%s\n", name);
	PrintName(name);
}


