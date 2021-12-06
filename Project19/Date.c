#include "stdio.h"
#include "Date.h"

void PrintBirthday(Birthday* birthday)
{
	printf("%d년%d월%d일", birthday->year, birthday->month, birthday->day);
	switch (birthday->week)
	{
	case SUN:
		printf("(일요일)\n");
		break;
	case MON:
		printf("(월요일)\n");
		break;
	case TUE:
		printf("(화요일)\n");
		break;
	case WED:
		printf("(수요일)\n");
		break;
	case THU:
		printf("(목요일)\n");
		break;
	case FRI:
		printf("(금요일)\n");
		break;
	case SAT:
		printf("(토요일)\n");
		break;
	}
}