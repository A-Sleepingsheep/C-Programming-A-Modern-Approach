//对用户产品信息进行格式化

#include <stdio.h>

int main3_2(void)
{
	int item, month, day, year;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/year): ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\tUnit\t\tPurchase\n");
	printf("\tPrice\t\tDate\n");
	printf("%-d\t$%7.2f\t%.2d/%.2d/%d",item,price,month,day,year);

	return 0;
}