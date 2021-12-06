#include <stdio.h>

int main()
{
	//int number = 0;						// int형 변수 number 선언 및 초기화.
	//printf("숫자를 입력하세요 : ");
	//scanf_s("%d", &number);				// 입력문.
	//printf("number : %d\n", number);	// 출력문.

	// 변수명 규칙.
	/*
		1. 첫 글자를 숫자로 할 수 없다. 00num  (X) n0012ber(O)
		 = 처음이 숫자면 수로 인식하기 때문에 안된다.
	 
		2. 특수문자, 공백 불가능.		 %@#$num(X) num ber(X)
		 = 특수문자를 특별한 기능을 가지고 있고, 공백은 각 명령어를 구분하기 때문에.

		3. 대,소문자를 '전부' 구분한다.

		4. 중복 이름 불가능.

		5. 미리 예약된 '키워드'는 불가능. int int;(X)
	*/

	/*
	* 프로그래머들 끼리의 약속. (Coding-Style)
	*  1. 변수명의 첫 시작은 소문자. 함수명의 첫 시작은 대문자.
	*  2. 공백이 있을 경우 단어별 첫 시작은 대문자. (admin user name -> adminUserName)
	*  3. 변수명은 한글로 짓지 않기.
	*/
		
	/*
	* 자료형
	* <정수형>
	* short : 2byte		표현 범위 : -32,768 ~ +32,767.
	* int	: 4byte		표현 범위 : -2,147,483,648 ~ 2,147,483,647		(O)
	* long	: 8byte		표현 범위 : 엄청 크다.
	* 
	* <실수형>
	* float : 4byte		부동 소수점 : 실수 7자리							(O)
	* double : 4byte    부동 소수점 : 실수 12자리
	* decimal : 8byte   부동 소수점 : 실수 2..몇자리
	* 
	* <문자형 or 정수형>
	* char  : 1byte		표현 범위 : -128 ~ 127							(O)
	*/

	char word = 'a';
	printf("word의 글자는 : %c\n", word);
	printf("word의 숫자는 : %d\n", word);

	int num = 100;
	printf("int형의 크기는 %dbyte\n", sizeof(int));
	printf("int형 변수 num의 크기는 %dbyte\n", sizeof(num));

	// 실습
	// 2. 문자 5개를 입력받는다.
	//   > 5개의 문자를 글자로 출력
	//   > 5개의 문자를 숫자로 출력.
	// 
	// ex ) 입력 값이 a, b, c, d, e
	//       - 입력된 글자를 : abcde
	//       - 숫자로 바꾸면 : 6465666768

	char word1, word2, word3 = 0; // 5개의 char형 변수 선언.

	printf("첫번째 문자 입력 : ");	

	// 내가 a를 입력후에 엔터를 치면 프로그램은 a와 /n을 입력했다고 감지한 후
	// a를 word1에 대입한다.
	scanf_s("%c", &word1, sizeof(word1));
	rewind(stdin);

	// 이후 /n을 word2에 자동으로 대입하는 문제 때문에
	// rewind(stdin)으로 남아있는 입력 값을 지워준다.
	printf("두번째 문자 입력 : ");
	scanf_s("%c", &word2, sizeof(word2));
	rewind(stdin);

	printf("세번째 문자 입력 : ");
	scanf_s("%c", &word3, sizeof(word3));
	rewind(stdin);

	printf("문자 : %c%c%c\n", word1, word2, word3);
	printf("숫자 : %d, %d, %d\n", word1, word2, word3);


	// 내 이름을 입력 받아서 출력해보자.
	char n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13 = 0;
	printf("이름을 입력하세요 [최대 13글자] : ");
	scanf_s("%c", &n1, sizeof(n1));
	scanf_s("%c", &n2, sizeof(n2));
	scanf_s("%c", &n3, sizeof(n3));
	scanf_s("%c", &n4, sizeof(n4));
	scanf_s("%c", &n5, sizeof(n5));
	scanf_s("%c", &n6, sizeof(n6));
	scanf_s("%c", &n7, sizeof(n7));
	scanf_s("%c", &n8, sizeof(n8));
	scanf_s("%c", &n9, sizeof(n9));
	scanf_s("%c", &n10, sizeof(n10));
	scanf_s("%c", &n11, sizeof(n11));
	scanf_s("%c", &n12, sizeof(n12));
	scanf_s("%c", &n13, sizeof(n13));

	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c", n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13);
}