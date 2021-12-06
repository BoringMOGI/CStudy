#include <stdio.h>

int main()
{
	if (0)
	{
		// 산술 연산자 (+, -, *, /, %, =)
		// 비교 연산자 : 무언가를 비교한다.

		// <실습 - 추가>
		// num1과 num2를 입력 받아서 결과 값을 비교해보자.
		int num1 = 0;
		int num2 = 0;

		printf("첫번째 숫자를 입력하세요 : ");
		scanf_s("%d", &num1);
		rewind(stdin);

		printf("두번째 숫자를 입력하세요 : ");
		scanf_s("%d", &num2);
		rewind(stdin);

		// 비교 연산은 결과 값으로 '1:참, 0:거짓'이 나온다.
		printf("num1은 num2보다 작은가? : %d\n", num1 < num2);			// a < b  (미만)
		printf("num1은 num2보다 큰가? : %d\n", num1 > num2);				// a > b  (초과)
		printf("num1은 num2보다 작거나 같은가? : %d\n", num1 <= num2);	// a <= b (이하)
		printf("num1은 num2보다 크거나 같은가? : %d\n", num1 >= num2);	// a >= b (이상)
		printf("num1과 num2는 같은가? : %d\n", num1 == num2);			// a == b (같다)
		printf("num1과 num2는 다른가? : %d\n", num1 != num2);			// a != b (다르다)

		if (num1 > num2)
		{
			printf("num1은 num2보다 크다.\n");
		}
		else
		{
			printf("num1은 num2보다 작거나 같다.\n");
		}
	}

	// 실습 : 자격증 시험.
	
	// 1. 점수를 입력 받는다.
	// 2. 해당 점수가 60점을 넘었으면(이상) '합격입니다.' 출력
	// 3. 60점 미만이라면 '불합격입니다.' 출력
	// 4. 대신 100점이면 '합격입니다. 만점입니다.' 출력.

	int score = 0;
	printf("점수를 입력하세요 [0~100점] : ");
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
		printf("잘못 입력했습니다.");
	}
	else
	{
		if (score < 0)
		{
			printf("잘못 입력했습니다.");
		}
		else
		{
			if (score >= 60)
			{
				if (score == 100)
				{
					printf("합격입니다. 만점입니다.\n");
				}
				else
				{
					printf("합격입니다.\n");
				}
			}
			else
			{
				printf("불합격입니다. 아깝네요.\n");
			}
		}
	}



}