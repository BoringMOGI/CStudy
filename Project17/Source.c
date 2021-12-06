#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct House
{
	int floor;			// 몇 층.
	int roomNumber;		// 몇 호.
};

// 구조체 : 사용자 지정 자료형. 내부에 여러가지 자료형을 가지고 있다.
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

void BuyGoods(int money)
{
	printf("투입한 금액 : %d원\n", money);
}

int ShowMain()		// 0:엔터를 누르지 않았다. 1:엔터를 눌렀다.
{
	system("cls");
	printf("[학생부]\n");
	printf("%s학생 목록\n",		mainIndex == 0 ? "▶" : "  ");
	printf("%s학생 추가하기\n",	mainIndex == 1 ? "▶" : "  ");
	printf("%s나가기\n",			mainIndex == 2 ? "▶" : "  ");

	char input = _getch();		// 사용자가 입력한 키 하나를 반환.
	switch (input)
	{
	case 72:		// 위 방향키.
		mainIndex -= 1;
		break;
	case 80:		// 아래 방향키.
		mainIndex += 1;
		break;
	case 13:		// 엔터 키.
		return 1;	// 정수 1을 리턴한다. (return문을 만나면 거기서 함수는 끝이 난다.)
	}

	if (mainIndex < minMainIndex)			// mainIndex가 최소 값보다 낮아지면
		mainIndex = minMainIndex;			// 최소 값으로 고정.
	else if (mainIndex > maxMainIndex)		// mainIndex가 최대 값보다 높아지면
		mainIndex = maxMainIndex;			// 최대 값으로 고정.

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
			printf("%s %d %s\n", students[i].name, students[i].age, students[i].phone);
			//printf("%-10s %-6d %-14s\n", students[i].name, students[i].age, students[i].phone);
		}
	}
	printf("------------------------------------\n");

	_getch();
}
void AddStudent(Student* students, int* studentCount)
{
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

int main2()
{
	// 구조체 (struct)
	// => 여러가지 데이터를 가지고 있는 집합체.
	Student students[10];
	int studentCount = 0;

	int process = 1;
	while (process)
	{
		// ShowMain함수가 int값을 반환하는데 0 혹은 1을 반환한다.
		// 1을 반환하는 순간은 ShowMain에서 엔터를 눌렀을 경우다.
		// 그 외에는 전부 0을 반환한다.
		if (ShowMain())				
		{
			switch (mainIndex)
			{
			case 0:		// 학생 목록.
				PrintStudent(students, studentCount);
				break;
			case 1:		// 학생 추가.
				AddStudent(students, &studentCount);
				break;
			case 2:		// 나가기.
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