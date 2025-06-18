#include <stdio.h>

int main()
{
    int day, month, year;

    int dpm, leap;

    int i, num = 0;

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

    for (i = 1; i < month; i++)
    {
        switch (i)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            num = num + 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            num = num + 30;
            break;

        case 2:
            num = num + 28 + leap;
            break;
        }
    }
    num = num + day;

    printf("%d.%d.%d is the %d day of the year.", day, month, year, num);

    return 0;
}