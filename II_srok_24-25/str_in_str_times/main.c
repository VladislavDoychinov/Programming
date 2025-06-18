#include <stdio.h>
#include <string.h>

int main() {
    char* s = {"abcdabcdeabcdef"};
    char* s1 = {"e"};
    char* s2 = s;
    int count = 0;

    while ((s2 = strstr(s2, s1)) != NULL) {
        count++;
        printf("%s\n", s2);
        s2++;
    }

    printf("s1 is in s %d times.\n", count);
    return 0;
}
