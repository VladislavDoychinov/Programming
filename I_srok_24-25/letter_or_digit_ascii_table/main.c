#include <stdio.h>

int main()
{
    char c;

    printf("Please enter a symbol: ");
    scanf("%c", &c);

    if ('a' <= c && c <= 'z')
    {
        printf("%c is a small letter.\n", c);
    }
    else if ('A' <= c && c <= 'Z')
    {
        printf("%c is a capital letter.\n", c);
    }
    else if ('0' <= c && c <= '9')
    {
        printf("%c is a digit.\n", c);
    }
    else
    {
        printf("%c is another symbol.\n", c);
    }

    return 0;
}