//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define MAX_LINE 1000 /* maximum input line length */

void reverseCopy(char *s, int len);

void reverseCopy(char *s, int len) {
    int i;
    char c[len];
    i = 0;
    while (len > 0) {
        --len;
        if (s[len] != '\0' && s[len] != '\n') {
            c[i] = s[len];
            ++i;
        }
    }
    c[++i] = '\n';
    c[i] = '\0';
    printf("%s \n", c);
}

int main()
{
    int len;
    char line[MAX_LINE];
    while ((len = getLine(line, MAX_LINE)) > 0)
        reverseCopy(line, len);
    return 0;
}
