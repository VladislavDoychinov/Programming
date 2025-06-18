#include <stdio.h>

int main()
{

    float x = 0;
    float y;
    float i;
    char temp;
    char act;

    printf("Enter a number: ");
    scanf("%f", &y);

    while (act != '=')
    {
        printf("Enter an operation: ");
        scanf(" %c", &act);
        if (act == '=')
        {
            break;
        }

        printf("Enter a number:");
        scanf("%f", &i);

        switch(act)
        {
        case '+':
            x = y + i;
            break;
        case '-':
            x = y - i;
            break;
        case '*':
            x = y * i;
            break;

        case '/':
            while (i == 0)
            {
                printf("Enter a valid number: ");
                scanf("%f", &i);
            }
            x = y / i;
            break;
        default:
            printf("Enter a valid operation: ");
            scanf("%c", &act);
            break;
        }

        y = x;
        i = 0;
    }

    printf("The total sum is %f.\n", x);

    return 0;
}
