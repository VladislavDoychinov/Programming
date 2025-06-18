#include <stdio.h>
#include <stdlib.h>
#include "conio.h"

void one_to_n()
{
    int i, n;
    int plus = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        plus = plus + i;
    }

    printf("The sum from 1 to %d is %d.\n", n, plus);
}

void num_digits()
{
    int n, m;
    int count;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    for(count = 0; n != 0; count++)
    {
        n = n / 10;
    }

    printf("The number of the digits in %d is %d.\n", m, count);
}

void sum_digits()
{
    int n, i, m;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    m = n;

    while(m != 0)
    {
        i = m % 10;
        sum = sum + i;
        m = m / 10;
    }

    printf("The sum of the digits in %d is %d.\n", n, sum);
}

void mn()
{
    int n, n1;
    int m = 0;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;

    while(n1 != 0)
    {
        i = n1 % 10;
        m = m * 10 + i;
        n1 = n1 / 10;
    }

    printf("%d is %d backwards.\n", m, n);
}

void mn2()
{
    int n, n1;
    int m = 0;
    int i;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    n1 = n;

    while(n1 != 0)
    {
        i = n1 % 10;

        if(i % 2 == 0)
        {
            m = m * 10 + i;
            count = 1;
        }

        n1 = n1 / 10;
    }

    if (count == 0)
    {
        printf("There arent any even digits.\n");
    }
    else
    {
        printf("%d is written with even numbers of %d.\n", m, n);
    }
}

int main()
{
    int menu = 0;
    char key;

    while(menu != 5)
    {
        do
        {
            system("clear");
            if (menu == 0)
            {
                printf(">");
                printf("The sum from 1 to n\n");
            }
            else
            {
                printf(" ");
                printf("The sum from 1 to n\n");
            }

            if (menu == 1)
            {
                printf(">");
                printf("The number of digits\n");
            }
            else
            {
                printf(" ");
                printf("The number of digits\n");
            }

            if (menu == 2)
            {
                printf(">");
                printf("The sum of digits\n");
            }
            else
            {
                printf(" ");
                printf("The sum of digits\n");
            }

            if (menu == 3)
            {
                printf(">");
                printf("M written with digits of n\n");
            }
            else
            {
                printf(" ");
                printf("M written with digits of n\n");
            }

            if (menu == 4)
            {
                printf(">");
                printf("M written with even digits of n\n");
            }
            else
            {
                printf(" ");
                printf("M written with even digits of n\n");
            }

            if (menu == 5)
            {
                printf(">");
                printf("Exit\n");
            }
            else
            {
                printf(" ");
                printf("Exit\n");
            }

            key = getch();

            if (key == 66)
            {
                menu = (menu + 1) % 6;
            }
            else if (key == 65)
            {
                menu = (menu + (6 - 1)) % 6;
            }
        }
        while(key != 13);


        if (menu == 0)
        {
            one_to_n();
        }
        if (menu == 1)
        {
            num_digits();
        }
        if (menu == 2)
        {
            sum_digits();
        }
        if (menu == 3)
        {
            mn();
        }
        if (menu == 4)
        {
            mn2();
        }
        if (menu == 5)
        {
            printf("You closed the program\n");
        }
        printf("Press any key to continue...");
        getch();
        getch();
    }
    return 0;
}
