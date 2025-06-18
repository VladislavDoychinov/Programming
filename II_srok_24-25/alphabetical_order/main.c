#include <stdio.h>
#include <string.h>

int main()
{
    char name[30][100];
    char temp[100];
    int student;

    do
    {
        printf("Enter the number of students: ");
        scanf("%d", &student);
    }
    while (student < 1 || student > 30);

    getchar();

    for (int j = 0; j < student; j++)
    {
        printf("Enter name of student %d: ", j + 1);
        fgets(name[j], 100, stdin);
    }

    for (int i = 0; i < student - 1; i++)
    {
        for (int j = i + 1; j < student; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for (int i = 0; i < student; i++)
    {
        printf("Student %d: %s\n", i + 1, name[i]);
    }

    return 0;
}

