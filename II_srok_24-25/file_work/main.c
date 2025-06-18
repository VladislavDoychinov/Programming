#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"

void choose(char);

void main()
{
    FILE *f;
    int menu = 0;
    int key;
    char s[80];
    char *p;
    char filename[80];

    while (1)
    {
        system("clear");

        printf("Choose opening method:\n");
        printf("%s choose file;\n", menu == 0 ? ">" : " ");
        printf("%s writing;\n", menu == 1 ? ">" : " ");
        printf("%s reading;\n", menu == 2 ? ">" : " ");
        printf("%s adding;\n", menu == 3 ? ">" : " ");
        printf("%s nothing...Exit\n", menu == 4 ? ">" : " ");

        key = getch();
        if (key == 66)
        {
            menu = (menu + 1) % 5;
        }
        else if (key == 65)
        {
            menu = (menu - 1 + 5) % 5;
        }

        if (key == 13)
        {
            system("clear");
            if (menu == 0)
            {
                printf("Enter a filename: ");
                fgets(filename, 80, stdin);
                
                if(p == strchr(filename, '\n'))
                {
                    *p = '\0';
                }   
            }
            else if (menu == 1)
            {
                f = fopen(filename, "w");
                if(f)
                {
                   while(1)
                    {
                        fgets(s, 80, stdin);
                        if(strcmp(s,"end\n") == 0)
                        {                            
                            break;
                        }
                        fprintf(f,"%s", s);
                    }
                    fclose(f);       
                }
            }
            else if (menu == 2)
            {
                f = fopen(filename, "r");
                if(f)
                {
                    while(!feof(f))
                    {
                        if(fgets(s,80,f))
                        {
                            printf("%s",s);
                        }
                    }
                }
            }
            else if (menu == 3)
            {
                f = fopen(filename, "a"); 

                if(f)
                {
                   while(1)
                    {
                        fgets(s, 80, stdin);
                        if(strcmp(s, "end\n") == 0)
                        {                            
                            break;
                        }
                        fprintf(f,"%s", s);
                    }
                    fclose(f);       
                }           
            }
            else if (menu == 4)
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
}


