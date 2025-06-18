#include <stdio.h>

void fig(int n, char c)
{
    int i, k;

    for(i = 1; i <= n; i++)
    {
        for(k = 1; k <= i; k++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char c;

    printf("Enter a number: ");
    scanf("%d", &n);
    scanf("%c", &c);

    printf("Enter a symbol: ");
    scanf("%c", &c);


    fig(n, c);
}


