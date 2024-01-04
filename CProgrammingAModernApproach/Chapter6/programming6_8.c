#include <stdio.h>

int main6_8(void)
{
	int days, start;

	printf("Enter number of days in month : ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	for (int i = 1; i < start; i++)
	{
		printf("   ");
	}

	for (int i = 1; i <= days; i++)
	{
		printf("%2d ", i);
		if ((i + start - 1) % 7 == 0)
			printf("\n");
	}

	return 0;
}

int main6_8_2(void)
{

	int n, day, weekday, i;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Mon, 7=Sun): ");
	scanf("%d", &weekday);

	printf("\n Mo Tu We Th Fr Sa Su\n");

	for (i = 1, day = 1; i <= n + weekday - 1; i++)
	{
		if (i < weekday)
			printf("   ");
		else
			printf("%3d", day++);
		if (i % 7 == 0)
			printf("\n");
	}

	printf("\n");
	return 0;
}