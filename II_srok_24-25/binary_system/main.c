#include <stdio.h>

void binaryRec(int n)
{
    if (n > 0)
    {
        binaryRec(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    int n;
    
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while (n < 0);

    if (n == 0)
    {
        printf("%d", n);
    }
    else
    {
        binaryRec(n);
    }

    return 0;
}

