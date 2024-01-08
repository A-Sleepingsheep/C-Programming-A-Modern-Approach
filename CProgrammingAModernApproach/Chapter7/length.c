#include <stdio.h>

int main7_2(void)
{
	char ch;
	int len = 0;

	printf("Enter a message: ");
	ch = getchar();
	while (ch != '\n')
	{
		len++;
		ch = getchar();
	}
	printf("Your message wad %d character(s) long.\n", len);

	return 0;
}