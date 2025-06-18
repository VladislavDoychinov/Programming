#include <stdio.h>
#include <string.h>

int main() {
    char s[100], s1[20], s2[20], result[200];
    int i = 0, j = 0, k, match;

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);

    printf("Enter word to replace: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter replacement word: ");
    fgets(s2, sizeof(s2), stdin);

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '\n')
        {
            s[i] = '\0';
        } 
    }
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] == '\n') 
        {
            s1[i] = '\0';
        }
    }
    for (i = 0; s2[i] != '\0'; i++)
    {
        if (s2[i] == '\n') 
        {
            s2[i] = '\0';
        }
    }

    i = 0;
    while (s[i] != '\0')
    {
        match = 1;
        for (k = 0; s1[k] != '\0'; k++)
        {
            if (s[i + k] != s1[k])
            {
                match = 0;
                break;
            }
        }

        if (match)
        {
            for (k = 0; s2[k] != '\0'; k++)
            {
                result[j++] = s2[k];
            }
            i = i + strlen(s1);
        } 
        else 
        {
            result[j++] = s[i++];
        }
    }

    result[j] = '\0';
    printf("string: %s\n", result);
    return 0;
}