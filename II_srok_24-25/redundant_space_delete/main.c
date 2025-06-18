#include <stdio.h>
#include <string.h>

int main()
{
    int j = 0;
    char s[40];
    fgets(s, 40, stdin);

    int slen = strlen(s);
    if (s[slen - 1] == '\n')
    {
        s[slen - 1] = '\0';
        slen--;
    }

    int space = 0;

    for (int i = 0; i < slen; i++)
    {
        if (s[i] != ' ')
        {
            s[j++] = s[i];
            space = 0;  
        }
        else if (!space && i != 0)
        {
            s[j++] = ' ';
            space = 1;
        }
    }

    s[j] = '\0';

    printf("string: %s\n", s);
    return 0;
}

