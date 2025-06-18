#include <stdio.h>

int main()
{
    int day, month, year;
    int num;


    do
    {
        printf("Enter a day: ");
        scanf("%d", &day);
    } while (day < 1 || day > 31);

    do
    {
        printf("Enter a month: ");
        scanf("%d", &month);
    } while (month < 1 || month > 12);

    do
    {
        printf("Enter a year: ");
        scanf("%d", &year);
    } while (year < 1);

    if (month == 1)
    {
        num = day;
    }

    if (month == 2)
    {
        while (day > 29 || day < 1 && year % 4 == 0)
        {
            printf("Enter a valid day: ");
            scanf("%d", &day);
        }
        while (day > 28 || day < 1 && year % 4 != 0)
        {
            printf("Enter a valid day: ");
            scanf("%d", &day);
        }

        num = day + 31;
    }

    if (month == 3)
    {
        if (year % 4 == 0)
        {
            num = day + 60;
        }
        else
        {
            num = day + 59;
        }
    }

    if (month == 4)
    {
        while (day == 31 || day < 1)
        {
            printf("Enter a valid day: ");
            scanf("%d", &day);
        }
        if (year % 4 == 0)
        {
            num = day + 91;
        }
        else
        {
            num = day + 90;
        }
    }

    if (month == 5)
    {
        if (year % 4 == 0)
        {
            num = day + 121;
        }
        else
        {
            num = day + 120;
        }
    }

    if (month == 6)
    {
        while (day == 31 || day < 1)
        {
            printf("Enter a valid day: ");
            scanf("%d", &day);
        }
        if (year % 4 == 0)
        {
            num = day + 152;
        }
        else
        {
            num = day + 151;
        }
    }

    if (month == 7)
    {
        if (year % 4 == 0)
        {
            num = day + 182;
        }
        else
        {
            num = day + 181;
        }
    }

    if (month == 8)
    {
        if (year % 4 == 0)
        {
            num = day + 213;
        }
        else
        {
            num = day + 212;
        }
    }

    if (month == 9)
    {
        while (day == 31 || day < 1)
        {
            printf("Enter a valid day: ");
            scanf("%d", &day);
        }
        if (year % 4 == 0)
        {
            num = day + 244;
        }
        else
        {
            num = day + 243;
        }
    }

    if (month == 10)
    {
        if (year % 4 == 0)
        {
            num = day + 274;
        }
        else
        {
            num = day + 273;
        }
    }

    if (month == 11)
    {
        while (day == 31 || day < 1)
        {
            printf("Enter a valid day: ");
            scanf("%d", &day);
        }
        if (year % 4 == 0)
        {
            num = day + 305;
        }
        else
        {
            num = day + 304;
        }
    }

    if (month == 12)
    {
        if (year % 4 == 0)
        {
            num = day + 335;
        }
        else
        {
            num = day + 334;
        }
    }

    printf("%d.%d.%d is the %d day of the year.", day, month, year, num);

    return 0;
}