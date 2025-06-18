#include <stdio.h>

int main()
{
    char c;
    int others = 0, digit = 0, count_act = 0;

    printf("Enter a symbol: ");
    scanf("%c", &c);
    if (c == '+' || c == '-' || '0' <= c && c <= '9')
    {
        count_act++;
    }

    do
    {
        scanf("%c", &c);
        if ('0' <= c && c <= '9')
        {
            digit++;
        }
        else
        {
            others++;
        }
    }
    while (c != '\n');

    others--;

    if (digit > 0 && others == 0)
    {
        if (count_act != 0)
        {
            printf("It's a number.");
        }
    }
    else
    {
        printf("It is NOT a number.");
    }

    return 0;
}
