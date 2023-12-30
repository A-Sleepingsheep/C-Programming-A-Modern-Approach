//根据x的值计算：((((3X+2)X-5)X-1)X+7)X-6

#include <stdio.h>

int main2_6(void)
{
	int x, value;

	printf("Enter the number of x: ");
	scanf("%d", &x);

	value = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	printf("The value is %d.", value);

	return 0;
}