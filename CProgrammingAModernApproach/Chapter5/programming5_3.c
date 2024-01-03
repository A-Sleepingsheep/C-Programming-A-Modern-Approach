#include <stdio.h>

int main_5_3(void)
{
	float amount, price,commission;

	printf("Enter value of trade and price: ");
	scanf("%f %f", &amount,&price);

	printf("Commission: $%.2f\n", amount * price);

	printf("Enter your enemy commision: ");
	scanf("%f", &commission);
	
	if (commission >= 2000)
		printf("Commission: $%.2f\n", commission + 0.002 * commission);
	else
		printf("Commission: $%.2f\n", commission + 0.003 * commission);


	return 0;
}