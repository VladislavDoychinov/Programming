#include <stdio.h>

int main()
{
    char c;

    do
    {
        c = getchar();
        printf("\n%d\n", c);
    } while(c != 27);

    return 0;
}
