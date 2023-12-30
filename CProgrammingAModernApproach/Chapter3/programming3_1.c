//日期格式

#include <stdio.h>	

int main3_1(void)
{
	int month, day, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Your entered the date %.4d%.2d%.2d\n", year, month, day);

	return 0;
}