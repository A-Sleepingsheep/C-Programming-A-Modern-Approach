#include <stdio.h>

int main4_1(void)
{
	int num;

	printf("Enter a two-digit number: ");
	scanf("%d", &num);

	printf("The reversal is: %1d%1d", num % 10, num / 10 % 10);

	return 0;
}