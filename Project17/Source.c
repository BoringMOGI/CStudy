#include <stdio.h>
#include <conio.h>
#include <windows.h>

struct House
{
	int floor;			// �� ��.
	int roomNumber;		// �� ȣ.
};

// ����ü : ����� ���� �ڷ���. ���ο� �������� �ڷ����� ������ �ִ�.
typedef struct Student
{
	char name[20];
	int age;
	char phone[20];
}Student;

// �������� : ��� �������� ���ԵǾ����� ���� ����. ���α׷��� ����� �� �޸𸮰� �����ȴ�.
// �������� : Ư���� ����(�Լ� ��)���� ������ ����. �ش� ������ ����� �޸𸮰� �����ȴ�.
int mainIndex = 0;
int minMainIndex = 0;
int maxMainIndex = 2;

int maxStudentCount = 10;

void BuyGoods(int money)
{
	printf("������ �ݾ� : %d��\n", money);
}

int ShowMain()		// 0:���͸� ������ �ʾҴ�. 1:���͸� ������.
{
	system("cls");
	printf("[�л���]\n");
	printf("%s�л� ���\n",		mainIndex == 0 ? "��" : "  ");
	printf("%s�л� �߰��ϱ�\n",	mainIndex == 1 ? "��" : "  ");
	printf("%s������\n",			mainIndex == 2 ? "��" : "  ");

	char input = _getch();		// ����ڰ� �Է��� Ű �ϳ��� ��ȯ.
	switch (input)
	{
	case 72:		// �� ����Ű.
		mainIndex -= 1;
		break;
	case 80:		// �Ʒ� ����Ű.
		mainIndex += 1;
		break;
	case 13:		// ���� Ű.
		return 1;	// ���� 1�� �����Ѵ�. (return���� ������ �ű⼭ �Լ��� ���� ����.)
	}

	if (mainIndex < minMainIndex)			// mainIndex�� �ּ� ������ ��������
		mainIndex = minMainIndex;			// �ּ� ������ ����.
	else if (mainIndex > maxMainIndex)		// mainIndex�� �ִ� ������ ��������
		mainIndex = maxMainIndex;			// �ִ� ������ ����.

	return 0;
}
void PrintStudent(Student* students, int studentCount)
{
	system("cls");
	printf("�̸�       ����   ��ȣ\n");
	printf("------------------------------------\n");
	
	if (studentCount <= 0)
	{
		printf("��ϵ� �л��� �����ϴ�.\n");
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
		printf("�� �̻� �л��� �߰��� �� �����ϴ�.\n");
		_getch();

		return; // ��ȯ���� void�� return�� ���� �ش� �ٿ��� �Լ��� ���� �� �ִ�.
	}

	system("cls");
	printf("[�л� �߰�]\n");
	printf("�̸�:");
	scanf_s("%s", students[*studentCount].name, sizeof(students[*studentCount].name));
	rewind(stdin);

	printf("����:");
	scanf_s("%d", &students[*studentCount].age);
	rewind(stdin);

	printf("��ȣ:");
	scanf_s("%s", students[*studentCount].phone, sizeof(students[*studentCount].phone));
	rewind(stdin);

	*studentCount += 1;
	printf("�л� �߰� �Ϸ�!\n");
	getchar();
}

int main2()
{
	// ����ü (struct)
	// => �������� �����͸� ������ �ִ� ����ü.
	Student students[10];
	int studentCount = 0;

	int process = 1;
	while (process)
	{
		// ShowMain�Լ��� int���� ��ȯ�ϴµ� 0 Ȥ�� 1�� ��ȯ�Ѵ�.
		// 1�� ��ȯ�ϴ� ������ ShowMain���� ���͸� ������ ����.
		// �� �ܿ��� ���� 0�� ��ȯ�Ѵ�.
		if (ShowMain())				
		{
			switch (mainIndex)
			{
			case 0:		// �л� ���.
				PrintStudent(students, studentCount);
				break;
			case 1:		// �л� �߰�.
				AddStudent(students, &studentCount);
				break;
			case 2:		// ������.
				process = 0;
				system("cls");
				printf("���α׷� ����\n");
				break;
			default:
				printf("�޴� ������ �߸��Ǿ����ϴ�.\n");
				break;
			}
		}
	}
}