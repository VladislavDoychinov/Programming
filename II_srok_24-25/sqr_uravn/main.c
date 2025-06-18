#include <stdio.h>
#include <math.h>

int math(float a, float b, float c, float* x1, float* x2)
{
    float d = (b * b) - (4 * a * c);
    *x1 = (-b - sqrt(d)) / (2 * a);
    *x2 = (-b + sqrt(d)) / (2 * a);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                return 3;
            }
            else
            {
                return 2;
            }            
        }
        else
        {
            *x1 = -b / c;
            return 4;
        }
    }
    else
    {
        if (d == 0)
        {
            return 4;
        }
        else if (d < 0)
        {
            return 2;
        } 
    }

}

int main()
{
    float a, b, c;
    float x1 = 0, x2 = 0;

    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    printf("%.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);

    math(a, b, c, &x1, &x2);

    if (math(a, b, c, &x1, &x2) == 1)
    {
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }
    else if (math(a, b, c, &x1, &x2) == 2)
    {
        printf("There are not any solutions.\n");
    }
    else if (math(a, b, c, &x1, &x2) == 3)
    {
        printf("Every number is a solution.");
    }
    else if (math(a, b, c, &x1, &x2) == 4)
    {
        printf("x = %.2f\n", x1);
    }

    return 0;
}
