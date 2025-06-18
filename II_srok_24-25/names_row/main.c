#include <stdio.h>
#include <string.h>

int main()
{
    char names[50];
    fgets(names, 50, stdin);

    for(int i = 0; i <= strlen(names); i++)
    {
        printf("%c", names[i]);
        if(names[i + 1] == ' ')
        {
            names[i + 1] = '\n';
        }
    }

    return 0;
}