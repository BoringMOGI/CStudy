#include <stdio.h>

int main()
{
	//int number = 0;						// int�� ���� number ���� �� �ʱ�ȭ.
	//printf("���ڸ� �Է��ϼ��� : ");
	//scanf_s("%d", &number);				// �Է¹�.
	//printf("number : %d\n", number);	// ��¹�.

	// ������ ��Ģ.
	/*
		1. ù ���ڸ� ���ڷ� �� �� ����. 00num  (X) n0012ber(O)
		 = ó���� ���ڸ� ���� �ν��ϱ� ������ �ȵȴ�.
	 
		2. Ư������, ���� �Ұ���.		 %@#$num(X) num ber(X)
		 = Ư�����ڸ� Ư���� ����� ������ �ְ�, ������ �� ��ɾ �����ϱ� ������.

		3. ��,�ҹ��ڸ� '����' �����Ѵ�.

		4. �ߺ� �̸� �Ұ���.

		5. �̸� ����� 'Ű����'�� �Ұ���. int int;(X)
	*/

	/*
	* ���α׷��ӵ� ������ ���. (Coding-Style)
	*  1. �������� ù ������ �ҹ���. �Լ����� ù ������ �빮��.
	*  2. ������ ���� ��� �ܾ ù ������ �빮��. (admin user name -> adminUserName)
	*  3. �������� �ѱ۷� ���� �ʱ�.
	*/
		
	/*
	* �ڷ���
	* <������>
	* short : 2byte		ǥ�� ���� : -32,768 ~ +32,767.
	* int	: 4byte		ǥ�� ���� : -2,147,483,648 ~ 2,147,483,647		(O)
	* long	: 8byte		ǥ�� ���� : ��û ũ��.
	* 
	* <�Ǽ���>
	* float : 4byte		�ε� �Ҽ��� : �Ǽ� 7�ڸ�							(O)
	* double : 4byte    �ε� �Ҽ��� : �Ǽ� 12�ڸ�
	* decimal : 8byte   �ε� �Ҽ��� : �Ǽ� 2..���ڸ�
	* 
	* <������ or ������>
	* char  : 1byte		ǥ�� ���� : -128 ~ 127							(O)
	*/

	char word = 'a';
	printf("word�� ���ڴ� : %c\n", word);
	printf("word�� ���ڴ� : %d\n", word);

	int num = 100;
	printf("int���� ũ��� %dbyte\n", sizeof(int));
	printf("int�� ���� num�� ũ��� %dbyte\n", sizeof(num));

	// �ǽ�
	// 2. ���� 5���� �Է¹޴´�.
	//   > 5���� ���ڸ� ���ڷ� ���
	//   > 5���� ���ڸ� ���ڷ� ���.
	// 
	// ex ) �Է� ���� a, b, c, d, e
	//       - �Էµ� ���ڸ� : abcde
	//       - ���ڷ� �ٲٸ� : 6465666768

	char word1, word2, word3 = 0; // 5���� char�� ���� ����.

	printf("ù��° ���� �Է� : ");	

	// ���� a�� �Է��Ŀ� ���͸� ġ�� ���α׷��� a�� /n�� �Է��ߴٰ� ������ ��
	// a�� word1�� �����Ѵ�.
	scanf_s("%c", &word1, sizeof(word1));
	rewind(stdin);

	// ���� /n�� word2�� �ڵ����� �����ϴ� ���� ������
	// rewind(stdin)���� �����ִ� �Է� ���� �����ش�.
	printf("�ι�° ���� �Է� : ");
	scanf_s("%c", &word2, sizeof(word2));
	rewind(stdin);

	printf("����° ���� �Է� : ");
	scanf_s("%c", &word3, sizeof(word3));
	rewind(stdin);

	printf("���� : %c%c%c\n", word1, word2, word3);
	printf("���� : %d, %d, %d\n", word1, word2, word3);


	// �� �̸��� �Է� �޾Ƽ� ����غ���.
	char n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13 = 0;
	printf("�̸��� �Է��ϼ��� [�ִ� 13����] : ");
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