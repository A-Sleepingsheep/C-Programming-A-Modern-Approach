#include <stdio.h>

int main_6_1(void)
{
	int i, n;

	printf("This prigram prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	i = 1;
	while (i <= n)
	{
		printf("%10d%10d\n", i, i * i);
		++i;
	}

	return 0;
}