#include <stdio.h>

int flip(int n);

int flop(int n)
{
    if(n == 0)
    {
        return 0;    
    }
    else
    {
        printf("flop\n");
        flip(n-1);
    }

    return 0;   
}

int flip(int n)
{
    printf("flip\n");
    flop(n-1);
    
    return 0;
}

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);    
    flop(n);
    
    return 0;
}
