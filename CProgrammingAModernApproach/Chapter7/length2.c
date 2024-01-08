#include <stdio.h>

int main7_3(void)
{
	int len = 0;

	printf("Enter a message: ");
	while (getchar() != '\n')
	{
		len++;
	}
	printf("Your message was %d character(s) long.\n", len);
	return 0;
}