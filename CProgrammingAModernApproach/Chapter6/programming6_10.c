#include <stdio.h>

int main6_10(void)
{
	int month1, month2, day1, day2, year1, year2;
	int e_month = 10000, e_day = 10000, e_year = 10000;

	do
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &month1, &day1, &year1);

		if (month1 == 0 && day1 == 0 && year1 == 0) break;
		if (year1 < e_year)
		{
			e_year = year1;
			e_month = month1;
			e_day = day1;
		}

		else if (year1 > e_year);
		else if (month1 < e_month)
		{
			e_year = year1;
			e_month = month1;
			e_day = day1;
		}
		else if (month1 > e_month);
		else if (day1 < e_day)
		{
			e_year = year1;
			e_month = month1;
			e_day = day1;
		}
	} while (month1 != 0 && day1 != 0 && year1 != 0);

	printf("%d/%d/%.2d is the earliest date.", e_month, e_day, e_year);

	return 0;
}

int main6_10_2(void)
{

	int d1, d2, m1, m2, y1, y2;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d /%d /%d", &m1, &d1, &y1);

	while (1)
	{
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d /%d /%d", &m2, &d2, &y2);

		if (d2 == 0 && m2 == 0 && y2 == 0)
			break;
		if (y2 < y1 || (y1 == y2 && m2 < m1) ||
			(y1 == y2 && m1 == m2 && d2 < d1))
		{

			d1 = d2;
			m1 = m2;
			y1 = y2;
		}
	}

	printf("%d/%d/%.2d is the earliest date\n", m1, d1, y1);

	return 0;
}