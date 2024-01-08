#include <stdio.h>

int main6_8(void)
{
	int days, start;

	printf("Enter number of days in month : ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start);

	for (int i = 1; i < start; i++)
	{
		printf("   ");
	}

	for (int i = 1; i <= days; i++)
	{
		printf("%2d ", i);
		if ((i + start - 1) % 7 == 0)
			printf("\n");
	}

	return 0;
}

int main6_8_2(void)
{

	int n, day, weekday, i;

	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Mon, 7=Sun): ");
	scanf("%d", &weekday);

	printf("\n Mo Tu We Th Fr Sa Su\n");

	for (i = 1, day = 1; i <= n + weekday - 1; i++)
	{
		if (i < weekday)
			printf("   ");
		else
			printf("%3d", day++);
		if (i % 7 == 0)
			printf("\n");
	}

	printf("\n");
	return 0;
}

int main6_8_3(void) {

    float loan = 0.0f,
          rate = 0.0f,
          payment = 0.0f;
    int i,
        num_of_payments;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter monthly payment: ");
    scanf("%f", &payment);

    printf("Enter number of payments: ");
    scanf("%d", &num_of_payments);

    for (i = 1; i <= num_of_payments; i++) {
        loan = loan - payment + (loan * rate / 100.0 / 12.0);
        printf("Balance remaining after payment %d: $%.2f\n", i, loan);
    }

    return 0;
}