#include "stdio.h"
#include "Date.h"

void PrintBirthday(Birthday* birthday)
{
	printf("%d��%d��%d��", birthday->year, birthday->month, birthday->day);
	switch (birthday->week)
	{
	case SUN:
		printf("(�Ͽ���)\n");
		break;
	case MON:
		printf("(������)\n");
		break;
	case TUE:
		printf("(ȭ����)\n");
		break;
	case WED:
		printf("(������)\n");
		break;
	case THU:
		printf("(�����)\n");
		break;
	case FRI:
		printf("(�ݿ���)\n");
		break;
	case SAT:
		printf("(�����)\n");
		break;
	}
}