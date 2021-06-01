//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define NON_BLANK '_' /* used as sentinel */

int main()
{
    int c, pc;
    pc = NON_BLANK;
    while((c = getchar()) != EOF) {
        if(c == ' ') {
            if(pc != ' ')
                putchar(c);
        }
        else {
            putchar(c);
        }
        pc = c;
    }
    return 0;
}