#include <stdio.h>

int main6_2_1(void)
{
	int n1, n2, gcd = 2,init;

	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);

	if (n1 < n2)
		init = n1;
	else
		init = n2;

	for (int i = 2; i <= init; i++)
	{
		if (n1 % i == 0 && n2 % i == 0)
		{
			gcd = i;
		}
	}

	printf("Greatest common divisor: %d", gcd);

	return 0;
}

int main6_2_2(void)
{
	int m, n, gcd;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	while (n != 0)
	{
		int temp = m;
		m = n;
		n = temp % n;
	}

	printf("Greatest common divisor: %d", m);

	return 0;
}