#include <stdio.h>

int main6_3(void)
{
	int m, n,gcd,init;

	printf("Enter a fraction: ");
	scanf("%d/%d", &m, &n);

	if (m < n)
		init = m;
	else
		init = n;

	for (int i = 2; i <= init; i++)
	{
		if (m % i == 0 && n % i == 0)
		{
			gcd = i;
		}
	}

	printf("In lowest terms: %d/%d", m / gcd, n / gcd);

	return 0;
}

int main6_3_2(void)
{

	int num, denom, n, m, r;

	printf("Enter a fraction: ");
	scanf("%d /%d", &num, &denom);

	m = num;
	n = denom;

	while (n != 0)
	{
		r = m % n;
		m = n;
		n = r;
	}

	printf("In lowest terms: %d/%d\n", num / m, denom / m);

	return 0;
}