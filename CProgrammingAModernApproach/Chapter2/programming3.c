//使用户可以自行输入球体的半径

#include <stdio.h>
#define PI 3.14159
#define FOUR_DEVIDE_THREE (4.0f/3.0f)

int main3(void)
{
	float radius, volume;

	printf("Please enter the ball's radius(m): ");
	scanf("%f", &radius);

	volume  = FOUR_DEVIDE_THREE * PI * radius * radius * radius;

	printf("The ball's volume is: %.2f\n", volume);

	return 0;
}