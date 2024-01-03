#include <stdio.h>

//它使用前两个max1 = max(a, b)和max2 = max(c, d)以及min1 = min(a, b)和min2 = min(c, d)来计算。
//则最大值等于max(max(a, b), max(c, d)) = max(max1, max2)。(第3 if.)
//最小值等于min(min(a, b), min(c, d)) = min(min1, min2)。(第4 if.)

int main5_7(void)
{
    int a, b, c, d;

    printf("Enter four integers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int min, max, max1, max2, min1, min2;

    if (a > b) // 1
    {
        max1 = a;
        min1 = b;
    }
    else
    {
        max1 = b;
        min1 = a;
    }

    if (c > d) // 2
    {
        max2 = c;
        min2 = d;
    }
    else
    {
        max2 = d;
        min2 = c;
    }

    if (max1 > max2) // 3
        max = max1;
    else
        max = max2;

    if (min1 < min2) // 4
        min = min1;
    else
        min = min2;

    printf("Largest: %d\n", max);
    printf("Smallset: %d\n", min);

    return 0;
}