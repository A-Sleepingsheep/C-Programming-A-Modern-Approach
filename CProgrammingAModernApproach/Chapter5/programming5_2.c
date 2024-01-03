#include <stdio.h>	

int main5_2(void)
{
	int hour, min;

	printf("Enter a 24-hour time:");
	scanf("%d:%d", &hour, &min);

	printf("Equivalent 12-hour: ");
	if (hour <= 12)
		printf("%d:%d AM", hour, min);
	else
		printf("%d:%d PM", hour - 12, min);

	return 0;
}