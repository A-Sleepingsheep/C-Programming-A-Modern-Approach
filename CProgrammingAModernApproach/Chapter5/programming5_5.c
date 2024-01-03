#include <stdio.h>

int main5_5(void)
{
	float dollar;

	printf("Enter your dollar: ");
	scanf("%f", &dollar);

	if (dollar < 750)
		printf("You need to pay: %f", dollar * 0.01);
	else if (dollar <= 2250)
		printf("You need to pay: %.2f", 7.50+(dollar-750)*0.02);
	else if(dollar<=3750)
		printf("You need to pay: %.2f", 37.50 + (dollar - 2250 )* 0.03);
	else if(dollar<=5250)
		printf("You need to pay: %.2f", 82.50 + (dollar - 3750) * 0.04);
	else if(dollar<=7000)
		printf("You need to pay: %.2f", 142.50 + (dollar - 5250) * 0.05);
	else 
		printf("You need to pay: %.2f", 230.00 + (dollar - 7000) * 0.06);

	return 0;
}