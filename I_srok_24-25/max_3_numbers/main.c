#include <stdio.h>

int main()
{

    int a, b, c;

    printf("Enter a: ");
    scanf("%d", &a);

    printf("Enter b: ");
    scanf("%d", &b);

    printf("Enter c: ");
    scanf("%d", &c);

    int max = a;

    if (max > b)
    {
        if (max > c)
        {
            printf("The greatest number is a = %d", max);
        }

        else
        {
            max = c;
            printf("The greatest number is c = %d", max);
        }
    }

    else
    {
        max = b;

        if (max > c)
        {
            printf("The greatest number is b = %d", max);
        }

        else
        {
            max = c;
            printf("The greatest number is c = %d", max);
        }
    }

    return 0;
}