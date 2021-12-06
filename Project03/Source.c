#include<stdio.h>

int main()
{
	// int형 변수 2개 선언.
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
	printf("처음 값은 : %d이다.\n", number);

	number += 1;
	printf("number += 1 : %d이다.\n", number);
	
	number = number + 1;
	printf("number = number + 1 : %d이다.\n", number);

	number++;				// number의 값을 1 증가시킨다.
	printf("number++ : %d이다.\n", number);

	number--;				// number의 값을 1 감소시킨다.
	printf("number : %d\n", number);

	int sum = 10 * 4 + 2;
	sum = (55 - 32) * 2;
	
	printf("sum : %d\n", sum);

	// 변수 3개를 만들고 각각 n의 값을 가진다.
	// 1. 전부 더한 값을 출력.
	// 2. 전부 곱한 값을 출력한다.
	// 3. 원하는 방법으로 계산해서 출력한다.

	int a = 50;
	int b = 50;
	int c = 100;

	printf("a(%d)+b(%d)+c(%d) : %d\n", a, b, c, a + b + c);
	printf("a(%d)*b(%d)*c(%d) : %d\n", a, b, c, a * b * c);
	printf("a(%d)-b(%d)*c(%d) : %d\n", a, b, c, a - b * c);

	// 1. 새로운 변수 card1, card2 선언.
	// 2. card1의 제곱수를 출력. (ex. 10 -> 100, 5 -> 25)
	// 3. 두 수의 평균 값을 출력.
	// 4. card1의 제곱수와 card2의 제곱수를 더한 값을 출력.

	int input = 0;
	/*
	printf("숫자를 하나 입력하세요 : ");
	scanf_s("%d", &input);
	printf("input : %d\n", input);
	*/

	// 1.숫자를 2개 받아온다. (입력)
	// 2.입력받은 두 숫자를 더한 값을 출력.
	// 3.입력받은 두 숫자의 평균 값을 출력한다.

	int card1 = 0;
	int card2 = 0;

	/*
	printf("첫번째 숫자를 입력하세요 : ");
	scanf_s("%d", &card1);

	printf("두번째 숫자를 입력하세요 : ");
	scanf_s("%d", &card2);
	*/
	printf("숫자를 2개 입력하세요[공백으로 구분] : ");
	scanf_s("%d %d", &card1, &card2);

	printf("%d + %d : %d\n", card1, card2, card1 + card2);
	printf("(%d + %d) /2 : %d\n", card1, card2, (card1 + card2) / 2);
}