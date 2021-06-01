//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define MAX_LINE 1000 /* maximum input line length */

int getLine(char s[], int lim);
void copy(char to[], char from[]);

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

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

int main()
{
    int len, max;
    char line[MAX_LINE];
    char longest[MAX_LINE];

    max = 0;

    while ((len = getLine(line, MAX_LINE)) > 0) {
        printf("%d : %s", len, line);
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)
        printf("Longest line is %d characters: %s", max, longest);
    return 0;
}
