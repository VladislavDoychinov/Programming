#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "conio.h"

typedef struct
{
    int number;
    char name[100];
    int marks[20];
    float avg;
} Student;

void number(int stNum, Student student[])
{
    for (int i = 0; i < stNum - 1; i++)
    {
        for (int j = 0; j < stNum - i - 1; j++)
        {
            if (student[j].number > student[j + 1].number)
            {
                Student temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    printf("\nSorted by student number:\n");
    for (int j = 0; j < stNum; j++)
    {
        printf("%d. %s\n", student[j].number, student[j].name);
    }
}

void name(int stNum, Student student[])
{
    for (int i = 0; i < stNum - 1; i++)
    {
        for (int j = 0; j < stNum - i - 1; j++)
        {
            if (strcmp(student[j].name, student[j + 1].name) > 0)
            {
                Student temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    printf("\nSorted by student name:\n");
    for (int j = 0; j < stNum; j++)
    {
        printf("%d. %s\n", student[j].number, student[j].name);
    }
}

void average(int stNum, Student student[])
{
    for (int i = 0; i < stNum - 1; i++)
    {
        for (int j = 0; j < stNum - i - 1; j++)
        {
            if (student[j].avg < student[j + 1].avg)
            {
                Student temp = student[j];
                student[j] = student[j + 1];
                student[j + 1] = temp;
            }
        }
    }

    printf("\nSorted by average mark:\n");
    for (int j = 0; j < stNum; j++)
    {
        printf("%d. %s - %.2f", student[j].number, student[j].name, student[j].avg);
    }
}

int main()
{
    Student student[30];
    int menu = 0;
    int key;
    Student repeat[30];
    Student money[30];
    int r = 0, m = 0, stNum, subNum;

    do
    {
        printf("Enter the number of the students: ");
        scanf("%d", &stNum);
        getchar();
    } while (stNum < 1 || stNum > 30);

    do
    {
        printf("Enter the number of the subjects: ");
        scanf("%d", &subNum);
        getchar();
    } while (subNum < 1 || subNum > 20);

    for (int i = 0; i < stNum; i++)
    {
        student[i].avg = 0;
        printf("Enter a number of the student: ");
        scanf("%d", &student[i].number);
        getchar();
        printf("Enter a name of the student: ");
        fgets(student[i].name, 100, stdin);
        for (int o = 0; o < strlen(student[i].name); o++)
        {
            if (student[i].name[o] == '\n')
            {
                student[i].name[o] = '\0';
            }
        }

        for (int j = 0; j < subNum; j++)
        {
            do
            {
                printf("Enter a mark: ");
                scanf("%d", &student[i].marks[j]);
                getchar();
            } while (student[i].marks[j] < 2 || student[i].marks[j] > 6);

            if (student[i].marks[j] == 2)
            {
                repeat[r++] = student[i];
            }

            student[i].avg += student[i].marks[j];
        }
        student[i].avg /= subNum;

        if (student[i].avg >= 5.5)
        {
            money[m++] = student[i];
        }
    }

    while (1)
    {
        system("clear");
        if ( r != 0)
        {
            printf("\nTHESE STUDENTS ARE REPEATING THE CLASS:\n");
            for (int n = 0; n < r; n++)
            {
                printf("%d. %s\n", repeat[n].number, repeat[n].name);
            }
        }
        
        if (m != 0)
        {
            printf("\nTHESE STUDENTS ARE RECEIVING MONEY:\n");
            for (int d = 0; d < m; d++)
            {
                printf("%d. %s - %.2f\n", money[d].number, money[d].name, money[d].avg);
            }
        }
        printf("Choose sorting method:\n");
        printf("%s number of the student;\n", menu == 0 ? ">" : " ");
        printf("%s alphabetical order;\n", menu == 1 ? ">" : " ");
        printf("%s the average mark;\n", menu == 2 ? ">" : " ");
        printf("%s nothing...Exit\n", menu == 3 ? ">" : " ");

        key = getch();
        if (key == 66)
        {
            menu = (menu + 1) % 4;
        }
        else if (key == 65)
        {
            menu = (menu - 1 + 4) % 4;
        }

        if (key == 13)
        {
            system("clear");
            if (menu == 0)
            {
                number(stNum, student);
            }
            else if (menu == 1)
            {
                name(stNum, student);
            }
            else if (menu == 2)
            {
                average(stNum, student);
            }
            else if (menu == 3)
            {
                break;
            }
            printf("\nPress any key to continue...");
            getch();
        }
        else if (key == 27)
        {
            break;
        }
    }

    return 0;
}
