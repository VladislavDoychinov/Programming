#include <stdio.h>
#include <string.h>

void main()
{
    char max[300];
    int maxlen = 0;
    char s[10][300];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a word: ");
        fgets(s[i], 300, stdin);

        int len = strlen(s[i]);
        if (s[i][len - 1] == '\n')
        {
            s[i][len - 1] = '\0';
        }

        int len1 = strlen(s[i]);
        if (len1 > maxlen)
        {
            maxlen = len1;
            strcpy(max, s[i]);
        }
    }

    printf("word: %s\n", max);
}
