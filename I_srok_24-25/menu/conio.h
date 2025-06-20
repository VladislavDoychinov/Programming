#include <termios.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* reads from keypress, doesn't echo */
int getch(void)
{
//    struct termios oldattr, newattr;
//    int ch;
//    tcgetattr(STDIN_FILENO, &oldattr);
//    newattr = oldattr;
//    newattr.c_lflag &= ~(ICANON | ECHO);
//    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
//    ch = getchar();
//    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
//    return ch;
char ch;
system("stty raw");

ch = getchar();
if (ch == 27) {
    ch = getchar();
}
system("stty cooked");
return ch;
}

/* reads from keypress, echoes */
int getche(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr(STDIN_FILENO, &oldattr);
    newattr = oldattr;
    newattr.c_lflag &= ~(ICANON);
    tcsetattr(STDIN_FILENO, TCSANOW, &newattr);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldattr);
    return ch;
}
