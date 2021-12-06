#include<stdio.h>
#include<string.h>		// 문자열 관련 기능을 사용하겠다.

int main()
{
	if (0)
	{
		int number = 10;	// 변수 : 값을 '1개' 담을 수 있는 변하는 수.

		int num;
		num = 10;

		// 배열(Array)
		int numbers[3];		// 크기 3의 int형 배열 numbers 선언.
		numbers[0] = 10;
		numbers[1] = 20;
		numbers[2] = 30;

		int scores[3] = { 30, 40, 50 };				// 배열 선언과 동시에 초기화.
		char texts[4] = { 'A', 'B', 'C', '\0' };	// 배열 선언과 동시에 초기화.

		char myName[10] = "CAT";
		printf("%s\n", myName);			// %s : 문자형 배열.

		for (int i = 0; i < 10; i++)
		{
			printf("myName[%d] : %c(%x)\n", i, myName[i], myName[i]);
		}

		char word[4] = "NET";		// 'N' 'E' 'T' '\0'.

		word[0] = 'T';
		word[2] = 'N';
		printf("%s\n", word);

		// 문자열 입력 받기.
		char name[20];
		printf("이름을 입력하세요 : ");
		scanf_s("%[^\n]s", name, sizeof(name));		// %[&\n]s : 해당 문자열 서식은 \n로만 구분해라.

		for (int i = 0; i < 20; i++)
		{
			// name[i]의 자료형은 문자(char)다. 그것이 여러개 모인 name이 문자열이다.
			printf("name[%d] : %c\n", i, name[i]);
		}

		printf("나의 이름은 : %s다.\n", name);
	}

	int number = 0;
	printf("%d\n", number);
	printf("%p\n", &number);

	int numbers[3] = { 0, };
	printf("%p\n", numbers);

	char name[20] = "\0";
	printf("이름을 입력하세요 : ");
	scanf_s("%[^\n]s", name, sizeof(name));
	rewind(stdin);

	// strlen : string length (문자열의 길이를 반환)
	printf("이름의 길이 : %d\n", strlen(name));
	printf("이름 : %s\n", name);

	int nameLength = strlen(name);
	for (int i = 0; i < nameLength; i++)
	{
		printf("name[%d] : %c\n", i, name[i]);
	}

	/*  실제로 strcpy가 하는 짓.
	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';
	name[3] = '\0';
	*/

	// strcpy : string copy 문자열 복사.
	strcpy_s(name, sizeof(name), "ABC");
	printf("name : %s\n", name);
}