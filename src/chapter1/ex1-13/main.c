//
// Created by Felix  Chen on 6/1/21.
//
#include <stdio.h>

#define R_MAX 10 /* max range of histogram */
#define F_MAX 20 /* max frequency of histogram */

int main()
{
    int c, state, i, j, wlength;
    int wcount[R_MAX];
    wlength = 0;

    for (i = 0; i < R_MAX; ++i)
        wcount[i] = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t') {
            if (state == OUT)
                state = IN;
            ++wlength;

        }
        else if (state == IN) {
            state = OUT;
            if (wlength > R_MAX - 1)
                ++wcount[R_MAX - 1];
            else
                ++wcount[wlength - 1];
            wlength = 0;
        }
    }
    printf("Horizontal Histogram \n");
    printf("-------------------- \n");
    /* Horizontal Histogram */
    for (i = 1; i <= R_MAX; ++i) {
        if (i != R_MAX) {
            printf("%i \t\b\b\b\b: %i | ", i, wcount[i - 1]);
        }
        else
            printf("%s \t\b\b\b\b: %i | ", "10+", wcount[i - 1]);
        for (j = 1; j <= wcount[i - 1]; ++j)
            putchar('*');
        putchar('\n');
    }
    printf("\n\nVertical Histogram \n");
    printf("------------------ \n");

    /* Vertical Histogram */
    for (i = F_MAX; i >= 0; --i) {
        if (i != 0) {
            printf("%i \t\b\b\b\b\b| ", i);
            for (j = 0; j < R_MAX; ++j)
                if (i <= wcount[j])
                    printf("* ");
                else
                    printf("  ");
            printf("\n");
        }


    }
    printf("\t\b\b\b\b\b------------------------\n");
    printf("\t\b\b\b\b\b  1 2 3 4 5 6 7 8 9 10+");
    return 0;
}