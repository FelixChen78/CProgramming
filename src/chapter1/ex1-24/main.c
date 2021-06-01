//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define true 1
#define false 0

int main()
{
    int c;
    int slash = false;
    int backslash = false;
    int comment = false;
    int multiComment = false;
    int astrix = false;
    int quote = false;
    int doubleQuote = false;
    int bracket = false;
    int braces = false;
    int parenthesis = false;


    while ((c = getchar()) != EOF) {
        //can't enter comment state while in quote state
        if (!quote && !doubleQuote) {
            //initialize comment state
            if (!slash && c == '/') {
                slash = true;
            }
            else if (slash) {
                if (c == '/') {
                    comment = true;
                }
                if (c == '*') {
                    multiComment = true;
                }
            }
            //terminate comment state
            if (comment && c == '\n') {
                comment = false;
            }
            if (multiComment) {
                if (!astrix && c == '*') {
                    astrix = true;
                }
                else if (astrix) {
                    astrix = false;
                    if (c == '/') {
                        multiComment = false;
                    }
                }
            }
        }
        //can't enter quote state while in comment state
        if (!comment && !multiComment) {
            //initialize else terminate quote state
            if (c == '\'') {
                if (!quote && !doubleQuote) {
                    quote = true;
                }
                else if (doubleQuote) {
                    //unmatched quote
                    printf("EXPECTED DOUBLE QUOTE \n");
                }
                else {
                    quote = false;
                }
            }
            if (c == '\"') {
                if (!quote && !doubleQuote) {
                    doubleQuote = true;
                }
                else if (quote) {
                    //unmatched double quote
                    printf("EXPECTING QUOTE \n");
                }
                else {
                    doubleQuote = false;
                }
            }
        }
        //escape sequence check only in quote state
        if (quote || doubleQuote) {
            if (!backslash && c == '\\') {
                backslash = true;
            }
            else if (backslash) {
                backslash = false;
                if (c != 'b' && c != 't' && c != '\'' && c != '\"' && c != 'n' && c != 'f' && c != 'r' && c != '?' && c != 'a' && c != '\\') {
                    printf("INVALID ESCAPE SEQUENCE \n");
                }
            }
        }
        if (!comment && !multiComment && !quote && !doubleQuote) {
            if (!parenthesis && !bracket && !braces) {
                if (c == '{') {
                    braces = true;
                }
                if (c == '[') {
                    bracket = true;
                }
                if (c == '(') {
                    parenthesis = true;
                }
                if (c == '}' || c == ']' || c == ')') {
                    printf("INVALID START \n");
                }
            }
            if (parenthesis) {
                if (c == '}' || c == ']') {
                    parenthesis = false;
                    printf("INVALID PARENTHESIS PAIR \n");
                }
                if (c == ')') {
                    parenthesis = false;
                }
            }
            if (bracket) {
                if (c == '}' || c == ')') {
                    bracket = false;
                    printf("INVALID BRACKET PAIR \n");
                }
                if (c == ']') {
                    bracket = false;
                }
            }
            if (braces) {
                if (c == ')' || c == ']') {
                    braces = false;
                    printf("INVALID BRACES PAIR \n");
                }
                if (c == '}') {
                    braces = false;
                }
            }
        }
    }

    return 0;
}