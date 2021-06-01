//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define MAX_LINE 1000 /* maximum input line length */

int getLineNoTabNoB(char *s, int lim);

int getLineNoTabNoB(char *s, int lim)
{
    int c, i;
    i = 0;
    while (i < lim - 1 && (c=getchar()) != EOF && c != '\n')
        if (c!=' ' && c!= '\t') {
            s[i] = c;
            ++i;
        }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}

int main()
{
    char line[MAX_LINE];
    while ((getLineNoTabNoB(line, MAX_LINE)) > 0)
        printf("%s", line);
    return 0;
}
