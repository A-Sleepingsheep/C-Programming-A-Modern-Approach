//����һ���뾶Ϊ10m���������

#include <stdio.h>
#define PI 3.14159
#define FOUR_DEVIDE_THREE (4.0f/3.0f)

int main2_2(void)
{
	float radius = 10.0;

	float volume = FOUR_DEVIDE_THREE * PI * radius * radius * radius;

	printf("The ball's volume is: %.2f\n", volume);

	return 0;
}