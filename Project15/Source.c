#include <stdio.h>
#include <string.h>

// ����ü Student ����.
//  = ���ο� ���� �ڷ����� ���� �� �Լ��� ������ �ִ� ����� ���� �ڷ���.

// typedef : Ÿ���� ������ (������ ���δ�.)
// typedef ��struct Student { }�� -> Student. (���� ���� �ǹ̴�.)

typedef struct Student
{
	char name[20];
	int age;
	char phoneNum[20];
} Student;

void PrintStudent(Student* student)
{
	// �Ϲ� ����ü�� ���ο� �����Ҷ��� �Ǹ����(.)����
	// ������ ����ü�� ���ο� �����Ҷ��� ���ο� ������(->)����
	printf("�̸�:%s, ����:%d, ��ȣ:%s\n", student->name, student->age, student->phoneNum);
}
Student GetNewStudent()
{
	Student newStudent = { 0 };
	printf("[���ο� �л� ����]\n");
	printf("�̸� : ");
	scanf_s("%[^\n]s", newStudent.name, sizeof(newStudent.name));
	rewind(stdin);

	printf("���� : ");
	scanf_s("%d", &newStudent.age);
	rewind(stdin);

	printf("����ȣ : ");
	scanf_s("%[^\n]s", newStudent.phoneNum, sizeof(newStudent.phoneNum));
	rewind(stdin);

	return newStudent;
}


int main()
{
	// �л���.
	// �̸�, ����, �޴��� ��ȣ
	if (0)
	{
		char name[20] = "AA";
		int age = 40;
		char phoneNum[20] = "010-1234-5785";

		char name2[20] = "BB";
		int age2 = 30;
		char phoneNum2[20] = "010-1111-5555";

		printf("�̸�:%s, ����:%d, �޴�����ȣ:%s\n", name, age, phoneNum);
	}
	if (0)
	{
		Student s = { "AA", 10, "010-1111-2222" };
		PrintStudent(&s);

		Student students[3] = { {"AA", 10, "1111"}, {"BB", 20, "2222"}, {"CC", 30,"3333"} };

		// �迭�� ũ�� / �迭 �ϳ��� �ڷ����� ũ�� => �迭�� ����.
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
		(����) �л��� �ִ� 10����� �߰��� �� �ִ�.

		[�⼮��]		
		1. �л� ��� ����
		2. �л� �߰��ϱ�.
		���� : (�Է�)


		[1] ���ý�
		�̸�		����		��ȣ
		------------------------------
		AAAA    30      010-1111-2222
		BBBB    20      010-6571-2046
		------------------------------

		[2] ���ý�
		[�л� �߰�]
		�̸� : ###
		���� : ##
		��ȣ : ###-####-####
		�л� �߰� �Ϸ�.

		-> �������� ���ư���.
	*/
}