#include <stdio.h>

float power(float a, int n)
{
    int i;

    if(n == 0)
    {
        return 1;
    }
    else
    {
        if(n > 0)
        {
            for(i = 1; i <= n; i++)
            {  
                return power(a, n - i) * a;                
            }
        }
        else
        {
            for(i = -1; i >= n; i--)
            {
                return 1 / (power(a, i - n) * a);           
            }
        }
    }

}

int main()
{
    float a;
    int n;

    printf("Enter a number: ");
    scanf("%f", &a);
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("a^n = %.3f", power(a, n));

    return 0;
}
