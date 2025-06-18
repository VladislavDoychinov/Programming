#include <stdio.h>

int math(float a, float b, float* x)
{
    if (a == 0)
    {
        if (b == 0)
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    else
    {
        *x = -b / a;
        return 3;
    }
}

int main()
{
    float a, b, c, d;
    float x = 0, y = 0;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    printf("Enter d: ");
    scanf("%f", &d);

    math(a, b, &x);

    if (math(a, b, &x) == 3)
    {
        printf("x = %.2f\n", x);
    }
    if (math(c, d, &x)  == 3)
    {
        printf("y = %.2f\n", x);
    }
    if (math(a, b, &x)  == 1)
    {
        printf("Every number is a solution.");
    }
    if (math(c, d, &x) == 1)
    {
        printf("Every number is a solution.");
    }
    if (math(a, b, &x) == 2)
    {
        printf("There is not any solution.");
    }
    if (math(c, d, &x) == 2)
    {
        printf("There is not any solution.");
    }

    return 0;
}
