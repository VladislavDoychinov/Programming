#include <stdio.h>

int main()
{
    int n, i, b;
    int a = 0;
    int c = 1;
    int razlika1, razlika2;

    do
    {
        printf("Enter n: ");
        scanf("%d", &n);
    }
    while(n < 1);

    while (c < n)
    {
        b = a;
        a = c;
        c = a + b;
    }
    
    razlika1 = c - n;
    razlika2 = n - a;

    if (razlika1 < razlika2)
    {
        printf("The closest number of Fibonacci to %d is %d\n", n, c);        
    }
    else
    {
        printf("The closest number of Fibbonaci to %d is %d\n", n, a);
    }

    return 0;
}
