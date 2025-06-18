#include <stdio.h>

int main()
{
    unsigned c;

    for (c = 0; c <= 255; c++)
    {
        printf("\n %c - %d", c, c);
    }

    return 0;
}