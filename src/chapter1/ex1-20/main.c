//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define SPACE_IN_TAB 7 /* number of blank space to replace tab */

int main()
{
    int c, i, j;
    j = -1;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            for (i = 0; i < SPACE_IN_TAB - j; ++i)
                putchar(' ');
            j = -1;
        }
        else {
            putchar(c);
            ++j;
            if (c == '\n' || j == SPACE_IN_TAB)
                j = -1;
        }
    }
    return 0;
}
