#include <stdio.h>
#include <string.h>

void main()
{
    int open = 0, close = 0, pair = 0;
    char brackets[20];
    int check[10][2] = {0};

    fgets(brackets, 20, stdin);

    for (int i = 0; i < strlen(brackets); i++)
    {
        if (brackets[i] == '(')
        {
            if(open - close > 1)
            {
                check[pair][0] = i;
                pair++;
            }
            else
            {
                check[open][0] = i;
            }
            open++;
        }
        else if (brackets[i] == ')')
        {
            if(pair > 1)
            {
                pair--;
                check[pair][1] = i;
            }
            else
            {
                check[close][1] = i;
            }
            close++;
        }
    }

    if (open != close)
    {
        printf("Not balanced...\n");
    }
    else
    {
        printf("Balanced...\n");
        for (int j = 0; j < strlen(brackets) / 2; j++)
        {
            printf("%d | %d\n", check[j][0] + 1, check[j][1] + 1);
        }
    }
}

