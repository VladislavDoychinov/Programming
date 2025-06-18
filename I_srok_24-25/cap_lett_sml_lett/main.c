#include <stdio.h>

int main()
{
    char c;
    char cap_lett;

    printf("Enter a symbol: ");
    do
    {
        scanf("%c", &c);

        if ('a' <= c && c <= 'z')
        {
            cap_lett = c - 32;
            printf("\nCoresponding capital letter: %c", cap_lett);
        }
        else
        {
            
        }
    } while (c != '.');

    return 0;
}