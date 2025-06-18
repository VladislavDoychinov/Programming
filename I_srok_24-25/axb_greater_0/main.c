#include <stdio.h>

int main()
{
    float a, b, x;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);

    x = -b / a;

    if (a == 0)
    {
        if (b > 0)
        {
            printf("For %.2f * x + %.2f > 0 x can be every number.", a, b);
        }
        else
        {
            printf("For %.2f * x + %.2f > 0 there isn't any solution.", a, b);
        }
    }
    else
    {
        if (a < 0)
        {
            printf("For %.2f * x + %.2f > 0 x is smaller than %.2f.", a, b, x);
        }
        else
        {
            printf("For %.2f * x + %.2f > 0 x is greater than %.2f.", a, b, x);
        }
    }

    return 0;
}