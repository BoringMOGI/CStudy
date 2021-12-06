#include<stdio.h>

int main()
{
	printf("출력 명령어 다른 말\n");	// new line : 한 줄을 띄워라.
	printf("출력 명령어 다른 말\n");

	int number;				// int 자료형 변수 number 선언.
	number = 10;			// number에 값 10을 대입.
	printf("number : %d\n", number); // number의 값을 출력.

	int card = 0;			// 변수 선언 및 초기화.
	card = 100;
	printf("%d\n", card);
	
	char word = 'a';								// char 자료형 변수 word 선언 및 초기화.
	printf("card : %d, word : %c\n", card, word);	// %d : int형 변수,  %c : char형 변수

	float pi = 3.14f;
	printf("pi : %f", pi);

	/*
	* 자료형 : 어떠한 값의 종류
	* 
	* int	정수형 : 정수 값만 담을 수 있다. (1, 4, 26, 70)
	* char	문자형 : 문자를 딱 '하나만' 담을 수 있다. ('a', 'c', 'T')
	* float	실수형 : 실수 부분까지 담을 수 있다. (3.14f, 500.2f)
	* 
	*/

	int num = 10 + 20;
	int sum = 50 - num;

	printf("num : %d\n", num);
	printf("sum : %d\n", sum);
	printf("num + sum : %d\n", num + sum);


	int number1 = 30;
	int number2 = 10;

	// 산술 연산자
	printf("number1 + number2 : %d\n", number1 + number2);	// 더하기
	printf("number1 - number2 : %d\n", number1 - number2);	// 빼기
	printf("number1 * number2 : %d\n", number1 * number2);	// 곱하기
	printf("number1 / number2 : %d\n", number1 / number2);	// 나누기
	printf("number1 %% number2 : %d\n", number1 % number2);	// 나머지

	int a = 10;
	int b = 20;

	// (=) 대입연산자 : 어떠한 변수에 값을 넣는다.
	int c = a + b; // 30.
	
	// 아래의 두 줄은 같은 말이다.
	c = c + 30;	   // C의 값과 30을 더한 후 C에 대입하라.
	c += 30;	   // C에 30을 더한 후 다시 대입하라.

	printf("c:%d\n", c);

	number1 = 100;	// 이미 만들어진 number1을 가져와 10을 대입한다.
	number2 = 20;	// 이미 만들어진 number2를 가져와 30을 대입한다.

	printf("number1 += number2 : %d\n", number1 += number2);
	printf("number1 -= number2 : %d\n", number1 -= number2);
	printf("number1 *= number2 : %d\n", number1 *= number2);
	printf("number1 /= number2 : %d\n", number1 /= number2);

	// 구구단
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