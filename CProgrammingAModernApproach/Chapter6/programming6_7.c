#include <stdio.h>

int main6_7(void)
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (int i=1,odd=3,square = 1; i <= n; odd += 2)
	{
		printf("%10d%10d\n", i, square);
		++i;
		square += odd;
	}

	return 0;
}

int main6_7_2(void)
{

	int i, n, odd, square;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	odd = 3;
	for (i = 1, square = 1; i <= n; odd += 2, ++i)
	{
		printf("%10d%10d\n", i, square);
		square += odd;
	}
	return 0;
}
