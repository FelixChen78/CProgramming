//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define MAX_LINE 1000 /* maximum input line length */
#define LOWER_LINE 80 /* lower limit of line output */

int getLine(char s[], int lim);
/* getLine:  read a line into s, return length  */
int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1 && (c=getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int main()
{
    int len;
    char line[MAX_LINE];

    while ((len = getLine(line, MAX_LINE)) > 0) {
        if (len > LOWER_LINE) {
            printf("Input line is over %d characters: %s", LOWER_LINE, line);
        }
    }
    return 0;
}
