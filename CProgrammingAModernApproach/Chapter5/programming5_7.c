#include <stdio.h>

//��ʹ��ǰ����max1 = max(a, b)��max2 = max(c, d)�Լ�min1 = min(a, b)��min2 = min(c, d)�����㡣
//�����ֵ����max(max(a, b), max(c, d)) = max(max1, max2)��(��3 if.)
//��Сֵ����min(min(a, b), min(c, d)) = min(min1, min2)��(��4 if.)

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