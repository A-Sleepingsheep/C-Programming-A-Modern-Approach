#include <stdio.h>

int main3_4(void)
{
	int first, second, third;

	printf("Enter phone number [(XXX) XXX-XXXX]: ");
	scanf("(%d) %d-%d", &first, &second, &third);

	printf("You entered %d.%d.%d", first, second, third);

	return 0;
}