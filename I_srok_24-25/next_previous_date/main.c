#include <stdio.h>

int main()
{
    int day, month, year;

    int dpm, leap;
    int prvday, prvmonth, prvyear;
    int nxday, nxmonth, nxyear;

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

    nxmonth = month;
    nxyear = year;
    prvyear = year;
    prvmonth = month;

    if (day == 1)
    {
        prvmonth--;

        switch (month)
        {
        case 1:
            prvday = 31;
            prvmonth = 12;
            prvyear--;
            break;
        case 3:
            prvday = 28 + leap;
            break;
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            prvday = 30;
            break;

        case 2:
        case 4:
        case 6:
        case 9:
        case 11:
            prvday = 31;
            break;
        }

        nxday = day + 1;
    }

    else if (day == dpm && month != 12)
    {
        nxmonth++;
        nxday = 1;
        prvday = day - 1;
    }

    else if (month == 12 && day == dpm)
    {
        nxday = 1;
        nxmonth = 1;
        nxyear++;
        prvday = day - 1;
    }

    else if (day != 1 || day != dpm)
    {
        nxday = day + 1;
        prvday = day - 1;
    }

    printf("After %d.%d.%d is %d.%d.%d and before it is %d.%d.%d.", day, month, year, nxday, nxmonth, nxyear, prvday, prvmonth, prvyear);

    return 0;
}