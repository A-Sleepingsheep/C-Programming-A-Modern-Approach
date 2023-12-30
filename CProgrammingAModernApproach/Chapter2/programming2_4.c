//计算增加5%税率后的相应金额

#include <stdio.h>

int main2_4(void)
{
	float amount, taxedamount;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	taxedamount = amount + amount * 5.0f / 100.f;

	printf("With tax added: $%.2f", taxedamount);

	return 0;
}