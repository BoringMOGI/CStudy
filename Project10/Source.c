#include<stdio.h>		// standrad input output.
#include<conio.h>		// consol input output.
#include<windows.h>		// �������� ����� ���ڴ�.

// ���α׷� ������.
int main()
{
	// for�� (�ݺ���)
	// = Ư�� Ƚ����ŭ �ݺ��Ѵ�.
	if (0)
	{
		for (int i = 0; i < 10; i++)
		{
			printf("Hello?\n");
		}
	}

	if (0)
	{
		// while�� (�ݺ���)
		// = Ư�� ������ �����ϴ� �� ��� �ݺ��Ѵ�.

		// 1.���� ��ġ�� ��Ÿ���� x,y�� ���� ����. (�⺻:0,0)
		// 2.����ڿ��� Ű �Է��� �޴´�.
		// 3.�б⹮(switch)�� �̿��� wasd�� ��� �ش� �������� 1 �̵�.
		// 4.���� ���� ��ġ�� ����Ѵ�.

		for (int i = 0; i < 3; i++)
		{
			int temp = 10;
			temp += 10;
			printf("temp : %d\n", temp);

			break;			// for���� break. for���� ������.
		}

		int x = 0;
		int y = 0;
		char input = 0;

		while (input != 'q')
		{
			system("cls");
			printf("���� ��ġ (x:%d, y:%d)\n", x, y);
			printf("�̵��� ������ �����ϼ��� [WASD]");
			input = _getch();

			/*
			scanf_s("%c", &input, sizeof(input));
			rewind(stdin);
			*/

			switch (input)
			{
			case 'w':
				y += 1;
				break;	// switch�� ������ break. switch���� ������.
			}

			// ���� q�� �����ų� esc(27)�� ������ ���.
			if (input == 'q' || input == 27)
				break;		// while�� ������ break. while���� ������.
		}
	}

	if (0)
	{
		char input = 0;
		int posX = 5;
		int posY = 5;

		while (1)
		{
			system("cls");			// ȭ�� �����.

			// Ŀ���� ��ġ�� posX, posY�� ���缭 �����δ�.
			HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
			COORD pos;
			pos.X = posX;
			pos.Y = posY;
			SetConsoleCursorPosition(handle, pos);
			// ===============================================================

			printf("��");			// ���� �� ���.

			input = _getch();		// ���� �ϳ� �Է� �ޱ�.
			switch (input)			// ���ڿ� ���� �б⹮.
			{
			case 'a':				// ���� 'a'�� ���.
				posX -= 1;			// posX�� ���� 1 ����.
				break;
			case 'd':				// ���� 'd'�� ���.
				posX += 1;			// posX�� ���� 1 ����.
				break;
			}
		}
	}
		
	char input = 27;

	// while��
	//  = ���� üũ �� ����.
	while (input != 27)
	{
		printf("while �ݺ���\n");
		input = _getch();
	}

	// do-while��
	//  = ���� ���� �� ���� üũ.
	do
	{
		printf("do-while �ݺ���\n");
		input = _getch();
	} 	
	while (input != 27);
}