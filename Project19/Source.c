#include <stdio.h>			// <>는 기본 내장 헤더 파일
#include "Date.h"			// ""는 사용자가 만든 헤더 파일

int main()
{
	Birthday birthday = { 2000, 01, 01, SAT };
	PrintBirthday(&birthday);
}
