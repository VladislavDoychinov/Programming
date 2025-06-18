#include <stdio.h>
#include <string.h>

void main()
{
    int count = 0, count1 = 0;
    int open = 0, close = 0;
    int countOpen[20];
    int countClose[20];
    int index[20], top = -1;
    char brackets[20];

    fgets(brackets, 20, stdin);

    for(int i = 0; i < strlen(brackets); i++)
    {
        if(brackets[i] == '(')
        {
            if (count >= 20)
            {            
                break;
            }
            index[++top] = i + 1;
            open++;
        }
        else if(brackets[i] == ')')
        {
            if(top == -1)
            {
                printf("Not balanced...\n");
                return;
            }
            countOpen[count] = index[top--];
            countClose[count] = i + 1;
            count++;
            close++;
        }
    }

    if(open != close)
    {
        printf("Not balanced...\n");
    }
    else
    {
        printf("Balanced...\n");
        for(int i = 0; i < count; i++)
        {
            printf("%d | %d\n", countOpen[i], countClose[i]);
        }
    }
}

