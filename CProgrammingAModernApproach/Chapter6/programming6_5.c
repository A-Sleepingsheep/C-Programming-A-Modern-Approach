#include <stdio.h>

int main6_5(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	printf("The reversal is: ");

	do
	{
		printf("%d", num % 10);
		num /= 10;
	} while (num != 0);

	return 0;
}