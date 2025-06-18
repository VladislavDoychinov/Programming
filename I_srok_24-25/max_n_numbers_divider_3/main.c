#include <stdio.h>

int main()
{
    int n, a;
    int max = 0;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    } while (n < 0);

    while (n > 0)
    {
        do
        {
            printf("Enter a: ");
            scanf("%d", &a);

            if (a % 3 == 0)

                if (max < a)
                {
                    max = a;
                }

            n--;

        } while (n > 0);
    }
    if (max == 0)
    {
        printf("There isn't a number which is divisble by 3");
    }
    else
    {
        printf("The greatest number is %d", max);
    }

    return 0;
}