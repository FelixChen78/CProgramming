//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

int main()
{
    int c, b, t, n;
    b = 0;
    t = 0;
    n = 0;
    while((c = getchar()) != EOF) {
        if (c == '\n')
            ++n;
        if (c == '\t')
            ++t;
        if (c == ' ')
            ++b;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", b, t, n);
    return 0;
}