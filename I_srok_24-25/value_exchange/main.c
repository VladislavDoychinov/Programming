#include <stdio.h>
#include <string.h>

int main()
{

    int a;
    int b;
    int c;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    printf("a = %d \n", a);
    printf("b = %d", b);

    return 0;
}