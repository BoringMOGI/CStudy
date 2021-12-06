#include <stdio.h>
#include <string.h>

// 구조체 Student 선언.
//  = 내부에 여러 자료형의 변수 및 함수를 가지고 있는 사용자 지정 자료형.

// typedef : 타입의 재정의 (별명을 붙인다.)
// typedef 『struct Student { }』 -> Student. (둘은 같은 의미다.)

typedef struct Student
{
	char name[20];
	int age;
	char phoneNum[20];
} Student;

void PrintStudent(Student* student)
{
	// 일반 구조체의 내부에 접근할때는 피리어드(.)으로
	// 포인터 구조체의 내부에 접근할때는 에로우 연산자(->)으로
	printf("이름:%s, 나이:%d, 번호:%s\n", student->name, student->age, student->phoneNum);
}
Student GetNewStudent()
{
	Student newStudent = { 0 };
	printf("[새로운 학생 생성]\n");
	printf("이름 : ");
	scanf_s("%[^\n]s", newStudent.name, sizeof(newStudent.name));
	rewind(stdin);

	printf("나이 : ");
	scanf_s("%d", &newStudent.age);
	rewind(stdin);

	printf("폰번호 : ");
	scanf_s("%[^\n]s", newStudent.phoneNum, sizeof(newStudent.phoneNum));
	rewind(stdin);

	return newStudent;
}


int main()
{
	// 학생부.
	// 이름, 나이, 휴대폰 번호
	if (0)
	{
		char name[20] = "AA";
		int age = 40;
		char phoneNum[20] = "010-1234-5785";

		char name2[20] = "BB";
		int age2 = 30;
		char phoneNum2[20] = "010-1111-5555";

		printf("이름:%s, 나이:%d, 휴대폰번호:%s\n", name, age, phoneNum);
	}
	if (0)
	{
		Student s = { "AA", 10, "010-1111-2222" };
		PrintStudent(&s);

		Student students[3] = { {"AA", 10, "1111"}, {"BB", 20, "2222"}, {"CC", 30,"3333"} };

		// 배열의 크기 / 배열 하나의 자료형의 크기 => 배열의 길이.
		int length = sizeof(students) / sizeof(Student);
		for (int i = 0; i < length; i++)
			PrintStudent(&students[i]);

		int number = 10;
		printf("number's size : %dbyte\n", sizeof(number));
		printf("s's size : %dbyte\n", sizeof(s));
		printf("students's size : %dbyte\n", sizeof(students));

		int numbers[200];
		printf("numbers length : %d\n", sizeof(numbers) / sizeof(int));
	}

	Student student = GetNewStudent();
	PrintStudent(&student);



	/*
		(조건) 학생은 최대 10명까지 추가할 수 있다.

		[출석부]		
		1. 학생 목록 보기
		2. 학생 추가하기.
		선택 : (입력)


		[1] 선택시
		이름		나이		번호
		------------------------------
		AAAA    30      010-1111-2222
		BBBB    20      010-6571-2046
		------------------------------

		[2] 선택시
		[학생 추가]
		이름 : ###
		나이 : ##
		번호 : ###-####-####
		학생 추가 완료.

		-> 메인으로 돌아가기.
	*/
}