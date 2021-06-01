//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define MAX_LINE 1000 /* maximum input line length */
#define FOLD_MAX 10 /* max number of char allowed per line */

int main()
{
    int lines = 1; // num of lines
    int count = 0; // elem in arr
    int indicesCount = 0;
    int c, i;

    char line[MAX_LINE];
    int indices[MAX_LINE];

    while ((c = getchar()) != EOF) {
        //reads in line
        if (c != '\n') {
            if (c == ' ' ||  c == '\t') {
                //will not use arr for solution, only indicesCount
                //can be used to place a new line at a specific index where space and tab occurs
                indices[indicesCount++] = count;
            }
            line[count++] = c;
        }
            //formats line into multiple lines
        else {
            line[count++] = c;
            if (count <= FOLD_MAX) {
                printf("%s", line);
            }
            else if (indicesCount > 0) {
                for (i = 0; i < count; ++i) {
                    //my solution new lines every space or tab
                    //modified solution could be to newline space or tab nearing FOLD_MAX using indices arr
                    if (line[i] == '\t' || line[i] == ' ') {
                        putchar('\n');
                    }
                    else {
                        putchar(line[i]);
                    }
                }
            }
            else {
                for (i = 0; i < count; ++i) {
                    if (i == (lines * FOLD_MAX)) {
                        printf("-\n");
                        ++lines;
                    }
                    putchar(line[i]);
                }
            }
            for (i = 0; i < count; ++i) {
                line[i] = '\0';
            }
            count = 0;
            indicesCount = 0;
            lines = 1;
        }
    }

    return 0;
}