#include <stdio.h>

int main4_4(void)
{
	int num, n1, n2, n3, n4, n5;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &num);

	n5 = num % 8;
	n4 = num / 8 % 8;
	n3 = num / 8 / 8 % 8;
	n2 = num / 8 / 8 / 8 % 8;
	n1 = num / 8 / 8 / 8 / 8 / 8 % 8;

	printf("In octal, your number is: %1d%1d%1d%1d%1d\n", n1, n2, n3, n4, n5);

	printf("In another way: %05o", num);

	return 0;

}