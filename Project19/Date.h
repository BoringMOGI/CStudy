
typedef struct Birthday
{
	int year;		// ��.
	int month;		// ��.
	int day;		// ��.
	int week;		// ����. (0:��, 1:��, 2:ȭ, 3:��, 4:��, 5:��, 6:��)

}Birthday;

// #define : ġȯ
//  = SUM �̶�� ���ڴ� 0�� �����ϴ�.
#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

void PrintBirthday(Birthday* birthday);
