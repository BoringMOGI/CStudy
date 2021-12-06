#include<stdio.h>		// standrad input output.
#include<conio.h>		// consol input output.
#include<windows.h>		// 윈도우의 기능을 쓰겠다.

// 프로그램 진입점.
int main()
{
	// for문 (반복문)
	// = 특정 횟수만큼 반복한다.
	if (0)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("Hello?\n");
		}
	}

	if (0)
	{
		// while문 (반복문)
		// = 특정 조건이 만족하는 한 계속 반복한다.

		// 1.나의 위치를 나타내는 x,y의 값을 선언. (기본:0,0)
		// 2.사용자에게 키 입력을 받는다.
		// 3.분기문(switch)을 이용해 wasd일 경우 해당 방향으로 1 이동.
		// 4.나의 현재 위치를 출력한다.

		for (int i = 0; i < 3; i++)
		{
			int temp = 10;
			temp += 10;
			printf("temp : %d\n", temp);

			break;			// for문의 break. for문을 끝내라.
		}

		int x = 0;
		int y = 0;
		char input = 0;

		while (input != 'q')
		{
			system("cls");
			printf("나의 위치 (x:%d, y:%d)\n", x, y);
			printf("이동할 방향을 선택하세요 [WASD]");
			input = _getch();

			/*
			scanf_s("%c", &input, sizeof(input));
			rewind(stdin);
			*/

			switch (input)
			{
			case 'w':
				y += 1;
				break;	// switch문 내부의 break. switch문을 끝내라.
			}

			// 만약 q를 눌렀거나 esc(27)을 눌렀을 경우.
			if (input == 'q' || input == 27)
				break;		// while문 내부의 break. while문을 끝내라.
		}
	}

	if (0)
	{
		char input = 0;
		int posX = 5;
		int posY = 5;

		while (1)
		{
			system("cls");			// 화면 지우기.

			// 커서의 위치를 posX, posY에 맞춰서 움직인다.
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			COORD pos;
			pos.X = posX;
			pos.Y = posY;
			SetConsoleCursorPosition(handle, pos);
			// ===============================================================

			printf("ㅁ");			// 문자 ㅁ 출력.

			input = _getch();		// 문자 하나 입력 받기.
			switch (input)			// 문자에 따른 분기문.
			{
			case 'a':				// 값이 'a'일 경우.
				posX -= 1;			// posX의 값을 1 감소.
				break;
			case 'd':				// 값이 'd'일 경우.
				posX += 1;			// posX의 값을 1 증가.
				break;
			}
		}
	}
		
	char input = 27;

	// while문
	//  = 조건 체크 후 실행.
	while (input != 27)
	{
		printf("while 반복문\n");
		input = _getch();
	}

	// do-while문
	//  = 먼저 실행 후 조건 체크.
	do
	{
		printf("do-while 반복문\n");
		input = _getch();
	} 	
	while (input != 27);
}