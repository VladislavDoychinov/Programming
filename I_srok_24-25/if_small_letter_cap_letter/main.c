#include <stdio.h>

int main()
{
    char c;
    char capital;

    printf("Please enter a symbol: ");
    scanf("%c", &c);

    capital = c - 32;

    if ('a' <= c && c <= 'z')
    {
        printf("Coresponding capital letter: %c\n", capital);
    }
    else
    {
        printf("%c\n", c);
    }

    return 0;
}