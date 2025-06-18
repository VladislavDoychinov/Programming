#include <stdio.h>
#include <string.h>

int main()
{
    char s[20];
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
        len--;
    }

    int count[20] = {0};

    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (s[i] == s[j])
            {
                count[i]++;
            }
        }
    }

    int max = count[0];
    int index = 0;
    for (int i = 1; i < len; i++)
    {
        if (count[i] > max) {
            max = count[i];
            index = i;
        }
    }

    printf("count: %d\nchar: %c\n", max, s[index]);

    return 0;
}
