#include <stdio.h>

int faktoriel(int n)
{
    int count;
    int answer = 1;

    for (count = 1; n >= count; count++)
    {
        answer = answer * count;
    }

    return answer;
}

int main()
{
    int n;
    int answ;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
    } while(n < 0);

    answ = faktoriel(n);

    printf("%d! = %d", n, answ);
}
