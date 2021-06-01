//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define ASCII_RANGE 127 /* range of ASCII values */

int main()
{
    int c, i, j;
    int characters[ASCII_RANGE];
    int characterFrequency[ASCII_RANGE];


    for (i = 0; i < ASCII_RANGE; ++i) {
        characterFrequency[i] = 0;
        characters[i] = i;
    }

    while ((c = getchar()) != EOF)
        if (c != '\n' && c != '\t' && c != ' ') {
            for (i = 0; i < ASCII_RANGE; ++i)
                if (characters[i] == c)
                    ++characterFrequency[i];
        }

    for (i = 0; i < ASCII_RANGE; ++i) {
        if (characterFrequency[i] != 0) { //ASCII 0 is null
            printf("%c: %d | ", characters[i], characterFrequency[i]);
            for (j = 0; j < characterFrequency[i]; ++j)
                putchar('*');
            putchar('\n');
        }
    }
    return 0;
}