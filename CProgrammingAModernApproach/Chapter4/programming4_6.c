#include <stdio.h>

int main4_6(void)
{
	int i1, i2, i3, i4, i5, i6,j1, j2, j3, j4, j5,j6, first_num, second_num, total;

	printf("Enter the first 12 digits of a EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, &i6, &j1, &j2, &j3, &j4, &j5, &j6);

	first_num = i2 + i4 + i6 + j2 + j4 + j6;
	second_num = i1 + i3 + i5 + j1 + j3 + j5;
	total = 3 * first_num + second_num;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	return 0;
}