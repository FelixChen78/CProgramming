//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define true 1
#define false 0

int main()
{
    int c, slash = false, astrix = false, singleComment = false, multiComment = false, quote = false, doubleQuote = false;
    while ((c = getchar()) != EOF) {
        if (!singleComment && !multiComment && !quote && !doubleQuote) {
            if (c == '/' && !slash) {
                slash = true;
            }
            else if (slash && c == '*') {
                slash = false;
                multiComment = true;
            }
            else if (slash && c == '/') {
                slash = false;
                singleComment = true;
            }
            else {
                slash = 0;
                if (c == '\'') {
                    quote = true;
                }
                if (c == '\"') {
                    doubleQuote = true;
                }

                putchar(c);

            }
        }
            //ignores all characters until comment termination
        else if (singleComment) {
            if (c == '\n') {
                singleComment = false;
                putchar('\n');
            }
        }
        else if (multiComment) {
            if (c == '*') {
                astrix = true;
            }
            else if (astrix) {
                astrix = false;
                if (c == '/') {
                    multiComment = false;
                }
            }
        }
            //continues to print all characters inside quotes
        else {
            if (quote) {
                //quote termination
                if (c == '\'') {
                    quote = false;
                }
            }
            if (doubleQuote) {
                //double quote termination
                if (c == '\"') {
                    doubleQuote = false;
                }
            }
            putchar(c);
        }
    }

    return 0;
}