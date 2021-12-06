#include <stdio.h>
#include <conio.h>
#include <windows.h>

typedef struct Student
{
	char name[20];
	int age;
	char phone[20];
}Student;

// 전역변수 : 어떠한 지역에도 포함되어있지 않은 변수. 프로그램이 종료될 때 메모리가 해제된다.
// 지역변수 : 특정한 지역(함수 등)에서 생성된 변수. 해당 지역을 벗어나면 메모리가 해제된다.
int mainIndex = 0;
int minMainIndex = 0;
int maxMainIndex = 2;

int maxStudentCount = 10;

int ShowMain()		// 0:엔터를 누르지 않았다. 1:엔터를 눌렀다.
{
	system("cls");
	printf("[학생부]\n");
	printf("%s학생 목록\n", mainIndex == 0 ? "▶" : "  ");
	printf("%s학생 추가하기\n", mainIndex == 1 ? "▶" : "  ");
	printf("%s나가기\n", mainIndex == 2 ? "▶" : "  ");

	char input = _getch();
	switch (input)
	{
	case 72:		// 위 방향키.
		mainIndex -= 1;
		break;
	case 80:		// 아래 방향키.
		mainIndex += 1;
		break;
	case 13:
		return 1;	// 정수 1을 리턴한다. (return문을 만나면 거기서 함수는 끝이 난다.)
	}

	if (mainIndex < minMainIndex)
		mainIndex = minMainIndex;
	else if (mainIndex > maxMainIndex)
		mainIndex = maxMainIndex;

	return 0;
}
void PrintStudent(Student* students, int studentCount)
{
	system("cls");
	printf("이름       나이   번호\n");
	printf("------------------------------------\n");
	
	if (studentCount <= 0)
	{
		printf("등록된 학생이 없습니다.\n");
	}
	else
	{
		for (int i = 0; i < studentCount; i++)
		{
			printf("%-10s %-6d %-14s\n", students[i].name, students[i].age, students[i].phone);
		}
	}
	printf("------------------------------------\n");

	getchar();
}
void AddStudent(Student* students, int* studentCount)
{
	// 
	if (*studentCount >= maxStudentCount)
	{
		printf("더 이상 학생을 추가할 수 없습니다.\n");
		_getch();

		return; // 반환형이 void면 return만 쓰고 해당 줄에서 함수를 끝낼 수 있다.
	}

	system("cls");
	printf("[학생 추가]\n");
	printf("이름:");
	scanf_s("%s", students[*studentCount].name, sizeof(students[*studentCount].name));
	rewind(stdin);

	printf("나이:");
	scanf_s("%d", &students[*studentCount].age);
	rewind(stdin);

	printf("번호:");
	scanf_s("%s", students[*studentCount].phone, sizeof(students[*studentCount].phone));
	rewind(stdin);

	*studentCount += 1;
	printf("학생 추가 완료!\n");
	getchar();
}

int main()
{
	// 구조체 (struct)
	// => 여러가지 데이터를 가지고 있는 집합체.
	Student students[10];
	int studentCount = 0;

	int process = 1;
	while (process)
	{
		if (ShowMain())
		{
			switch (mainIndex)
			{
			case 0:
				PrintStudent(students, studentCount);
				break;
			case 1:
				AddStudent(students, &studentCount);
				break;
			case 2:
				process = 0;
				system("cls");
				printf("프로그램 종료\n");
				break;
			default:
				printf("메뉴 선택이 잘못되었습니다.\n");
				break;
			}
		}
	}
}