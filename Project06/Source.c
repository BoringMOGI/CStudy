#include <stdio.h>

int main()
{
	if (0)
	{
		int score = 0;
		printf("점수를 입력하세요 : ");
		scanf_s("%d", &score);
		rewind(stdin);

		if (score == 100)
		{
			printf("[합격] 만점입니다.\n");
		}
		else if (score >= 60)
		{
			printf("[합격] 축하합니다.\n");
		}
		else
		{
			printf("불합격입니다. 힘내세요.\n");
		}
	}
	if (0)
	{
		int choose = 0;
		printf("나는 대중교통이 자가용보다 좋다. [Y:1, N:0]\n");
		scanf_s("%d", &choose);
		rewind(stdin);

		if (choose == 1)
		{
			// 선택지를 주고
			// 선택을 입력 받는다.
			// 선택에 따른 조건을 분기한다.
			printf("나는 활동적이다. [Y:1, N:0]\n");
			scanf_s("%d", &choose);
			rewind(stdin);

			if (choose == 1)
			{
				printf("나는 D형이다.\n");
			}
			else if (choose == 0)
			{
				printf("나는 B형이다.\n");
			}
		}
		else if (choose == 0)
		{
			printf("나는 튀는걸 좋아한다. [Y:1, N:0]\n");
			scanf_s("%d", &choose);
			rewind(stdin);

			if (choose == 1)
			{
				printf("나는 걷는 것을 좋아한다. [Y:1, N:0]\n");
				scanf_s("%d", &choose);
				rewind(stdin);

				if (choose == 1)
				{
					printf("나는 A형이다.\n");
				}
				else if (choose == 0)
				{
					printf("나는 C형이다.\n");
				}
			}
			else if (choose == 0)
			{
				printf("나는 E형이다.\n");
			}
		}
	}
	if (0)
	{
		// 논리 연산자.
		// 조건 && 조건		AND		양쪽 다 참일 경우 참이다.
		// 조건 || 조건		OR		하나라도 참이면 참이다.

		printf("이 기구는 5살이 넘고 신장이 100cm 이상일 경우 탑승이 가능합니다.\n");

		int age;			// 나이.
		float height;		// 신장(키).

		printf("나이를 입력하세요 : ");
		scanf_s("%d", &age);
		rewind(stdin);

		printf("키를 입력하세요 : ");
		scanf_s("%f", &height);
		rewind(stdin);

		printf("나이:%d살, 키:%.1fcm\n", age, height);

		// &&(AND) : 양 쪽 조건식이 모두 참일 경우 참이다.
		// A	B	결과
		// 1	1	 1
		// 1	0	 0
		// 0	1	 0
		// 0	0	 0
		if ((age >= 5) && (height >= 100.0f))
		{
			printf("탑승이 가능합니다.\n");
		}
		else
		{
			printf("탑승 불가\n");
		}


		int number = 40;

		// 1. number에 값을 입력 받는다.
		// 2. number의 값이 30이상 70미만이라면 참이다 출력
		// 3. 아니라면 거짓이다 출력.
		if (number >= 30 && number < 70)
		{
			printf("참입니다.\n");
		}
		else
		{
			printf("거짓입니다.\n");
		}
	}

	int card = -100;
	
	// ||(OR) : 양 쪽 조건식 중 하나라도 참이면 참이다.
	// A	B	결과
	// 1	1	 1
	// 1	0	 1
	// 0	1	 1
	// 0	0	 0
	if (card <= 20 || card >= 50)
	{
		printf("참이다.\n");
	}

	
	// --------- 점수표 -----------
	// 0~40점 이하까지 F
	// 41~60점 이하까지 D
	// 61~80점 이하까지 C
	// 81~90점 이하까지 B
	// 91~100점 이하까지 A
	// ---------------------------

	// 대학교 점수
	// 1. 점수를 입력 받는다.
	// 2. 만약 점수가 0~100사이 값이 아니면 잘못 입력했습니다. 출력
	// 3. 각 점수에 맞는 등급을 출력.

	int grade = 0;
	printf("점수를 입력하세요 : ");
	scanf_s("%d", &grade);
	rewind(stdin);

	if (grade < 0 || grade > 100)
	{
		printf("잘못 입력 했습니다.\n");
	}
	else if (grade >= 0 && grade <= 40)
	{
		printf("F입니다. 재수강 하세요\n");
	}
	else if (grade <= 60)
	{
		printf("D입니다.\n");
	}
	else if (grade <= 80)
	{
		printf("C입니다.\n");
	}
	else if (grade <= 90)
	{
		printf("B입니다.\n");
	}
	else
	{
		printf("A입니다.\n");
	}
	

}