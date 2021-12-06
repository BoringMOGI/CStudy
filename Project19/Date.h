
typedef struct Birthday
{
	int year;		// 년.
	int month;		// 월.
	int day;		// 일.
	int week;		// 요일. (0:일, 1:월, 2:화, 3:수, 4:목, 5:금, 6:토)

}Birthday;

// #define : 치환
//  = SUM 이라는 문자는 0과 동일하다.
#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

void PrintBirthday(Birthday* birthday);
