#include <stdio.h>
#include <string.h>

// 함수 (Method)
//  = 미리 약속된 동작.
//  = 반환값, 함수명, 매개변수. (기본형태)

void Print()
{
	printf("Hello?\n");
}
void MakeRamen(int count)			// 매게변수 : 호출자가 전달해주는 값.
{
	printf("냄비를 준비한다.\n");
	printf("물을 넣는다.\n");
	printf("카스를 켠다.\n");
	printf("라면 %d개를 준비한다.\n", count);
	printf("기타 등등...\n");
}

// 반환값(int), 함수명(Sum), 매개변수(int형 2개)
int Sum(int a, int b)
{
	return a + b;
}
int Minus(int ab, int bb)
{
	return ab - bb;
}

// void : 반환 값이 없다.
void Accel()
{
	printf("자동차가 앞으로 간다.\n");
}
void Break()
{
	printf("자동차가 멈춘다.\n");
}
void Move(char input)
{
	switch (input)
	{
	case 'w':
		printf("앞으로 이동\n");
		break;
	case 's':
		printf("뒤로 이동\n");
		break;
	}
}


// 빼기
// 곱하기
// 나누기

void PrintGogo(int digit, int multiple)
{
	printf("%d * %d = %d\n", digit, multiple, digit * multiple);
}

int main()
{
	if (0)
	{
		int number = 10;
		int numbers[3] = { 1,2,3 };

		char word = 'A';
		char name[20] = { 0 };

		// 1. name에 이름 입력.
		// 2. 글자수 만큼 내부의 글자를 한글자씩 출력.
		// 3. 이름 전체를 출력.

		printf("이름을 입력하세요 [최대 19글자] : ");
		scanf_s("%[^\n]s", name, sizeof(name));
		rewind(stdin);

		int length = strlen(name);
		for (int i = 0; i < length; i++)
		{
			printf("name[%d], %c\n", i, name[i]);
		}

		printf("나의 이름은 : %s\n", name);

		strcpy_s(name, sizeof(name), "MY NEW NAME");
		printf("나의 새로운 이름은 : %s\n", name);

		// 문자열 결합.
		char box1[20] = "ABCD";
		char box2[20] = "EFGH";

		// strcat = string concatenate : 문자열 결합.
		char box3[20] = { 0 };
		strcat_s(box3, sizeof(box3), box1);
		strcat_s(box3, sizeof(box3), box2);
		printf("box3 : %s\n", box3);

		// 1. box1에 문자열 입력.
		// 2. box2에 문자열 입력.
		// 3. 두 값이 같다면 '값이 같다' 출력.
		// 4. 두 값이 다르다면 '값이 다르다' 출력.

		printf("글자1을 입력하세요 : ");
		scanf_s("%[^\n]s", box1, sizeof(box1));
		rewind(stdin);

		printf("글자2을 입력하세요 : ");
		scanf_s("%[^\n]s", box2, sizeof(box2));
		rewind(stdin);

		// strcmp : string compare 문자열 비교.
		// 맞으면 0이다.
		printf("box1 address : %p\n", box1);
		for (int i = 0; i < 20; i++)
		{
			printf("box1[%d] adress : %p\n", i, &box1[i]);
		}

		if (strcmp(box1, box2) == 0)
		{
			printf("같다.\n");
		}
		else
		{
			printf("다르다.\n");
		}
	}

	Print();			// 함수의 호출.
	MakeRamen(2);

	int number = Sum(10, 20);
	printf("number : %d\n", number);

	number = Minus(30, 90);
	printf("number : %d\n", number);

	Accel();
	Break();
}