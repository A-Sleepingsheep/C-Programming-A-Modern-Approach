//根据x的值计算：3X^5+2X^4-5X^3-X^2+7X-6

#include <stdio.h>

int main5(void)
{
	int x, value;

	printf("Enter the number of x: ");
	scanf("%d", &x);

	value = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	printf("The value is %d.", value);

	return 0;
}