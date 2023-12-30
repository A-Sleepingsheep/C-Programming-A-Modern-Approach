#include <stdio.h>

int main2_7(void)
{
	int amount;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	int amount_20 = amount / 20;
	int amount_10 = (amount % 20) / 10;
	int amount_5 = (amount % 20 % 10) / 5;
	int amount_1 = amount % 20 % 10 % 5;

	printf("$20 bills: %d\n", amount_20);
	printf("$10 bills: %d\n", amount_10);
	printf(" $5 bills: %d\n", amount_5);
	printf(" $1 bills: %d\n", amount_1);

	return 0;
}