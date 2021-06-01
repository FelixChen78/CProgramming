//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        if (c == '\b') // ctrl h
            printf("\\b");
        if (c == '\\') // /
            printf("\\\\");
        if (c == '\t') // tab
            printf("\\t");
        if(c != '\t' && c != '\b' && c != '\\')
            putchar(c);
    }
    return 0;
}