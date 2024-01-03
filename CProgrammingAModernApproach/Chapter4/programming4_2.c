#include <stdio.h>

int main4_2(void)
{
	int num;

	printf("Enter a three-digit number: ");
	scanf("%d", &num);

	printf("The reversal is: %1d%1d%1d", num % 10, num / 10 % 10, num / 100 % 10);

	return 0;
}