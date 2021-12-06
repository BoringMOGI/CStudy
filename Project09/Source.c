#include <stdio.h>

int main()
{
	if (0)
	{
		// Hello를 5번 출력.
		// 반복문 (for문)

		// 1. 플레이어에게 숫자 하나를 입력받는다.
		// 2. 해당 숫자 만큼 Hello를 출력한다.
		int count = 0;
		printf("반복할 횟수를 입력하세요 : ");
		scanf_s("%d", &count);
		rewind(stdin);

		for (int i = 0; i < count; i++)
		{
			// n번째 Hello.
			printf("%d번째 Hello\n", i + 1);
		}
	}

	// 실습 - 구구단.
	// 1. 몇단을 출력할 것인지 사용자에게 입력을 받는다.
	// 1-1. 만약 2~9 이외의 값이 입력되면 '잘못된 값입니다' 출력 후 종료.
	// 2. 만약 3이라고 입력했으면 3x1 ~ 3x9까지 출력.
	// 3. for문을 이용해야 한다.

	int digit = 0;
	printf("출력할 단을 입력하세요 : ");
	scanf_s("%d", &digit);
	rewind(stdin);
		
	//if(!(2 <= digit && digit <= 9))
	if (digit < 2 || 9 < digit)
	{
		printf("잘못된 값이다.\n");
	}
	else
	{
		for (int i = digit; i <= 5; i++)
		{
			printf("%d단\n", i);

			for (int k = 1; k <= 5; k++)
			{
				printf("%d x %d = %d\n", i, k, i * k);
			}			
		}
	}

	/*
	* 3 x 1 = 3
	* 3 x 2 = 6
	* 3 x 3 = 9
	* 
	* ....
	* 
	* 3 x 8 = 24
	* 3 x 9 = 27
	*/

}