#include <stdio.h>

int main()
{
    char c;
    int cap_lett = 0;
    int sml_lett = 0;
    int digit = 0;
    int others = 0;

    printf("Enter a symbol: ");
    do
    {
        scanf("%c", &c);

        if (c == '\n')
        {
        }
        else if ('a' <= c && c <= 'z')
        {
            sml_lett++;
        }
        else if ('A' <= c && c <= 'Z')
        {
            cap_lett++;
        }
        else if ('0' <= c && c <= '9')
        {
            digit++;
        }
        else
        {
            others++;
        }
    } while (c != '\n');

    printf("\nCapital letters are %d, small letters are %d, digits are %d and other symbols are %d\n", cap_lett, sml_lett, digit, others);

    return 0;
}