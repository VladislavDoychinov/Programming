#include <stdio.h>

int main()
{
    int constyear = 2024;
    int day, month, year;
    int dpm, leap;
    int i, j;
    int start, end;
    int day_of_year, days;
    int div7;

    do
    {
        printf("Enter a day: ");
        scanf("%d", &day);
        printf("Enter a month: ");
        scanf("%d", &month);
        printf("Enter a year: ");
        scanf("%d", &year);

        if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    leap = 1;
                }
                else
                {
                    leap = 0;
                }
            }
            else
            {
                leap = 1;
            }
        }
        else
        {
            leap = 0;
        }

        switch (month)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dpm = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            dpm = 30;
            break;

        case 2:
            dpm = 28 + leap;
            break;
        }

    } while (month < 1 || month > 12 || day < 1 || day > dpm);

    day_of_year = day;
    for (j = 1; j < month; j++)
    {
        switch (j)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            day_of_year = day_of_year + 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            day_of_year = day_of_year + 30;
            break;

        case 2:
            day_of_year = day_of_year + 28 + leap;
            break;
        }
    }

    if (year >= constyear)
    {
        start = constyear;
        end = year;
        days = day_of_year;
    }
    else
    {
        start = year;
        end = constyear;
        days = - day_of_year + 2;
    }

    i = start;

    while (i < end)
    {
        if (i % 400 == 0)
        {
            leap = 1;
        }
        else if (i % 100 == 0)
        {
            leap = 0;
        }
        else if (i % 4 == 0)
        {
            leap = 1;
        }
        else
        {
            leap = 0;
        }

        if (leap == 1)
        {
            days = days + 366;
        }
        else
        {
            days = days + 365;
        }

        i++;
    }

    div7 = (days - 1) % 7;
    if (year < constyear)
    {
        div7 = (7 - div7) % 7;
    }

    switch (div7)
    {
    case 0:
        printf("%d.%d.%d is Monday.", day, month, year);
        break;
    case 1:
        printf("%d.%d.%d is Tuesday.", day, month, year);
        break;
    case 2:
        printf("%d.%d.%d is Wednesday.", day, month, year);
        break;
    case 3:
        printf("%d.%d.%d is Thursday.", day, month, year);
        break;
    case 4:
        printf("%d.%d.%d is Friday.", day, month, year);
        break;
    case 5:
        printf("%d.%d.%d is Saturday.", day, month, year);
        break;
    case 6:
        printf("%d.%d.%d is Sunday.", day, month, year);
        break;
    }

    return 0;
}