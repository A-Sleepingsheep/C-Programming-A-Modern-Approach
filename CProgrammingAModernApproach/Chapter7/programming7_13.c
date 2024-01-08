#include <stdio.h>

int main_7_13(void)
{

    char c;
    double length = 0.0;
    int words = 1;

    printf("Enter a sentence: ");

    while ((c = getchar()) != '\n')
    {
        if (c == ' ')
            words++;
        else
            length++;
    }

    printf("Average word length: %.1f\n", length / words);
    printf("words:%d, length:%f\n", words, length);
    return 0;
}