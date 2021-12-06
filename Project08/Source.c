#include <stdio.h>약 영어로

int main()
{
	if (0)
	{
		// 논리 연산자
		// && : and연산자
		// || : or연산자
		// ! : not연산자
		//  = 결과 값을 반대로 뒤집는다. !(1) => 0.
		int number = 10;

		if (!(number != 10))
		{
			printf("참일까?\n");
		}

		int age = 0;			// 나이.
		int medicine = 0;		// 약.

		// 약 복용시 10세 미만은 1개 나머지는 3개를 섭취하세요.
		printf("나이를 입력하세요 : ");
		scanf_s("%d", &age);
		rewind(stdin);

		// 조건 연산자 : (조건) ? 참 : 거짓.
		medicine = (age < 10) ? 1 : 3;
		printf("%d개를 섭취하세요\n", medicine);
	}
	if (0)
	{
		// switch (분기문)
		printf("Q. 울다의 반대말은?\n");
		printf("--------------------\n");
		printf("1.앉다.\n");
		printf("2.서다.\n");
		printf("3.욕하다.\n");
		printf("4.웃다.\n");
		printf("--------------------\n");

		int answer = 0;
		printf("정답은 : ");
		scanf_s("%d", &answer);
		rewind(stdin);

		switch (answer)							// answer의 값이.
		{
		case 1:									// 1일 경우.
			printf("[오답] 앉다는 ......\n");
			break;								// break를 만나면 switch를 종료한다.

		case 2:									// 2일 경우.
			printf("[오답] 서다는 ......\n");
			break;

		case 3:
			printf("[오답] 욕하다는 ......\n");
			break;

		case 4:
			printf("[정답] 맞았습니다.\n");
			break;

		default:								// 모든 선택지가 아니라면 (= else)
			printf("잘못 입력했습니다.\n");
			break;
		}

		// 문자형도 가능하다.
		char tt = 'A';
		switch (tt)
		{
		case 'A':
			printf("A를 입력했다.\n");
			break;

		case 'T':
			printf("T를 입력했다.\n");
			break;
		}
	}

	// <실습>
	// 1. 나에게 x,y좌표 값이 있다.
	// 2. 현재 나의 좌표를 출력한다.
	// 3. <문자 입력 받아서 이동>
	// 4. 그 결과 움직인 나의 좌표를 출력한다.

	int posX, posY = 0;				// 각각 x축과 y축의 위치 값.
	posX = 20;
	posY = 10;

	printf("최초 위치 x:%d, y:%d\n", posX, posY);
	printf("입력 대기중....\n");
	
	// 사용자에게서 문자 하나를 입력 받아온다.
	// 그 값을 char형 변수 input에 대입한다.
	char input = 0;
	scanf_s("%c", &input, sizeof(input));
	rewind(stdin);
	
	// input의 값으로 분기한다.
	switch (input)
	{
	case 'W':
	case 'w':
		printf("위쪽으로 이동했습니다.\n");
		posY += 1;
		break;

	case 'A':
	case 'a':
		printf("왼쪽으로 이동했습니다.\n");
		posX -= 1;
		break;

	case 'S':
	case 's':
		printf("아래쪽으로 이동했습니다.\n");
		posY -= 1;
		break;

	case 'D':
	case 'd':
		printf("오른쪽으로 이동했습니다.\n");
		posX += 1;
		break;

	case 'I':
	case 'i':
		printf("인벤토리를 열었습니다.\n");
		break;
	}

	printf("최종 위치는 x:%d,y;%d\n", posX, posY);
}