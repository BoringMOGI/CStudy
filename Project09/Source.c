#include <stdio.h>

int main()
{
	if (0)
	{
		// Hello�� 5�� ���.
		// �ݺ��� (for��)

		// 1. �÷��̾�� ���� �ϳ��� �Է¹޴´�.
		// 2. �ش� ���� ��ŭ Hello�� ����Ѵ�.
		int count = 0;
		printf("�ݺ��� Ƚ���� �Է��ϼ��� : ");
		scanf_s("%d", &count);
		rewind(stdin);

		for (int i = 0; i < count; i++)
		{
			// n��° Hello.
			printf("%d��° Hello\n", i + 1);
		}
	}

	// �ǽ� - ������.
	// 1. ����� ����� ������ ����ڿ��� �Է��� �޴´�.
	// 1-1. ���� 2~9 �̿��� ���� �ԷµǸ� '�߸��� ���Դϴ�' ��� �� ����.
	// 2. ���� 3�̶�� �Է������� 3x1 ~ 3x9���� ���.
	// 3. for���� �̿��ؾ� �Ѵ�.

	int digit = 0;
	printf("����� ���� �Է��ϼ��� : ");
	scanf_s("%d", &digit);
	rewind(stdin);
		
	//if(!(2 <= digit && digit <= 9))
	if (digit < 2 || 9 < digit)
	{
		printf("�߸��� ���̴�.\n");
	}
	else
	{
		for (int i = digit; i <= 5; i++)
		{
			printf("%d��\n", i);

			for (int k = 1; k <= 5; k++)
			{
				printf("%d x %d = %d\n", i, k, i * k);
			}			
		}
	}

	/*
	* 3 x 1 = 3
	* 3 x 2 = 6
	* 3 x 3 = 9
	* 
	* ....
	* 
	* 3 x 8 = 24
	* 3 x 9 = 27
	*/

}