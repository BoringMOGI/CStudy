#include<stdio.h>
#include<string.h>		// ���ڿ� ���� ����� ����ϰڴ�.

int main()
{
	if (0)
	{
		int number = 10;	// ���� : ���� '1��' ���� �� �ִ� ���ϴ� ��.

		int num;
		num = 10;

		// �迭(Array)
		int numbers[3];		// ũ�� 3�� int�� �迭 numbers ����.
		numbers[0] = 10;
		numbers[1] = 20;
		numbers[2] = 30;

		int scores[3] = { 30, 40, 50 };				// �迭 ����� ���ÿ� �ʱ�ȭ.
		char texts[4] = { 'A', 'B', 'C', '\0' };	// �迭 ����� ���ÿ� �ʱ�ȭ.

		char myName[10] = "CAT";
		printf("%s\n", myName);			// %s : ������ �迭.

		for (int i = 0; i < 10; i++)
		{
			printf("myName[%d] : %c(%x)\n", i, myName[i], myName[i]);
		}

		char word[4] = "NET";		// 'N' 'E' 'T' '\0'.

		word[0] = 'T';
		word[2] = 'N';
		printf("%s\n", word);

		// ���ڿ� �Է� �ޱ�.
		char name[20];
		printf("�̸��� �Է��ϼ��� : ");
		scanf_s("%[^\n]s", name, sizeof(name));		// %[&\n]s : �ش� ���ڿ� ������ \n�θ� �����ض�.

		for (int i = 0; i < 20; i++)
		{
			// name[i]�� �ڷ����� ����(char)��. �װ��� ������ ���� name�� ���ڿ��̴�.
			printf("name[%d] : %c\n", i, name[i]);
		}

		printf("���� �̸��� : %s��.\n", name);
	}

	int number = 0;
	printf("%d\n", number);
	printf("%p\n", &number);

	int numbers[3] = { 0, };
	printf("%p\n", numbers);

	char name[20] = "\0";
	printf("�̸��� �Է��ϼ��� : ");
	scanf_s("%[^\n]s", name, sizeof(name));
	rewind(stdin);

	// strlen : string length (���ڿ��� ���̸� ��ȯ)
	printf("�̸��� ���� : %d\n", strlen(name));
	printf("�̸� : %s\n", name);

	int nameLength = strlen(name);
	for (int i = 0; i < nameLength; i++)
	{
		printf("name[%d] : %c\n", i, name[i]);
	}

	/*  ������ strcpy�� �ϴ� ��.
	name[0] = 'A';
	name[1] = 'B';
	name[2] = 'C';
	name[3] = '\0';
	*/

	// strcpy : string copy ���ڿ� ����.
	strcpy_s(name, sizeof(name), "ABC");
	printf("name : %s\n", name);
}