#include <stdio.h>

int digits(int n)
{
    int count = 0;
    int num = n;
    int fstNum, nxtNum, num1;

    while(num > 0)
    {
        fstNum  = num % 10;
        num = num / 10;

        num1 = num;
        while(num1 > 0)
        {
            nxtNum = num1 % 10;
            num1 = num1 / 10;
            if(nxtNum == fstNum)
            {
                count++;
                return 0;
            }
        }
    }

    if(count == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(digits(n) == 0)
    {
        printf("There are repeating digits.\n");
    }
    else
    {
        printf("There are not repeating digits.\n");
    }

    return 0;
}
