//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define SPACE_IN_TAB 7 /* number of blank space to replace tab */
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main()
{
    int c, state, spaceCount, spaceReduce;
    state = OUT;
    spaceReduce = 1;
    spaceCount = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            if (state == OUT) {
                state = IN;
                spaceCount = 0;
            }
            if (c != '\n')
                ++spaceReduce;
            if (spaceReduce > SPACE_IN_TAB)
                spaceReduce = 1;

            putchar(c);
        }
        else {
            ++spaceCount;
            if (spaceCount >= (SPACE_IN_TAB - spaceReduce)) {
                putchar('\t');
                spaceCount -= (SPACE_IN_TAB - spaceReduce);
            }
            if (state == IN) {
                state = OUT;
                spaceReduce = 1;
            }
        }
    }

    return 0;
}