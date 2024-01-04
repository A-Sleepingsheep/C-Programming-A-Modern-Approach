#include <stdio.h>

int main6_1_1(void)
{
	float num, max = 0.0f;

	printf("Enter a number: ");
	scanf("%f", &num);

	while (num > 0)
	{
		if (num > max)
			max = num;
		printf("Enter a number: ");
		scanf("%f", &num);
	}

	printf("The Largest number entered was %f", max);

	return 0;
}


int main6_1_2(void)
{

	float largest = 0.0f;
	float current;

	do
	{
		printf("Enter a number: ");
		scanf("%f", &current);

		if (current > largest)
			largest = current;
	} while (current > 0);

	printf("\nThe largest number entered was %f\n", largest);

	return 0;
}

int main6_1_3(void)
{

	int m, n, r;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);

	while (n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}

	printf("Greatest common divisor: %d\n", m);

	return 0;
}
